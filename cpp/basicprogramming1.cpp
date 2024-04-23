#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N, t;
    cin >> N >> t;
    vector<int> A(N);
    //load array
    for(int& a : A) cin >> a;

    if(t == 1){
        cout << 7 << endl;
    } else if(t == 2){
        if(A[0] > A[1])
            cout << "Bigger" << endl;
        else if(A[0] == A[1])
            cout << "Same" << endl;
        else
            cout << "Smaller" << endl;
    } else if(t == 3){
        vector<int> v{A[0], A[1], A[2]};
        sort(v.begin(), v.end());
        cout << v[1] << endl;
    } else if(t == 4){
        int sum = 0;
        for(int a : A) sum += a;
        cout << sum << endl;
    } else if(t == 5){
        int sum = 0;
        for(int a : A) if(a % 2 == 0) sum += a;
        cout << sum << endl;
    } else if(t == 6){
        for(int a : A) cout << a%26 + 'a';
        cout << endl;
    } else if(t == 7){
        int i = 0;
        unordered_set<int> s;
        s.insert(0);
        while(true){
            i = A[i];
            if(i >= N){
                cout << "Out" << endl;
                break;
            }
            if(i + 1 == N){
                cout << "Done" << endl;
                break;
            } else if (s.count(i)){
                cout << "Cyclic" << endl;
                break;
            }      
            s.insert(i);
        }
    }
    return 0;
}