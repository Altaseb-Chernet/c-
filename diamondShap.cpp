#include<iostream>
using namespace std;
double diamond(int n){
cout << "please enter a number to use" << endl;
cin >> n;
    for(int i=1; i<n; i++) {
        for(int k=i; k<=n; k++) {
            cout << " ";
        }
        for(int j=1; j<i; j++) {
            cout << "@";
        }
        for(int j=1; j<=i; j++) {
            cout << "@";
        }
        cout<< endl;
    }
    for(int i=1; i<=n; i++) {
        for(int k=1; k<=i; k++) {
            cout << " ";
        }
        for(int j=i; j<n; j++) {
            cout << "@";
        }
        for(int j=i; j<=n
        ; j++) {
            cout << "@";
        }
        cout<< endl;
    }



}
int main() {
int x;
diamond(x);



    return 0;
}
