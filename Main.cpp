/*
Adam Mashhadani
2/22/2026
Project: It's Raining Strings Lab
*/


#include <iostream>
#include <vector>
#include <string>
#include "Busniess.h"

using namespace std;

int main() {
    vector<string> businesses;
    string input;
    string response;
    string lowerResponse;

    cout << "Welcome to the Business Sorting Program!" << endl << endl;

    do {
        cout << "Please enter the name of a business:  ";
        getline(cin, input);

        addBusiness(businesses, input);

        cout << endl;
        if (businesses.size() == 1)
            cout << "Your business is:" << endl << endl;
        else
            cout << "Your businesses are:" << endl << endl;

        for (const string& name : businesses)
            cout << "    " << name << endl;

        cout << endl << "Another business?  ";
        getline(cin, response);

        lowerResponse.clear();
        for (char c : response)
            lowerResponse += tolower(c);

    } while (lowerResponse == "y" || lowerResponse == "yes");

    cout << endl << "Thank you for using the Business Sorting Program!" << endl;

    return 0;
}