#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout << "please enter number" << endl; 
    cin>>n;
    
    for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
    cout << " " ;
    }
    for(int k=1;k<=i;k++){
    if(k%2==0)
    cout << "✝️ ";
    else
    cout << "✝️ ";
    }
    cout << endl;
    }
    return 0;
}
