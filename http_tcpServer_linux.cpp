#include "./http_tcpServer_linux.h"
#include <iostream>
#include <sstream>
#include <unistd.h>

namespace{
  const int BUFFER_SIZE = 30720;
  
  void log(const std::string &message){
    std::cout << message << std::endl;
  }

  void exitWithError(const std::string &err){
    log("ERROR: " + err);
    exit(1);
  }
}


namespace http{
  TcpServer::TcpServer(std::string ip_address, int port)
  : m_ip_address(ip_address), m_port(port), m_socket(),
    m_new_socket(), m_incomingMessage(), m_socketAddress(),
    m_socketAddress_len(sizeof(m_socketAddress)),
    m_serverMessage(buildResponse())
  {
    if(this->startServer() != 0){
      std::ostringstream ss;
      ss << "failed to start server with PORT: " << ntohs(m_socketAddress.sin_port);
      log(ss.str());
    }
  }
  TcpServer::~TcpServer(){
    this->closeServer();
  }
  
  int TcpServer::startServer(){

  }
}
