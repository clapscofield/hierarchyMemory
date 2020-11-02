#include <iostream>
#include "../include/request.h"

Request::Request(){};

Request::Request(int enderecoN, int leituraEscrita, std::string dadoOp){
  endereco = enderecoN;
  tipoOperacao = leituraEscrita;
  dado = dadoOp;
}

Request::Request(int enderecoN, int leituraEscrita){
  endereco = enderecoN;
  tipoOperacao = leituraEscrita;
  dado = "";
}

void Request::printRequest(int requestNumber){
  std::cout << "Request : " << requestNumber << "\n";
  if(dado != ""){
    std::cout << "Endereço: " << endereco << " tipoOperacao: " <<  tipoOperacao <<
      " Dado: " << dado << "\n";
  } else {
    std::cout << "Endereço: " << endereco << " tipoOperacao: " <<  tipoOperacao
      << "\n";
  }
}
