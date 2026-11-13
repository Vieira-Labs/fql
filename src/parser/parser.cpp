#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <vector>
#include "../../include/lexer/lexer.h"
#include "../../include/parser/parser.h"
using namespace std;
int parser(string fileName) {
    ifstream file(fileName);
    string line;
    while(getline(file, line)){
        vector tokens = lexer(line);
        
        // tokens conditions----------------------------------
        
        // EXAMPLE WITH NM SYNTAX
        if(tokens[0] == "NM"){
            if(tokens[1] == "="){
                cout<<"founded 'nm =' \n";
                // ya will can add a stuff like
                // 'compareName(tokens[2])' here.

            }
        }
        // add more syntax conditions here.

    }
    file.close();
    filesystem::remove("CODE"); 
    return 0;
}