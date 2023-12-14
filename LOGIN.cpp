#include<iostream>
using namespace std;
int main()
{
    string username;
    cout<<"Enter your username: ";
    cin>>username;
    string password;
    cout<<"Enter your password: ";
    cin>>password;
    if(username=="admin")
    {
        if(password=="123456")
        {
            cout<<"Login successful"<<endl;

        }else
        {
            cout<<"Wrong Password!"<<endl;
        }
    }
    else
        {
            cout<<"Username not found"<<endl;
        }


}
