#include "lexer.h"
using namespace std;

map<Tokens, string> TokensMap = {
    {Tokens::STRING, "string"},
    {Tokens::INT, "int"},
    {Tokens::FLOAT, "float"},
    {Tokens::BOOL, "bool"},
    {Tokens::CHAR, "char"},
    {Tokens::INT_64bit, "64bit_int"},
    {Tokens::FLOAT_64bit, "64bit_float"},
    {Tokens::OPERATOR, "operator"},
    {Tokens::KEYWORD, "keyword"},
};

list<string> Lexer::fileReader(const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        throw runtime_error("Error opening file (Error caught in: lexer.cpp -> Lexer::fileReader)");
    }

    list<string> readedLines;
    string line;
    while (getline(inputFile, line)) {
        readedLines.push_back(line);
    }
    inputFile.close();
    return readedLines;
}

string Lexer::Tokenizer(const string& line) {

}

void Lexer::convertJSON(const string& line) {

}
