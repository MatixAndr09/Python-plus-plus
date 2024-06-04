#include <iostream>
#include "components/lexer.h"
using namespace std;

int main() {
    try {
        list<string> lines = Lexer::fileReader(R"(C:\Users\mqtio\Desktop\TypeScript-Knockoff\test.txt)");
        cout << "File read successfully!" << endl;
        for (const string& line : lines) {
            cout << line << endl;
        }
    }
    catch (const runtime_error& error) {
        cerr << error.what() << endl;
        return 1;
    }
    return 0;
}
