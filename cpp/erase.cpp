#include<iostream>
#include<sstream>

using namespace std;

int main(){
    int N;
    cin >> N;
    string before, after;
    getline(cin >> ws, before); getline(cin >> ws, after);
    for(int i = 0; i < N; i++){
        for(int k = 0; k < before.length(); k++){
            if(before[k] == '0') before[k] = '1';
            else before[k] = '0';
        }
    }
    if(before == after){
        cout << "Deletion succeeded" << endl;
    } else {
        cout << "Deletion failed" << endl;
    }
    return 0;
}


