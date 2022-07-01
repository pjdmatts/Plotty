#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "gnuplot.h"

int main(){
    std::string filepath;
    std::string begin = "plot \"";
    std::string end = "\" with lines";
    std::cout << "Please Provide the path to the file you would like to analyze" << std::endl;
    std::getline(std::cin, filepath);
    std::stringstream(filepath) >> filepath;
    std::string command = begin + filepath + end;
    GnuplotPipe gp;
    gp.sendLine("set datafile separator \',\'");
    gp.sendLine(command);
    //gp.sendLine("plot [-pi/2:pi] cos(x),-(sin(x) > sin(x+1) ? sin(x) : sin(x+1))");
    return 0;
}
