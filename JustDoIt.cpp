#include "bits/stdc++.h"
using namespace std;
long toDec(string s,int base){
  long value=0;
  for (size_t i = 0; i < s.length(); i++) {
    long charVal = ((long)s[(s.length()-1)-i]-'0');
    value += pow(base,i)*charVal;
  }
  return value;
}
void toN(long value,int base){
  long reverse[50]={};
  long cal=value,iter=0;
  long remainder = 0, quotient = 0;
  while(cal>base-1){
    remainder = cal%base;
    quotient = cal/base;
    //cout << remainder << "+" << quotient << "*" << base << endl;
    cal = quotient;
    //cout << cal << endl;
    //cout << remainder << endl;
    reverse[iter++]=remainder;
  }
  reverse[iter++]=cal;
  for (size_t i = 0; i < iter; i++) {
      cout << reverse[iter-1-i];
  }

}
int main() {
  int start,end;
  cin >> start >> end;
  string s;
  cin >> s;
  toN(toDec(s,start),end);
  return 0;
}
