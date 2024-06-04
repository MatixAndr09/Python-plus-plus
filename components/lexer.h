#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <stdexcept>
#include <map>
using namespace std;

enum class Tokens {
    STRING,
    INT,
    FLOAT,
    BOOL,
    CHAR,
    INT_64bit,
    FLOAT_64bit,
    OPERATOR,
    KEYWORD,
};

extern map<Tokens, string> TokensMap;

class Lexer {
public:
    static list<string> fileReader(const string& filename);
    static string Tokenizer(const string& line);
    static void convertJSON(const string& line);
};

#endif