














#include <string>
#include "../../include/lexer/lexer.h"
#include <vector>
using namespace std;

vector<string> lexer(std::string content){
    if(content[-1]!= ' ') content += ' ';
    vector<string> tokens;
    string charcollector;
    int tokencounter = 0;  
    for(int character = 0; content[character] != '\0'; character++){
        if(content[character] == ' ' ) {
            tokens.push_back(charcollector);
            charcollector = "";
        }
        else if(content[character] == '\n'){
            tokencounter = 0;
            charcollector = "";

        }
        else{
            charcollector += content[character]; 
        }
    }
    return tokens;
}
