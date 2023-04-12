#include <iostream>
#include <chrono>
#include <vector>
#include <fstream>
#include "algorithims.h"
#include "textGenerator.h"
#include "starts.h"


int main() {
    std::ofstream file("data.csv", std::ios_base::app);

    startBinary_10000(file);
    startDna_10000(file);
    startBinary_100000(file);
    startDna_100000(file);

    file.close();
    return 0;
}
