//
// Created by cherk on 12.04.2023.
//

#include <fstream>
#include "csvWriter.h"

void csvWrite(std::ofstream &file, std::pair<std::vector<short>, std::vector<long long>> *statistics,
              const std::string &name) {
    // id, pattern length, time

    file << name << "\n";
    for (size_t i = 0; i < 3; ++i) {
        if (file.is_open()) {
            for (size_t j = 0; j < 30; ++j) {
                file << i << ";" << statistics[i].first.at(j) << ";" << statistics[i].second.at(j);
                file << "\n";
            }
        }
    }
}

