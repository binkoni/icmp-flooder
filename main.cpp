#include <iostream>
#include "flood/flooder.h"


int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cout << "Usage: ./flooder <src_ip> <dst_ip> <thread_num>" << "\n";
        return 1;
    }

    flood::Flooder flooder;
    flooder.flood(argv[1], argv[2], argv[3]);

    return 0;
}