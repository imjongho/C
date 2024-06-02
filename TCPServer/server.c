#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#define BUFSIZE 1024
#define SERVER_PORT 5010

int main() {
    WSADATA wsaData;
    SOCKET serverSocket, clientSocket;
    SOCKADDR_IN serverAddr, clientAddr;

    int clientAddrSize;
    char message[BUFSIZE];
    int strLen;

    // Winsock 초기화
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        exit(1);
    }

    // 1. 소켓 생성
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        WSACleanup();
        exit(1);
    }

    // 서버 주소 설정
    // memset을 사용해 serverAddr 구조체를 0으로 초기화
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serverAddr.sin_port = htons(SERVER_PORT);

    // 2. 주소 할당
    if (bind(serverSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        closesocket(serverSocket);
        WSACleanup();
        exit(1);
    }

    // 3. 연결 요청 대기
    if (listen(serverSocket, 5) == SOCKET_ERROR) {
        closesocket(serverSocket);
        WSACleanup();
        exit(1);
    }

    // 4. 클라이언트 연결 요청 수락
    clientAddrSize = sizeof(clientAddr);
    // accept은 연결된 클라이언트의 소켓을 반환
    clientSocket = accept(serverSocket, (SOCKADDR*)&clientAddr, &clientAddrSize);
    if (clientSocket == INVALID_SOCKET) {
        closesocket(serverSocket);
        WSACleanup();
        exit(1);
    }

    printf("Connection Success\n");

    // 5. 데이터 송수신
    while (1) {
        strLen = recv(clientSocket, message, BUFSIZE - 1, 0);
        if (strLen <= 0) {
            break; // 연결 종료
        }

        message[strLen] = 0; // 널 종료 문자 추가
        printf("서버|수신 메시지: %s\n", message);

        printf("서버|송신 메시지 입력(exit) : ");
        fgets(message, BUFSIZE, stdin);
        if (strncmp(message, "exit", 4) == 0) {
            break;
        }

        // 메시지 길이에서 개행 문자 제거
        strLen = (int)strlen(message);
        if (message[strLen - 1] == '\n') {
            message[strLen - 1] = '\0';
            strLen--;
        }

        // 클라이언트에게 응답 메시지 전송
        send(clientSocket, message, strLen, 0);
    }

    // 6. 소켓 닫기, Winsock 리소스 정리
    closesocket(clientSocket);
    closesocket(serverSocket);
    WSACleanup();
    printf("연결 종료..\n");

    return 0;
}
