#include<iostream>
using namespace std;

int main()
{
    int  secretNumber=2;
    int maxAtempt=3;
    int count=0;
    int guess;

    cout << "welcome to CBE birr" << endl;

    while(count < maxAtempt)
    {
        cout << "Please enter password : " ;
        cin >> guess;

        count ++;

        if (guess == secretNumber)
        {
            cout << "congratulations " << endl;
            break;
        }
        else if(count < secretNumber )
        {
            cout << "try again wrong password 🔒🔑" << endl;

        }
    }
    if(count == maxAtempt && guess != secretNumber)
    {
        cout << "sorry you have used all chances and come after 24 hours" << endl;
    }

    return 0;
}
