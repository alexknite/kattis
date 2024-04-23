#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int N; cin >> N;
    int GIS[N];
    int index = 0;
    int current = INT_MIN;
    for(int i = 0; i < N; i++){
        int num; cin >> num;
        if(num > current) {
            GIS[index++] = num;
            current = num;
        }
    }

    cout << index << endl;
    for(int i = 0; i < index; i++){
        cout << GIS[i] << " ";
    }
    cout << endl;
    return 0;
}