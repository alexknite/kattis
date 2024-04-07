#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    vector<int> hs;
    vector<int> ps;
    //fill vectors with input
    for(int i=0;i<a;i++){
        int h;
        cin >> h;
        hs.push_back(h);
    }
    for(int i=0;i<b;i++){
        int p;
        cin >> p;
        ps.push_back(p);
    }
    //create patterns
    string pattern = "";
    string inverse = "";
    bool black = true;
    for(int i=0;i<ps.size();i++){
        for(int j=0;j<ps.at(i);j++){
            pattern += black ? 'B' : 'W';
            inverse += black ? 'W' : 'B';
        }
        black = !black;
    }
    //print board
    bool toggle = true;
    for(int i=0;i<hs.size();i++){
        for(int j=0;j<hs.at(i);j++){
            if(toggle){
                cout << pattern << endl;
            } else {
                cout << inverse << endl;
            }
        }
        toggle = !toggle;
    }
    return 0;
}