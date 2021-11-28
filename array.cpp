#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    // using vectors
    // vector<int> A(10,0);
    int Arr[10] = {};
    cout << sizeof(Arr) << endl;
    cout << sizeof(Arr)/sizeof(Arr[0]) << endl;
    int i;
    // for(i=0;i<10;i++)
    //     cout << Arr[i] << " ";

    int *A;
    A = new int[10];
    cout << sizeof(A) << endl;
    cout << sizeof(A)/sizeof(int) << endl;
}