#include<iostream>
using namespace std;

int main() {

    cout << "please enter three numbers " << endl;
    int x,y,z;
    cin >> x>>y>>z;

    int largest=x;
    if(y>largest)
        largest =y;
        
    else if(z>largest )
        largest =z;
        
    else
        cout << "all are equal value " << endl;
        
    cout << "The largest value is "<<largest << endl;

    return 0;
}
