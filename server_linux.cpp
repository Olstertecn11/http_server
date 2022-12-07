#include "http_tcpServer_linux.cpp"
#include <iostream>



int main(){
  using namespace http;
  TcpServer server = TcpServer("0.0.0.0", 8080);
  server.startListen();
  std::cout << "server is running... \n";
  return 0;
}
