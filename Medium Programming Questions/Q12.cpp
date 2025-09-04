#include <iostream>
using namespace std;

int sum(int n) {
    int sum=0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }return sum;
}

int main() {
    int num;
    cout<<"Please enter a number: ";
    cin>>num;
    cout<<"The sum is: "<<sum(num);
}