#include "Lexer.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;
int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    string entireFile;
    stringstream ss;
    ifstream in(argv[1]);
    string currentLine;
    while (getline(in, currentLine)) {
        ss << currentLine << endl;
    }
    entireFile = ss.str();

    lexer->Run(entireFile);

    cout << lexer->toString();

    // TODO

    delete lexer;

    return 0;
}