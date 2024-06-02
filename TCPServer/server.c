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

    // Winsock �ʱ�ȭ
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        exit(1);
    }

    // 1. ���� ����
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET) {
        WSACleanup();
        exit(1);
    }

    // ���� �ּ� ����
    // memset�� ����� serverAddr ����ü�� 0���� �ʱ�ȭ
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serverAddr.sin_port = htons(SERVER_PORT);

    // 2. �ּ� �Ҵ�
    if (bind(serverSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        closesocket(serverSocket);
        WSACleanup();
        exit(1);
    }

    // 3. ���� ��û ���
    if (listen(serverSocket, 5) == SOCKET_ERROR) {
        closesocket(serverSocket);
        WSACleanup();
        exit(1);
    }

    // 4. Ŭ���̾�Ʈ ���� ��û ����
    clientAddrSize = sizeof(clientAddr);
    // accept�� ����� Ŭ���̾�Ʈ�� ������ ��ȯ
    clientSocket = accept(serverSocket, (SOCKADDR*)&clientAddr, &clientAddrSize);
    if (clientSocket == INVALID_SOCKET) {
        closesocket(serverSocket);
        WSACleanup();
        exit(1);
    }

    printf("Connection Success\n");

    // 5. ������ �ۼ���
    while (1) {
        strLen = recv(clientSocket, message, BUFSIZE - 1, 0);
        if (strLen <= 0) {
            break; // ���� ����
        }

        message[strLen] = 0; // �� ���� ���� �߰�
        printf("����|���� �޽���: %s\n", message);

        printf("����|�۽� �޽��� �Է�(exit) : ");
        fgets(message, BUFSIZE, stdin);
        if (strncmp(message, "exit", 4) == 0) {
            break;
        }

        // �޽��� ���̿��� ���� ���� ����
        strLen = (int)strlen(message);
        if (message[strLen - 1] == '\n') {
            message[strLen - 1] = '\0';
            strLen--;
        }

        // Ŭ���̾�Ʈ���� ���� �޽��� ����
        send(clientSocket, message, strLen, 0);
    }

    // 6. ���� �ݱ�, Winsock ���ҽ� ����
    closesocket(clientSocket);
    closesocket(serverSocket);
    WSACleanup();
    printf("���� ����..\n");

    return 0;
}
