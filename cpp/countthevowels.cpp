#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;

    int count = 0;
    
    for(int i=0; i<input.length(); i++){
        char character = input[i];
        if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'I' || character == 'O' || character == 'U'){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}