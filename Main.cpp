/*
Adam Mashhadani
2/22/2026
Project: Now Where Did I put That Lab
*/

#include <iostream>
#include "Find.h"
using namespace std;

int main() {
    string s = "The quick brown fox";

    cout << "Testing custom find functions\n\n";

    cout << "Find 'e': " << find(s, 'e') << endl;
    cout << "Find \"e\": " << find(s, "e") << endl;
    cout << "Find space: " << find(s, ' ') << endl;
    cout << "Find \"quick\": " << find(s, "quick") << endl;
    cout << "Find \"quiet\": " << find(s, "quiet") << endl;

    return 0;
}
