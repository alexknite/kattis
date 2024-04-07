#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1, y1, x2, y2, p, absx, absy, sum;
    while(true){
        cin >> x1;
        if(x1 == 0) break;
        cin >> y1 >> x2 >> y2 >> p;
        absx = abs(x1 - x2);
        absy = abs(y1 - y2);
        sum = pow(absx, p) + pow(absy, p);
        cout << pow(sum, (1/p));
    }
    return 0;
}