Chat Application - README

Overview
This chat application allows multiple clients to connect to a server and communicate with each other in real time. The server and client applications are built using BSD Sockets in C++. The communication protocol uses a length-prefixed message framing system and handles messages in a non-blocking, concurrent manner. The project includes a Buffer class to serialize and deserialize data, following a little-endian protocol for numeric values.

Features 
Server:
Concurrent Client Handling: The server handles multiple clients without blocking. It supports either one thread per connection or non-blocking I/O using select().
Message Broadcasting: Messages sent by one client are broadcasted to all other clients.
Concurrency: Connections and message handling are handled concurrently.
Proper Message Deserialization: Messages are properly deserialized according to the protocol.

Client:
Join/Leave Room: Clients can join and leave the server's chat room.
Send Messages: Clients can send messages that are broadcasted to all other connected clients.
Receive Messages: Clients receive messages from other clients in the room.

Protocol Specifications
Length Prefix Message Framing: Each message sent between the client and server is framed with a length prefix, ensuring that the entire message is read in the correct order.
Little Endian Encoding: All numerical values are serialized using little endian encoding. Strings do not require endian swapping, as they are sequences of characters.

Buffer Class Features
The Buffer class is responsible for serializing and deserializing messages. It includes the following functionalities:
Initialization: The buffer is initialized with a given size N.
Dynamic Growth: If the buffer size exceeds the current allocation during serialization, it dynamically grows to accommodate more data.
Serialization/Deserialization: It supports the following operations:
Unsigned integers (32-bit)
Strings

Requirements
C++17 or later
Windows (with Winsock) or any OS supporting BSD Sockets
C++ compiler (e.g., g++, clang++, or MSVC)
How to Initialize the Application
Leave space to provide detailed steps for initializing the server and client applications, including installation of dependencies (e.g., Winsock on Windows) and compiling the code.

How to Use the Application
1. Clone the project from the git hub library.
2. Go to NetworkProgramming_Project1.sln and build the solution.
3. Go to the x64/debug file and click on the ServerClient_p1 exe to start the server .
4. Simultaneously open the ChatClient_p1 exe to start the caht client.
5. Enter the client/user name to start chatting.
6. Type /exit to exit the chat and server.
