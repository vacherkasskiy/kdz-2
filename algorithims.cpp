//
// Created by cherk on 12.04.2023.
//

#include <string>
#include <vector>
#include "algorithims.h"

size_t naiveAlgorithm(const std::string &text, const std::string &pattern) {
    int count = 0;
    for (int i = 0; i <= text.size() - pattern.size(); i++) {
        int j;
        for (j = 0; j < pattern.size(); j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == pattern.size()) {
            count++;
        }
    }

    return count;
}


std::vector<uint64_t> getLPS(const std::string &pattern) {
    auto m = pattern.length();
    std::vector<uint64_t> lps(pattern.length());
    size_t j = 0;

    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[j]) {
            ++j;
            lps[i] = j;
            ++i;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                lps[i] = 0;
                ++i;
            }
        }
    }

    return lps;
}

size_t usualKMP(const std::string &text, const std::string &pattern) {
    auto m = pattern.length();
    auto n = text.length();
    auto lps = getLPS(pattern);
    auto answer = 0;

    size_t i = 0;
    size_t j = 0;

    while (i < n) {
        if (pattern[j] == text[i]) {
            ++i;
            ++j;
        }
        if (j == m) {
            ++answer;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                ++i;
            }
        }
    }
    return answer;
}

uint64_t optimizedKMP(const std::string &text, const std::string &pattern) {
    auto m = pattern.length();
    auto n = text.length();
    auto lps = getLPS(pattern);
    size_t answer = 0;

    size_t i = 0;
    size_t j = 0;

    while (i < n) {
        if (pattern[j] == text[i]) {
            ++i;
            ++j;
        }
        if (j == m) {
            ++answer;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1] > 0 ? lps[lps[j - 1] - 1] : 0;
            } else {
                ++i;
            }
        }
    }
    return answer;
}