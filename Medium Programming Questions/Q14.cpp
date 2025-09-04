#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int num) {
    int original=num;
    int digits=0;
    int temp=num;

    while (temp>0) {
        digits++;
        temp=temp/10;
    }

    int sum = 0;
    temp = num;
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum==original;
}

int main() {
    int number;
    cout<<"Please enter a number: ";
    cin>>number;
    if(armstrong(number)) {
        cout<<number<<" is a armstrong number.";
    }
    else {
        cout<<number<< " is not a armstrong number.";
    }
}