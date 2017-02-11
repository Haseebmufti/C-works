#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string username = "";
string password = "";
string usr , psd ;

    bool loggedIn(){

        cout <<" Enter Username : ";
        cin >> username;
        cout <<" Enter Password : ";
        cin >> password;

        ifstream read("C:/Users/Haseeb/Documents/loginRegister/test" + username + ".txt");
        getline(read,usr);
        getline(read,psd);

        if(usr == username && psd == password){
            return true;
        }
        else {
            return false;
        }

    }
int main()
{
    int option;
    cout << "\n\t\t     Welcome to Login App ! \n\n\t\t Please login or register below\n\n";
    cout << " 1) Register \n 2) Saved Login Info\n\n";
    cin >> option;
    if(option== 1){
        string username,password;
        cout << " Enter Username: ";
        cin >> username;
        cout << " Enter Password: ";
        cin >> password;

        ofstream file;
        file.open("C:/Users/Haseeb/Documents/loginRegister/test" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();
    }
    else if (option == 2) {
      bool status = loggedIn();
      if (!status){
          cout << " \nThe Login Info is Invalid\n\n" << endl;
          return 0;
      }
      else {
          cout << " \nSuccessful user login !\n\n" <<endl;
          return 1;
      }
    }
    cout << " Thank you for login ";

    string close;
    cout << " \n\nDo you want to retry this App? (Y / N)" <<endl;
    cin >> close;

    if(close == "y"){
        return 1;
    }else {
        cout << " \nGood Bye !!";
        return 0;
    }
}
