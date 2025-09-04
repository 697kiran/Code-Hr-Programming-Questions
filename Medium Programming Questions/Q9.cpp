#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n) {
    if (n<=1)
        return false;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i==0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Please enter a number: ";
    cin >>num;
    if (isPrime(num)) {
        cout << num << " is a prime." << endl;
    }
    else {
        cout << num << " is not a prime." << endl;
    }
}
