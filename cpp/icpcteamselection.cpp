#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N; cin >> N;
    while(N--){
        int P; cin >> P;
        vector<int> v(P * 3);
        for(auto& i : v) {
            cin >> i;
        }
        sort(v.rbegin(), v.rend());
        int sum = 0;
        for (int i = 0; i < P; i++){
            sum += v[i * 2 + 1];
        }
        cout << sum << endl;
    }
    return 0;
}