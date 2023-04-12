//
// Created by cherk on 12.04.2023.
//

#ifndef KDZ_2_CSVWRITER_H
#define KDZ_2_CSVWRITER_H

#include <iostream>
#include <vector>

void csvWrite(std::ofstream &file, std::pair<std::vector<short>, std::vector<long long>> *statistics, const std::string &name);

#endif //KDZ_2_CSVWRITER_H
