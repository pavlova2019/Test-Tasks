#define CPPHTTPLIB_OPENSSL_SUPPORT

#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <regex>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "web_page.h"
#include "max_five_vector.h"
#include "crawler.h"




const int DELAY = 12;
const int MAXRECV = 140 * 1024;


std::string request(std::string host, std::string path) {
    std::string request = "GET ";
    request.append(path);
    request.append(" HTTP/1.1\r\n");
    request.append("Host: ");
    request.append(host);
    request.append("\r\n");
    request.append("Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.81\r\n");
    request.append("Connection: close\r\n");
    request.append("\r\n");
    return request;


int main() {
       
    

    
    return 0;
}
