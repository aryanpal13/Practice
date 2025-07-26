#include<bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if(i>n) {
        return;
    } else {
        cout << "Aryan" << endl;
        name(i+1, n);
    }
    
}

void nNo(int i, int n) {
    if(i>n) {
        return;
    } else {
        cout<<i<<endl;
        nNo(i+1,n);
    }
}


int main () {
    int i = 1;
    int n;
    cout << "Enter a number: ";
    cin>>n;
    // name(1,n);
    nNo(i, n);

    return 0;
}