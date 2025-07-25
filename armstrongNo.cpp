#include<bits/stdc++.h>
using namespace std;


bool isArmstrongNo(int n) {
    // incomplete
    int dup = n;
    int sum = 0;
    int lastDigit;
    while (n>0) {
        lastDigit = n % 10;
        n = n / 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
    }
    if (sum == dup) return true;
    else return false;
}

int main () {
    int n;
    cin >> n;
    cout << isArmstrongNo(n) <<  endl;
    return 0;
}