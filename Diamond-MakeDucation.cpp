/*
Author: Tanapol Wong-asa
*/


#include <iostream>
using namespace std;

int main() {
    int row,spaceCount,starCount=0;
    cin >> row;
    spaceCount=row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<spaceCount;j++)
        {
            cout <<" ";
        }
        for(int j=0;j<starCount;j++)
        {
            cout << "*";
        }
        cout << "*";
        for(int j=0;j<starCount;j++)
        {
            cout << "*";
        }
        starCount++;
        spaceCount--;
        cout << endl;
    }
    starCount=row-2;
    spaceCount=2;
    for(int i=0;i<row-1;i++)
    {
        for(int j=0;j<spaceCount;j++)
        {
            cout <<" ";
        }
        for(int j=0;j<starCount;j++)
        {
            cout << "*";
        }
        cout << "*";
        for(int j=0;j<starCount;j++)
        {
            cout << "*";
        }
        starCount--;
        spaceCount++;
        cout << endl;
    }

    return 0;
}
