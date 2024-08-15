#include<iostream>
using namespace std;

int main(){
    int n, T, min, result = 0, sum = 0, count = 0; cin >> n >> T;
    cin.ignore();
    while(n--){
        cin >> min;
        sum += min;
        if(sum <= T){
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}