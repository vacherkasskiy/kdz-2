//
// Created by cherk on 12.04.2023.
//

#include "textGenerator.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <random>

std::string generateBinaryText(size_t length) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 1);
    std::string letters[] = {"a","b"};
    std::string ans;

    for (size_t i = 0; i < length; ++i) {
        ans += letters[dist(mt)];
    }

    return ans;
}

std::string generateDnaText(size_t length) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, 3);
    std::string letters[] = {"a","b","c","d"};
    std::string ans;

    for (size_t i = 0; i < length; ++i) {
        ans += letters[dist(mt)];
    }

    return ans;
}