














#include <iostream>
#include "../include/lexer/lexer.h"
#include <string>
#include "../include/cli11.hpp"
using namespace std;
int main(int argc, char** argv){
    CLI::App app{"App description"};
    argv = app.ensure_utf8(argv);

    std::string filename = "default";
    app.add_option("-f,--file", filename, "A help string");

    CLI11_PARSE(app, argc, argv);
    string code = "var variavel := 10 \n";
    string csv = lexer(code);
    std::cout<<csv;
    return 0;
}