//Implementation file for Tools.H

#include "Tools.h"
#include <fstream>

const int MAX = 100;

void menu()
{
    char option=' '; // hold user options for N (new user) and L (login)

    cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";

    cin >> option;  //read in user choice for new user creation or login

    switch(toupper(option))
    {
     case 'N':              //New User option
         getUsernamePassword();
      break;

     case 'L':              //Find a match already in text file (stored usernames and passwords)
         getUsernamePassword();
         //verifyUser();

      break;

     case 'Q':            //quit the program option

      break;

     default:
       cout<< "Error: Please Choose Again:";
    }
}

void getUsernamePassword()
{
	char username[MAX] = " ";
	char password[MAX] = " ";

	cout << "Please enter your desired Username: ";
	cin.get(username, 100, '\n');
	cin.ignore(100, '\n');

	cout << endl;

	cout << "Now enter your desired Password: ";
	cin.get(password, 100, '\n');
	cin.ignore(100, '\n');

	cout << "Checking for errors..." << endl;
	


	if(findMatch(username, password) == 1)
	{
		cout << "Username already exists. Login in again." << endl;
		getUsernamePassword();
	}
	else
	{
		cout << "we just simulated a hash." << endl;
		//hashFunction();


}


//FindMatch will query the username/passwd file and check for existing
//entries against what was passed to it

int findMatch(char &username, char &password)
{
    ifstream infile;
    infile.open("UserInfo.txt");

    while(!infile.eof())
    {
        char tempusername[100]= " ";
        char temppasswd[100]= " ";
        infile.get(tempusername, 100, ';');

        if(strcmp(username, tempusername))
        {
            return 1;
        }

        infile.ignore(100, '\n');
    }
    return 0;
}


