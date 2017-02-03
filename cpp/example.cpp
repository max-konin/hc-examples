#include <string>
#include <iostream>
#include "restclient-cpp/connection.h"
#include "restclient-cpp/restclient.h"

int main(int argc, char* argv[]) {

  RestClient::Connection* conn = new RestClient::Connection("hc-host.example.com");

  // set headers
  RestClient::HeaderFields headers;
  headers["Accept"] = "application/json";
  conn->SetHeaders(headers);


  RestClient::Response hypernets = conn->get("/api/v1/lists/graph_adjacency/5892fa1caf18c22abb000001  ");

  std::cout << hypernets.code << " " << hypernets.body;

  return 0;
}