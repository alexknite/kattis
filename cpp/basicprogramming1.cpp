#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, t; cin >> N >> t;
    vector<int> A;
    
    for(int i = 0; i < N; i++) {
        int input;
        cin >> input; 
        A.push_back(input);
    }
    
    if(t == 1) {
        cout << "7" << endl;
    }
    else if(t == 2) {
        if(A[0] > A[1]) {
            cout << "Bigger" << endl;
        }
        else if(A[0] == A[1]) {
            cout << "Equal" << endl;
        }
        else {
            cout << "Smaller" << endl;
        }
    }
    else if(t == 3) {
        sort(A.begin(), A.begin() + 3);
        cout << A[1] << endl;
    }
    else if(t == 4) {
        int sum = accumulate(A.begin(), A.end(), 0);
        cout << sum << endl;
    }
    else if(t == 5) {
        int sum = 0;

        for(int i = 0; i < N; i++) {
            if(A[i] % 2 == 0) {
                sum += A[i];
            }
        }

        cout << sum << endl;
    }
    else if(t == 6) {
        for(int& i : A) {
            i = (i%26) + 97;
            cout << (char) i;
        } 
        cout << endl;
    }
    else if(t == 7) {
        int i = 0;
        unordered_set<int> visited;

        while (true){
            i = A[i];

            if(i < 0 || i >= N) {
                cout << "Out" << endl;
                break;
            }
            else if(i == N-1) {
                cout << "Done" << endl;
                break;
            }
            else if(visited.find(i) != visited.end()){
                cout << "Cyclic" << endl;
                break;
            }

            visited.insert(i);
        }
    }
    return 0;
}