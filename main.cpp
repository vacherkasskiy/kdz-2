#include <iostream>
#include <fstream>
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
