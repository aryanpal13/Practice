#include<bits/stdc++.h>
using namespace std;
int divisors(int n) {
    for(int i = 1; i<= n; i++) {
        if( n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    divisors(n);
    return 0;
}