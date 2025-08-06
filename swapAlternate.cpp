#include<bits/stdc++.h>
using namespace std;

int swapAlternate(int arr[], int n, int i) {
    if(i>= n) {
        return 0;
    } else {
        if(i+1 < n) {
            swap(arr[i], arr[i+1]);
            return swapAlternate(arr, n, i+2);
        }
        
    }
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the values of the array: ";
    for(int i=0;i<n;i++) {
        cin>> arr[i];
    }
    swapAlternate(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    


}