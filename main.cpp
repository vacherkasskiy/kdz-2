#include <iostream>
#include <chrono>
#include "algorithims.h"
#include "textGenerator.h"

int main() {
    std::string text;
    std::string pattern;

    auto start = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    long long nanoseconds;
    long long op = 0;

    for (size_t i = 1; i < 30; ++i)  {
        text = generateBinaryText(10000);
        pattern = generateBinaryText(i * 100);

        start = std::chrono::high_resolution_clock::now();
        naiveAlgorithm(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";

        start = std::chrono::high_resolution_clock::now();
        usualKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";

        start = std::chrono::high_resolution_clock::now();
        optimizedKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
    }

    return 0;
}
