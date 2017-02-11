#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username = "";
    string password = "";
    bool loginSuccess = false;

    cout << "\t\tWelcome to Login App ! \n\n\t\t Please login below\n\n";

    do {
        cout <<" Username : ";
        cin >> username;
        cout <<" Password : ";
        cin >> password;

        if(username == "test" && password == "test1")
        {
        cout << "\n Login Successful\n\n";
        loginSuccess = true;
        }
        else {
            cout << " Login Incorrect ! \n Please try again\n\n";
        }
    }
    while(!loginSuccess);

    system("pause");
    return 0;
}
