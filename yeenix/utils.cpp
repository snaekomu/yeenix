//
//  utils.cpp
//  yeenix
//
//  Created by Ignasi Granell on 08/06/2020.
//  Copyright © 2020 techniworm. All rights reserved.
//

#include "utils.hpp"

std::vector<std::string> parse_args(std::string in) {
    std::vector<std::string> ret{};
    std::string word{};
    for (char c : in) {
        if (c != ' ') {
            word += c;
        } else {
            ret.push_back(word);
            word = "";
        }
    }
    return ret;
}
