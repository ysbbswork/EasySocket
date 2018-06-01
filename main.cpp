#include<iostream>
#include"EasySocket.h"
#pragma comment(lib,"ws2_32.lib")//VS need include ws2_32.dll
int main() {

	using namespace SocketLib;
	ListeningSocket lsock;
	DataSocket dsock;
	lsock.Listen(5000);//port 5000
	dsock = lsock.Accept();
	char buffer[128] = "Hello clent!";
	dsock.Send(buffer, strlen(buffer));
	dsock.Receive(buffer, 128);
	std::cin.get();
	return 0;

}