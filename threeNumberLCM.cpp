#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3, max;
    cout << "enter three number :" << endl;
    cin >> n1 >> n2 >> n3;
    //we use ternary or conditional operator 
    max = (n1 > n2) ? ((n1 > n3)? n1 :n3) : ((n2 > n3) ? n2 : n3);
    do {
        if(max % n1 == 0 && max % n2 == 0 && max % n3 == 0) {

            cout << "the LCM of " << n1 << "," << n2 << " and " << n3 <<" is = " << max << endl;
            break;
        }
        else
            max ++;

    } while(true);

    return 0;
}
