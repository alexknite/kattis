#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numOfBr, priceOfBreak;
    int temp = 0;
    int currentHighest = 0;
    int maxHighest = 0;
    vector<int> totalVals;
    cin >> numOfBr >> priceOfBreak;
    for (int i = 0; i < numOfBr; i++) {
        cin >> temp;
        totalVals.push_back(temp);
    }
    for (int i = 0; i < totalVals.size(); i++) {
      for (int j = i; j < totalVals.size(); j++){
        if (totalVals[j] - priceOfBreak > 0) {
          currentHighest += totalVals[j] - priceOfBreak;
        }
        else {
          currentHighest -= priceOfBreak - totalVals[j];
        }
        if (currentHighest > maxHighest) {
          maxHighest = currentHighest;
        }
      }
      currentHighest = 0;
    }
    cout << maxHighest;
    return 0;
}