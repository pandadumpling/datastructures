//
//  main.cpp
//  staticarray
//
//  Created by Dwivedi, Sunita on 8/21/19.
//  Copyright © 2019 SD. All rights reserved.
//

#include <iostream>
#include <array>

int main(int argc, const char * argv[]) {
    std::array<int,5> data;
    data[0] = 1;
    data[1] = 2;
    std::cout << "Data count " << data[0] << "\n";
    return 0;
}
