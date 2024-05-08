#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, g, temp; cin >> n;
    //load vector
    for(int i = 0; i < n; i++){
        vector<int> v;
        cin >> g;
        for(int k = 0; k < g; k++){
            cin >> temp;
            v.push_back(temp);
        }
        for(int k = 2; k < g; k++){
            if(v[k] != v[k-1] + 1){
                cout << k + 1 << endl;
                break;
            }
        }
    }
    return 0;
}