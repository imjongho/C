#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>  // Windows ���� ���α׷��ֿ� �ʿ��� �Լ��� ����ü�� �����ϴ� ��� ����
#include <ws2tcpip.h>  // inet_pton�� ���� ���
//inet_addr��� �������� inet_pton�� ���� ���� ������Ʈ �Ӽ��� ��Ŀ, �Է�, �߰� ���Ӽ��� ws2_32.lib ���̺귯�� �߰�

#define BUFSIZE 1024
#define SERVER_IP "127.0.0.1"   // ������ IP�ּ� ����
#define SERVER_PORT 5010        // ������ Port��ȣ ����

int main() {
    WSADATA wsaData;
    SOCKET clientSocket;    // Ŭ���̾�Ʈ ����
    SOCKADDR_IN serverAddr;     // ������ �ּ� ������ ������ ����ü
    char message[BUFSIZE];
    int strLen;

    // Winsock ���̺귯���� �ʱ�ȭ(�ʼ� ȣ��)
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        exit(1);
    }
    
    // 1. ���� ����, AD_INET�� IPv4��Ʈ��ũ �ּ� ü��, SOCK_STREAM�� TCP ���� ������ ����
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET) {
        WSACleanup();
        exit(1);
    }

    // 2. ���� �ּ� ����
    // inet_pton�� ���ڿ� ������ IP�ּҸ� ��Ʈ��ũ ����Ʈ ������ ��ȯ�Ͽ� serverAddr.sin_addr�� ����
    // htons�� ȣ��Ʈ ����Ʈ ������ ��Ʈ ��ȣ�� ��Ʈ��ũ ����Ʈ ������ ��ȯ
    serverAddr.sin_family = AF_INET;
    if (inet_pton(AF_INET, SERVER_IP, &serverAddr.sin_addr) <= 0) {
        printf("Error: Invalid address\n");
        closesocket(clientSocket);
        WSACleanup();
        exit(1);
    }
    serverAddr.sin_port = htons(SERVER_PORT);

    // 3. ���� ��û
    if (connect(clientSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        printf("Error: Connection failed\n");
        closesocket(clientSocket);
        WSACleanup();
        exit(1);
    }

    printf("Connection Success\n");

    // 4. ������ �ۼ���
    while (1) {
        // fgets�� ���� ����ڷκ��� �޽����� �Է� ����
        printf("Ŭ���̾�Ʈ|�۽� �޽��� �Է�(����: exit) : ");
        fgets(message, BUFSIZE, stdin);
        // strcmp�� ���ڿ� �� �Լ�
        if (strncmp(message, "exit", 4) == 0) {
            break;
        }

        // send �Լ��� ���� ������ �۽�
        send(clientSocket, message, (int)strlen(message), 0);
        // recv �Լ��� ���� �������� ������ ����(����)
        strLen = recv(clientSocket, message, BUFSIZE - 1, 0);
        // ���ŵ� �������� ���� �� ����(\0)�� �߰��մϴ�. C���� ���ڿ��� �� ���ڷ� ������ ��
        message[strLen] = 0;
        printf("Ŭ���̾�Ʈ|���� �޽���: %s\n", message);
    }

    // 5. ���� �ݱ�, Winsock ����
    closesocket(clientSocket);
    WSACleanup();
    printf("���� ����..\n");


    return 0;
}
