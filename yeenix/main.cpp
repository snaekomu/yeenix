//
//  main.cpp
//  yeenix
//
//  Created by Ignasi Granell on 07/06/2020.
//  Copyright © 2020 techniworm. All rights reserved.
//

#include <iostream>
#include "utils.hpp"

using Args = std::vector<std::string>;

void ysh_loop();
void init();
int ysh_execute(Args);

int main(int argc, const char * argv[]) {
    init();
    
    ysh_loop();
    return 0;
}

void ysh_loop() {
    int status = 0;
    std::string user_in{};

    do {
        std::cout << "> " << std::endl;
        std::cin >> user_in;
        Args args = parse_args(user_in);
        status = ysh_execute(args);
    } while (!status);
}

int ysh_execute (Args args) {
    return 0;
}

void init() {
    
}
