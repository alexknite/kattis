#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    string prev;
    cin >> prev;
    n--;

    bool inc = true, dec = true;

    while(n--){
        string name;
        cin >> name;

        if(prev.compare(name) < 0) dec = false;
        else if(prev.compare(name) > 0) inc = false;
        
        prev = name;
    }

    if(inc) cout << "INCREASING" << endl;
    else if(dec) cout << "DECREASING" << endl;
    else cout << "NEITHER" << endl;
}