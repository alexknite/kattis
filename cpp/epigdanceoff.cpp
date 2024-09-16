#include <bits/stdc++.h>
using namespace std;

int main() {
    // inputs
    int N, M; cin >> N >> M;
    vector<string> v(N);
    // output
    int result = 0;

    // load vector
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < M; i++) {
        bool blank = true;
        for(int k = 0; k < N; k++) {
            blank = blank && v[k][i] == '_';
        }
        if(blank) {
            result++;
        }
    }
    cout << result + 1 << endl;
    return 0;
}