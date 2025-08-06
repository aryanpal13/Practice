#include<bits/stdc++.h>
using namespace std;


//function to print name n times using recursion
void name(int i, int n) {
    if(i>n) {
        return;
    } else {
        cout << "Aryan" << endl;
        name(i+1, n);
    }
    
}

//function print number from 1 to n using recursion
void nNo(int i, int n) {
    if(i>n) {
        return;
    } else {
        cout<<i<<endl;
        nNo(i+1,n);
    }
}

//function to print reverse of an array using recursion
void revArray (int arr[], int i, int n) {
    if(i>=n/2) {
        return;
    } else{
        swap(arr[i], arr[n-i-1]);
        revArray(arr, i+1, n);
    }
}


int main () {
    int n;
    // cout << "Enter a number: ";
    // cin>>n;
    // name(1,n);
    // nNo(1, n);
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    revArray(arr, 0, n);
    for(int i=0;i<n;i++) cout<< arr[i] << " ";
    cout<<endl;

    return 0;
}