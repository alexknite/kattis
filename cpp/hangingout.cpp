#include <iostream>
using namespace std;

int main() {
    int l, x;
    cin >> l >> x;
    
    int count = 0;
    int result = 0;
    for(int i = 0; i < x; i++){
        string operation;
        int num;
        cin >> operation >> num;

        if(operation == "enter") {
            if(count + num > l){
                result++;
            } else {
                count += num;
            }
        } else {
            count -= num;
        }
    }
    cout << result;
    return 0;
}