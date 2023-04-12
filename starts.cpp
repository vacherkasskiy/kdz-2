//
// Created by cherk on 12.04.2023.
//

#include "starts.h"
#include "textGenerator.h"
#include "algorithims.h"
#include "cmake-build-debug/csvWriter.h"
#include <iostream>
#include <chrono>
#include <vector>

auto start = std::chrono::high_resolution_clock::now();
auto elapsed = std::chrono::high_resolution_clock::now() - start;
long long nanoseconds;
long long op = 0;

void startBinary_10000() {

    auto text = generateBinaryText(10000);
    std::string pattern;

    auto statistics = new std::pair<std::vector<short>, std::vector<long long>>[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateBinaryText(i * 100);

        start = std::chrono::high_resolution_clock::now();
        naiveAlgorithm(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        statistics[0].first.push_back(i);
        statistics[0].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        usualKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[1].first.push_back(i);
        statistics[1].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        optimizedKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[2].first.push_back(i);
        statistics[2].second.push_back(nanoseconds);
    }

    csvWrite(statistics, "startBinary_10000");
}

void startDna_10000() {

    auto text = generateDnaText(10000);
    std::string pattern;

    auto statistics = new std::pair<std::vector<short>, std::vector<long long>>[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateDnaText(i * 100);

        start = std::chrono::high_resolution_clock::now();
        naiveAlgorithm(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        statistics[0].first.push_back(i);
        statistics[0].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        usualKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[1].first.push_back(i);
        statistics[1].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        optimizedKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[2].first.push_back(i);
        statistics[2].second.push_back(nanoseconds);
    }

    csvWrite(statistics, "startDna_10000");
}

void startBinary_100000() {

    auto text = generateBinaryText(100000);
    std::string pattern;

    auto statistics = new std::pair<std::vector<short>, std::vector<long long>>[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateBinaryText(i * 100);

        start = std::chrono::high_resolution_clock::now();
        naiveAlgorithm(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        statistics[0].first.push_back(i);
        statistics[0].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        usualKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[1].first.push_back(i);
        statistics[1].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        optimizedKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[2].first.push_back(i);
        statistics[2].second.push_back(nanoseconds);
    }

    csvWrite(statistics, "startBinary_100000");
}

void startDna_100000() {

    auto text = generateDnaText(100000);
    std::string pattern;

    auto statistics = new std::pair<std::vector<short>, std::vector<long long>>[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateDnaText(i * 100);

        start = std::chrono::high_resolution_clock::now();
        naiveAlgorithm(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        statistics[0].first.push_back(i);
        statistics[0].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        usualKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[1].first.push_back(i);
        statistics[1].second.push_back(nanoseconds);

        start = std::chrono::high_resolution_clock::now();
        optimizedKMP(text, pattern);
        elapsed = std::chrono::high_resolution_clock::now() - start;
        nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
        std::cout << nanoseconds << "\n";
        statistics[2].first.push_back(i);
        statistics[2].second.push_back(nanoseconds);
    }

    csvWrite(statistics, "startDna_100000");
}