














#include <string>
#include "../../include/lexer/lexer.h"
#include <vector>

using namespace std;

vector<string> lexer(std::string content){
    if(content.back() != ' ') content += ' ';
    vector<string> tokens;
    string charcollector;
    for(int character = 0; content[character] != '\0'; character++){
        if(content[character] == ' ' ) {
            tokens.push_back(charcollector);
            charcollector = "";
        }
        else if(content[character] == '\n'){
            tokens.push_back(charcollector);
            charcollector = "";

        }
        else{
            charcollector += content[character]; 
        }
    }
    return tokens;
}
