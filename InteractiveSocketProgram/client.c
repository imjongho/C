#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>  // Windows 소켓 프로그래밍에 필요한 함수와 구조체를 포함하는 헤더 파일
#include <ws2tcpip.h>  // inet_pton을 위한 헤더
//inet_addr대신 현대적인 inet_pton을 쓰기 위해 프로젝트 속성의 링커, 입력, 추가 종속성에 ws2_32.lib 라이브러리 추가

#define BUFSIZE 1024
#define SERVER_IP "127.0.0.1"   // 서버의 IP주소 정의
#define SERVER_PORT 5010        // 서버의 Port번호 정의

int main() {
    WSADATA wsaData;
    SOCKET clientSocket;    // 클라이언트 소켓
    SOCKADDR_IN serverAddr;     // 서버의 주소 정보를 저장할 구조체
    char message[BUFSIZE];
    int strLen;

    // Winsock 라이브러리를 초기화(필수 호출)
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        exit(1);
    }
    
    // 1. 소켓 생성, AD_INET은 IPv4네트워크 주소 체계, SOCK_STREAM은 TCP 연결 지향형 소켓
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET) {
        WSACleanup();
        exit(1);
    }

    // 2. 서버 주소 설정
    // inet_pton은 문자열 형태의 IP주소를 네트워크 바이트 순서로 변환하여 serverAddr.sin_addr에 저장
    // htons는 호스트 바이트 순서의 포트 번호를 네트워크 바이트 순서로 변환
    serverAddr.sin_family = AF_INET;
    if (inet_pton(AF_INET, SERVER_IP, &serverAddr.sin_addr) <= 0) {
        printf("Error: Invalid address\n");
        closesocket(clientSocket);
        WSACleanup();
        exit(1);
    }
    serverAddr.sin_port = htons(SERVER_PORT);

    // 3. 연결 요청
    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        printf("Error: Connection failed\n");
        closesocket(clientSocket);
        WSACleanup();
        exit(1);
    }

    printf("Connection Success\n");

    // 4. 데이터 송수신
    while (1) {
        // fgets를 통해 사용자로부터 메시지를 입력 받음
        printf("클라이언트|송신 메시지 입력(종료: exit) : ");
        fgets(message, BUFSIZE, stdin);
        // strcmp는 문자열 비교 함수
        if (strncmp(message, "exit", 4) == 0) {
            break;
        }

        // send 함수를 통해 서버로 송신
        send(clientSocket, message, (int)strlen(message), 0);
        // recv 함수를 통해 서버로터 응답을 받음(수신)
        strLen = recv(clientSocket, message, BUFSIZE - 1, 0);
        // 수신된 데이터의 끝에 널 문자(\0)를 추가합니다. C언어에서 문자열은 널 문자로 끝나야 함
        message[strLen] = 0;
        printf("클라이언트|수신 메시지: %s\n", message);
    }

    // 5. 소켓 닫기, Winsock 정리
    closesocket(clientSocket);
    WSACleanup();
    printf("연결 종료..\n");


    return 0;
}
