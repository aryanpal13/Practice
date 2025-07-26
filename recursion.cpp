#include<iostream>
using namespace std;

void name(int i, int n) {
    if(i>n) {
        return;
    } else {
        cout << "Aryan" << endl;
        name(i+1, n);
    }
    
}

int main () {
    int i = 1;
    int n;
    cout << "Enter a number: ";
    cin>>n;
    name(1,n);


    return 0;
}