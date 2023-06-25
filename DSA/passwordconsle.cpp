#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string mypass,mye;
    int a = 8;
    cout<<"Create your E-mail address "<<endl;
    cin>>mye;
    cout << "Create your password" << endl;
    cin >> mypass;
    if (mypass.size()>8)
    {
        cout << "\n\n\nAccount successfully created\n\n\n" << endl;

        cout << "\n\n\nThe length of your password is " << mypass.size() << "\n\n\n"<<endl;
    }
    else
    {
        cout << "Please choose a appropriate password at least 8 minimum character" << endl;
    }

    string pass,email;
    cout<<"Enter your E-mail "<<endl;
    cin>>email;
    cout << "Enter your password" << endl;
    cin >> pass;

    if (email == mye && pass == mypass )
    {
        cout << "\n\n\nWelcome to your Dashboard :)\n\n\n" << endl;
    }
    else
    {
        cout << "\n\n\nSorry You have entered wrong password :(\n\n\n" << endl;
    }

    return 0;
}