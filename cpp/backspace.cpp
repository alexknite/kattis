#include<iostream>
using namespace std;

int main(){
    string line, result; getline(cin, line);
    for(auto i : line){
        if(i == '<'){
            result.pop_back();
        } else {
            result.push_back(i);
        }
    }
    cout << result << endl;
    return 0;
}