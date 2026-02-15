/*
Adam Mashhadani
2/15/2026
Project: "Hi" == "hi"? Lab
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// case-insensitive string comparison
int strcmp_case_insensitive(const string& s1, const string& s2) {

    size_t i = 0;

    // compare characters one by one
    while (i < s1.length() && i < s2.length()) {

        // convert to lowercase WITHOUT changing originals
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 != c2) {
            return c1 - c2; // negative or positive
        }

        i++;
    }

    // if all equal so far, shorter string is smaller
    if (s1.length() == s2.length())
        return 0;
    else if (s1.length() < s2.length())
        return -1;
    else
        return 1;
}

// driver program
int main() {

    cout << "Testing case-insensitive comparison:\n\n";

    cout << "Compare \"String one\" and \"string two\": "
        << strcmp_case_insensitive("String one", "string two") << endl;

    cout << "Compare \"String one\" and \"string one\": "
        << strcmp_case_insensitive("String one", "string one") << endl;

    cout << "Compare \"String two\" and \"string one\": "
        << strcmp_case_insensitive("String two", "string one") << endl;

    // edge cases
    cout << "Compare \"Hello\" and \"hello\": "
        << strcmp_case_insensitive("Hello", "hello") << endl;

    cout << "Compare \"abc\" and \"abcd\": "
        << strcmp_case_insensitive("abc", "abcd") << endl;

    cout << "Compare \"\" and \"test\": "
        << strcmp_case_insensitive("", "test") << endl;

    return 0;
}
