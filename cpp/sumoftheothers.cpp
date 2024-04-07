#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int calc(string s){
    int sum=0;
    stringstream ss(s);
    int i=0;
    while(ss >> i) { 
        sum+=i;
    }
    return sum/2;
}

int main(){ 
    string line;
    while(getline(cin, line)){
        cout << calc(line) << endl;
    }
    return 0;
}