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
    int n;

    std::cout << "Enter the upper limit to find prime numbers: ";
    std::cin >> n;

    std::cout << "Prime numbers up to " << n << " are: " << std::endl;
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    return 0;
}