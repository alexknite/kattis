#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> s;
    int n;
    string line;
    cin >> n;
    getline(cin >> ws, line);

    for(int i=0; i<n; i++){
        char c = line[i];
        if(c == ' ') continue;
        else if(c == '(' || c == '{' || c== '['){
            s.push(c);
        } else if(s.empty() ||
           ((c == ')' && s.top() != '(') ||
            (c == '}' && s.top() != '{') ||
            (c == ']' && s.top() != '[') )){
                cout << c << " " << i << endl;
                return 0;
            } else {
                s.pop();
            }
        }
    cout << "ok so far" << endl;
    return 0;
}