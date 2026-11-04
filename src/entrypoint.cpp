














#include <iostream>
#include "../include/lexer/lexer.h"
#include <string>
#include "../include/cli11.hpp"
#include <cstdlib>
#include <fstream>
#include <vector>
using namespace std;
int main(int argc, char** argv){
    CLI::App app{"App description"};
    argv = app.ensure_utf8(argv);

    std::string filename = "default";
    app.add_option("-f,--file", filename, "A help string");

    CLI11_PARSE(app, argc, argv);
    
    // see the project number of commits
    [[maybe_unused]] int result =
        std::system("git rev-list --count HEAD > commits");

    ifstream file("commits");
    string number;
    getline(file, number);

    cout<<"==========FILE QUERY LANGUAGE COMMIT "<<number<< " ==============\n";
    string code;
    while(1){
        string line;
        cout<<">";
        getline(cin, line);
        code += line;
        if(line == "return") break;

    }
 
    return 0;
}