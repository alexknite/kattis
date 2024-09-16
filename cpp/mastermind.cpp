#include <bits/stdc++.h>
using namespace std;

int main() {
    //Inputs
    int n; cin >> n;
    string code, guess; cin >> code >> guess;
    
    int r = 0, s = 0;
    string codeLeft, guessLeft;

    for(int i = 0; i < n; i++) {
        if(code[i] == guess[i]) { // match color and position
            r++;
        } else {
            codeLeft.push_back(code[i]);
            guessLeft.push_back(guess[i]);
        }
    }

    while(!codeLeft.empty()) {
        int i = guessLeft.find(codeLeft[0]); // search for index
        if(i >= 0) { // if found
            s++;
            guessLeft.erase(guessLeft.begin() + i);
        }
        codeLeft.erase(codeLeft.begin()); // pop first character
    }

    cout << r << " " << s << endl;
}