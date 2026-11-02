














#include <string>
#include "../../include/lexer/lexer.h"

using namespace std;

std::string lexer(std::string content){
    string finalcsv = "";
    string charcollector;
    int tokencounter = 0;  
    string firstToken;
    for(int character = 0; content[character] != '\0'; character++){
        if(content[character] == ' ' ) {
            if(charcollector == "var"){
                if(tokencounter == 0) firstToken = "[TOKEN_VAR]";
                finalcsv += "[TOKEN_VAR], " + charcollector + '\n';
                charcollector = "";
                tokencounter++;
                }
            else if(charcollector == ":="){
                finalcsv += "[TOKEN_ATTRIBUTION], " + charcollector + '\n';
                charcollector = "";
            }
            // ADD NEW TOKENS HERE!
            else{
                if(tokencounter == 1 && firstToken == "[TOKEN_VAR]") {
                    finalcsv += "[TOKEN_VAR_NAME], " + charcollector + '\n';
                    charcollector = "";
                }
                else{
                    // invalid tokens here!!!   
                }
            }
        }
        else if(content[character] == '\n'){
            tokencounter = 0;

        }
        else{
            charcollector += content[character]; 
        }
    }
    return finalcsv;
}
