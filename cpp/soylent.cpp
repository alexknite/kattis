#include <iostream>
#include <cmath>
using namespace std;
//400 cals per bottle (5 per day = 2000 cals)
int main(){
    int t;
    cin >> t; //number of test cases
    while(t--){
        double cals;
        cin >> cals;
        cout << ceil(cals / 400) << endl; //use ceil to account for decimal
    }
    return 0;
}

