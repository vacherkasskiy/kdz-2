//
// Created by cherk on 12.04.2023.
//

#include "starts.h"
#include "textGenerator.h"
#include "algorithims.h"
#include "cmake-build-debug/csvWriter.h"
#include "info.h"
#include <iostream>
#include <chrono>
#include <vector>

auto start = std::chrono::high_resolution_clock::now();
auto elapsed = std::chrono::high_resolution_clock::now() - start;
long long nanoseconds;
long long sum = 0;
size_t operations_amount = 0;

void startBinary_10000(std::ofstream &file) {

    auto text = generateBinaryText(10000);
    std::string pattern;

    auto statistics = new info[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateBinaryText(i * 100);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += naiveAlgorithm(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[0].iterations.push_back(i);
        statistics[0].time.push_back(sum);
        statistics[0].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += usualKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[1].iterations.push_back(i);
        statistics[1].time.push_back(sum);
        statistics[1].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += optimizedKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[2].iterations.push_back(i);
        statistics[2].time.push_back(sum);
        statistics[2].operations_amount.push_back(operations_amount);
    }

    csvWrite(file, statistics, "startBinary_10000");
}

void startDna_10000(std::ofstream &file) {

    auto text = generateDnaText(10000);
    std::string pattern;

    auto statistics = new info[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateDnaText(i * 100);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += naiveAlgorithm(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[0].iterations.push_back(i);
        statistics[0].time.push_back(sum);
        statistics[0].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += usualKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[1].iterations.push_back(i);
        statistics[1].time.push_back(sum);
        statistics[1].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += optimizedKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[2].iterations.push_back(i);
        statistics[2].time.push_back(sum);
        statistics[2].operations_amount.push_back(operations_amount);
    }

    csvWrite(file, statistics, "startDna_10000");
}

void startBinary_100000(std::ofstream &file) {

    auto text = generateBinaryText(100000);
    std::string pattern;

    auto statistics = new info[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateBinaryText(i * 100);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += naiveAlgorithm(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[0].iterations.push_back(i);
        statistics[0].time.push_back(sum);
        statistics[0].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += usualKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[1].iterations.push_back(i);
        statistics[1].time.push_back(sum);
        statistics[1].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += optimizedKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[2].iterations.push_back(i);
        statistics[2].time.push_back(sum);
        statistics[2].operations_amount.push_back(operations_amount);
    }

    csvWrite(file, statistics, "startBinary_100000");
}

void startDna_100000(std::ofstream &file) {

    auto text = generateDnaText(100000);
    std::string pattern;

    auto statistics = new info[3];

    for (short i = 1; i <= 30; ++i) {
        pattern = generateDnaText(i * 100);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += naiveAlgorithm(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[0].iterations.push_back(i);
        statistics[0].time.push_back(sum);
        statistics[0].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += usualKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[1].iterations.push_back(i);
        statistics[1].time.push_back(sum);
        statistics[1].operations_amount.push_back(operations_amount);

        sum = 0;
        operations_amount = 0;
        for (short j = 0; j < 50; ++j) {
            start = std::chrono::high_resolution_clock::now();
            operations_amount += optimizedKMP(text, pattern) / 50;
            elapsed = std::chrono::high_resolution_clock::now() - start;
            nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
            sum += nanoseconds / 50;
        }
        statistics[2].iterations.push_back(i);
        statistics[2].time.push_back(sum);
        statistics[2].operations_amount.push_back(operations_amount);
    }

    csvWrite(file, statistics, "startDna_100000");
}