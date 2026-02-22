#include "Find.h"
#include <string>

// find a character
int find(const std::string& text, char ch) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ch)
            return i;
    }
    return -1;
}

// find substring
int find(const std::string& text, const std::string& sub) {

    if (sub.size() == 0)
        return 0;

    if (sub.size() > text.size())
        return -1;

    for (int i = 0; i <= text.size() - sub.size(); i++) {

        bool match = true;

        for (int j = 0; j < sub.size(); j++) {
            if (text[i + j] != sub[j]) {
                match = false;
                break;
            }
        }

        if (match)
            return i;
    }

    return -1;
}
