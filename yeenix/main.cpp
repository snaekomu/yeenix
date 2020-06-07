//
//  main.cpp
//  yeenix
//
//  Created by Ignasi Granell on 07/06/2020.
//  Copyright © 2020 techniworm. All rights reserved.
//

#include <iostream>

using std::string;

void terminalLoop();
void init();

int main(int argc, const char * argv[]) {
    init();
    
    terminalLoop();
    return 0;
}

void terminalLoop() {
    while (true) {
        string cmd;
        std::cin >> cmd;
    }
}

void init() {
    
}
