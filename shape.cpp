#include<iostream>
using namespace std;

int main() {
/*
edcba
 dcba
  cba
   ba
    a
    */
    for(char i= 'e';i >='a';i--){
    for(char k='e';k>i;k--){
    cout << " " ;
    }
    for(char j=i;j>='a';j--){
    cout <<j;
    }
    cout << endl;
    }

    return 0;
}
    
