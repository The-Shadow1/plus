#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const string password="latifa81299535merahbi1998saturday";
int main()
{
    string name,pass;
    cout<<"enter your  first and last name: ";


    getline(cin,name);

    cout<<"Attention: the password is your first name and your phone number and your last name and your birthday's year and day\nExample:mostafa71402068zooebi2004wednessday\n";
    cout<<"enter your password: ";
    cin>>pass;

    if (pass==password)
    {
        cout<<"enter to this web : ";
    }
        else
            cout<<"try again the password is false";

}
