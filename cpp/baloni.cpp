#include<iostream>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;
    map<int, int> wasShot;
    int count = 0;
    int num;
    for(int i = 0; i< N; i++){
        cin >> num;
        if(wasShot[num + 1]){
            wasShot[num + 1]--;
        } else {
            count++;
        }
        wasShot[num]++;
    }
    cout << count << endl;
    return 0;
}