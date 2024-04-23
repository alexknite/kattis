#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n; cin >> n;
    stack<int> s;
    for(int i = 1; i <= n; i++){
        int num; cin >> num;
        if(s.empty()){
            s.push(num);
        } else {
            if((s.top() + num) % 2 == 0) {
                s.pop();
            } else {
                s.push(num);
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}