//
// Created by cherk on 12.04.2023.
//

#ifndef KDZ_2_CSVWRITER_H
#define KDZ_2_CSVWRITER_H

#include <iostream>
#include <vector>
#include "../info.h"

void csvWrite(std::ofstream &file, info *statistics,
              const std::string &name);

#endif //KDZ_2_CSVWRITER_H
