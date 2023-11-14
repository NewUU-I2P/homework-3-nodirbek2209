#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    if (macAddress[0]=='F' && macAddress[1]=='F'){
        return "Broadcast";
    }else if (macAddress[1]=='8'){
        return "Unicast";
    } else{
        return "Multicast";
    }

    // make use of control flow statements
    // return result;
}
