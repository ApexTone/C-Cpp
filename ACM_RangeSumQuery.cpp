#include "bits/stdc++.h"
using namespace std;
long cases=1;
long long myList[5][100000]={},question[5],itemNumber;
long long ans[5][100000]={};
int main() {
  cin >> cases;
  for(int i=0;i<cases;i++){
    cin >> itemNumber >> question[i];
    for(int j=0;j<itemNumber;j++){
      long temp;
      cin >> temp;
      if(j!=0)
        myList[i][j]+=myList[i][j-1];
      myList[i][j] += temp;
      //cout << myList[j] << " ";
    }
    long lower,upper;
    for(int j=0;j<question[i];j++){
      cin >> lower >> upper;
      if(lower!=0)
        ans[i][j]= myList[i][upper]-myList[i][lower-1];
      else
        ans[i][j]= myList[i][upper];
    }
  }

  for(int i=0;i<cases;i++){
    for(int j=0;j<question[i];j++){
      cout << ans[i][j] << endl;
    }
    cout << endl;
  }
  return 0;
}
