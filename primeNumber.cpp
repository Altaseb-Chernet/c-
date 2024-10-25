#include<iostream>
using namespace std;
double primeNumber(int n);
int main() {

   cout << "enter a number " << endl;
    int n;
    cin >> n;
    primeNumber(n);


    return 0;
}
double primeNumber(int n) {
    int count=0;
    for(int i=1; i<=n; i++) {
        if(n%i==0)
            count++;
    }
    if(count==2)
        cout <<n << " is a prime number " << endl;
    else cout <<n<< " is not a prime number" << endl;
    return n;
}
