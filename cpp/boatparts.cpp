#include <iostream>
#include <set>
using namespace std;

int main(){
    int P, N, day=1;
    cin >> P >> N;
    set<string> parts;
    while(N--){
        string part;
        cin >> part;
        parts.insert(part);
        if(parts.size()==P) break;
        day++;
    }
    if(day==N+1) cout << "paradox avoided";
    else cout << day;
    return 0;
}