#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> v(n);
        for(auto& i : v){
            cin >> i;
        }
        vector<bool> seen(n, false);
        for(int i = 1; i < n; i++){
            int diff = abs(v[i] - v[i-1]);
            if(diff >= 0 && diff < n){
                seen[diff] = true;
            }
        }
        bool jolly = true;
        for(int i = 1; i < n; i++){
            jolly &= seen[i];
        }
        if(jolly){
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;

        }
    }
    return 0;
}