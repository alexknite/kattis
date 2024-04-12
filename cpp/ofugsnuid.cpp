#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n, num;
    cin >> n;
    //load stack
    for (int i=0; i<n; i++){
        cin >> num;
        s.push(num);
    }
    //pop and print
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}