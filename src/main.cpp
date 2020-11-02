#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "../include/request.h"
#include "../include/cache.h"
using namespace std;

const int MAX_REQUESTS = 1000;

vector<string> splitLine(string str){
  string buf;                 // Have a buffer string
  stringstream ss(str);       // Insert the string into a stream

  vector<string> tokens; // Create vector to hold our data

  while (ss >> buf)
      tokens.push_back(buf);

  return tokens;
}


int main(){
  // Create a Cache with 64 blocos:
  //Cache cache(64);

  //Get CPU requests
  string line;
  Request* requests = new Request[MAX_REQUESTS];
  string element = "";
  vector<string> elements;
  int numberOfRequests = 0;
  ifstream myfile("./src/requests.txt");
  //Read file
  if (myfile.is_open()){
    while (getline(myfile,line)){
      int i = 0;
      elements = splitLine(line);
      requests[numberOfRequests].endereco = stoi(elements[0]);
      requests[numberOfRequests].tipoOperacao = stoi(elements[1]);
      if(requests[numberOfRequests].tipoOperacao == 1){
        requests[numberOfRequests].dado = elements[2];
      } else {
        requests[numberOfRequests].dado = "";
      }
      i++;
      numberOfRequests++;
    }
    myfile.close();
  } else cout << "Erro ao abrir arquivo";

  //Visualize requests
  for(int i = 0; i < numberOfRequests; i++){
    requests[i].printRequest(i);
  }

  //Process Requests

  return 0;
}
