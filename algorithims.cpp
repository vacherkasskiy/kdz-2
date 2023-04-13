//
// Created by cherk on 12.04.2023.
//

#include <string>
#include <vector>
#include "algorithims.h"

size_t naiveAlgorithm(const std::string &text, const std::string &pattern) {
    size_t operations_amount = 0;
    int count = 0;
    for (int i = 0; i <= text.size() - pattern.size(); i++) {
        int j;
        for (j = 0; j < pattern.size(); j++) {
            if (text[i + j] != pattern[j]) {
                ++operations_amount;
                break;
            }
        }
        if (j == pattern.size()) {
            count++;
        }
    }

    // вообще тут надо возвращать count, но это значение для статистики мы не используем
    // поэтому возвращаем количество операций.
    return operations_amount;
}


size_t getLPS(const std::string &pattern, uint64_t *lps) {
    size_t operations_amount = 0;
    auto m = pattern.length();
    size_t j = 0;

    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[j]) {
            ++operations_amount;
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

    return operations_amount;
}

size_t usualKMP(const std::string &text, const std::string &pattern) {
    auto lps = new uint64_t[pattern.length()];
    size_t operations_amount = 0;
    auto m = pattern.length();
    auto n = text.length();
    operations_amount += getLPS(pattern, lps);
    auto answer = 0;

    size_t i = 0;
    size_t j = 0;

    while (i < n) {
        if (pattern[j] == text[i]) {
            ++i;
            ++j;
            ++operations_amount;
        }
        if (j == m) {
            ++answer;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            ++operations_amount;
            if (j != 0) {
                j = lps[j - 1];
            } else {
                ++i;
            }
        }
    }

    // вообще тут надо возвращать count, но это значение для статистики мы не используем
    // поэтому возвращаем количество операций.
    return operations_amount;
}

uint64_t optimizedKMP(const std::string &text, const std::string &pattern) {
    auto lps = new uint64_t[pattern.length()];
    size_t operations_amount = 0;
    auto m = pattern.length();
    auto n = text.length();
    operations_amount += getLPS(pattern, lps);
    auto answer = 0;

    size_t i = 0;
    size_t j = 0;

    while (i < n) {
        if (pattern[j] == text[i]) {
            ++operations_amount;
            ++i;
            ++j;
        }
        if (j == m) {
            ++answer;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            ++operations_amount;
            if (j != 0) {
                j = lps[j - 1] > 0 ? lps[lps[j - 1] - 1] : 0;
            } else {
                ++i;
            }
        }
    }

    // вообще тут надо возвращать count, но это значение для статистики мы не используем
    // поэтому возвращаем количество операций.
    return operations_amount;
}