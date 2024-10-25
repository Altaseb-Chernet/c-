#include<iostream>
using namespace std;

int main()
{
int n;
cout << "enter integer number :" << endl;
    cin>>n;
  
    cout << "the factors of "<<n<<" are :" ;
  
    for(int i=1;i<=n;i++){
    if(n%i==0)
    cout << i << ",";
    }

    return 0;
}
