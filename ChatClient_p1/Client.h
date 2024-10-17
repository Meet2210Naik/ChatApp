//#pragma once
//#include <buffer.h>
//#include <map>
//#include <buffer.h>
//#include <Windows.h>
//#include <WinSock2.h>
//#include <Ws2tcpip.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string>
//
//class Client
//{
//public:
//
//	void BroadCastMessage(const std::string& message, const std::string& room);
//
//	void HandleClientJoin(SOCKET clientSocket, const std::string& room);
//
//	void HandleClientLeave(SOCKET clientSocket);
//
//	void DeserializeAndBroadcast(SOCKET clientSocket, const std::string& room, const char* data, int length);
//
//private:
//
//	std::map<SOCKET, std::string> clientRoom;
//
//
//
//};