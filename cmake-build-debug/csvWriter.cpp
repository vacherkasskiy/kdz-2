//
// Created by cherk on 12.04.2023.
//

#include <fstream>
#include "csvWriter.h"

void csvWrite(std::ofstream &file, info *statistics,
              const std::string &name) {
    // id, pattern length, time, operations amount

    file << name << "\n";
    for (size_t i = 0; i < 3; ++i) {
        if (file.is_open()) {
            for (size_t j = 0; j < 30; ++j) {
                file << i << ";"
                << statistics[i].iterations.at(j) << ";"
                << statistics[i].time.at(j) << ";"
                << statistics[i].operations_amount.at(j);
                file << "\n";
            }
        }
    }
}

