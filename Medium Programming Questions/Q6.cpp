#include <iostream>
#include <cmath>
using namespace std;

int roots(double a,double b,double c) {
    double discriminator=b*b-4*a*c;
    if (discriminator>0) {
        double root1=-b+sqrt(discriminator)/(2*a);
        double root2=-b-sqrt(discriminator)/(2*a);
        cout << "Roots are real and different: " << root1 << " and " << root2 << endl;
    }
    else if (discriminator==0) {
        double eqroots=-b/(2*a);
        cout << "Roots are equal: " << eqroots << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminator) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i and " << realPart << " - " << imagPart << "i" << endl;
    }return 1;
}

int main() {
    double a = 1, b = -7, c = 12;
    cout << "For equation " << a << "x² + " << b << "x + " << c << " = 0" << endl;
    roots(a, b, c);
    return 0;
}