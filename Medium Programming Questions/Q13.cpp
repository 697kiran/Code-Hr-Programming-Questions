#include <iostream>
using namespace std;

int reversed(int num) {
    int reversed=0;
    while (num>0) {
        reversed=reversed*10+num%10;
        num=num/10;
    }
    return reversed;
}

int main() {
    int number;
    cout<<"Please enter a number: ";
    cin>>number;
    cout<<"The original number is "<<number<<endl;
    cout<<"The reversed number is: "<<reversed(number)<<endl;
}