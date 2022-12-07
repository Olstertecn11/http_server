#include "./http_tcpServer_linux.h"
#include <iostream>
#include <sstream>
#include <unistd.h>


namespace http{
  TcpServer::TcpServer(std::string ip_address, int port)
  : m_ip_address(ip_address), m_port(port), m_socket(),
    m_new_socket(), m_incomingMessage(), m_socketAddress(),
    m_socketAddress_len(sizeof(m_socketAddress)),
    m_serverMessage(buildResponse())
  {
    this->startServer();

  }
  TcpServer::~TcpServer(){

  }
  
  int TcpServer::startServer(){

  }
}
