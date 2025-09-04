#include <iostream>
using namespace std;

void fibonacciSeries(int n) {
    int first = 0,second = 1,next;

    cout << "Fibonacci series (" <<n<<" terms): ";

    if(n>=1) cout<<first << " ";
    if(n>=2) cout<<second << " ";

    for(int i=3;i<=n;i++) {
        next = first+second;
        cout<<next << " ";
        first=second;
        second=next;
    }
    cout<<endl;
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    fibonacciSeries(n);
    return 0;
}
