#include<iostream>
#include<string>
#include<vector>
#include<exception>
using namespace std;

struct Cup {
    string color;
    double radius;
};

int main(){
    int n;
    string first, second, line;
    Cup temp;
    vector<Cup> cups;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, line);
        first = line.substr(0, line.find(' '));
        second = line.substr(line.find(' ') + 1, line.size() - 1);
        
        try {
            temp.radius = (double) stoi(first) / 2;
            temp.color = second;
        } catch (exception e){
            temp.radius = stoi(second);
            temp.color = first;
        }
        cups.push_back(temp);
    }

    for(int i = 0; i < cups.size() - 1; i++){
        for(int k = 1; k < cups.size() - i; k++){
            if(cups[k].radius < cups[k - 1].radius){
                temp = cups[k];
                cups[k] = cups[k - 1];
                cups[k - 1] = temp;
            }
        }
    }

    for(Cup c : cups){
        cout << c.color << endl;
    }

    return 0;
}