#include <iostream>
#include <cmath>
using namespace std;

// Using exponent operator
double powerUsingOperator(double base, int exp) {
    return pow(base, exp);
}

// Using loop
long long powerUsingLoop(int base, int exp) {
    long long result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base = 2, exp = 5;
    cout << "Using operator: " << base << "^" << exp << " = " << powerUsingOperator(base, exp) << endl;
    cout << "Using loop: " << base << "^" << exp << " = " << powerUsingLoop(base, exp) << endl;
    return 0;
}
