#include "OutputFormat.hpp"

#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <math.h>
#include <sstream>
#include <limits>
#include <vector>

using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;

void write_output(double T_W) {
    ofstream outputfile;
    outputfile.open("output.txt", std::fstream::out);
    outputfile << "T_W = ";
    outputfile << T_W << std::endl;
    outputfile.close();
}
