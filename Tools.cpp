//Implementation file for Tools.H

#include "Tools.h"
#include <fstream>

const int MAX = 100;

void menu()
{
  char makeOptionUpperCase= ' ';  
  char option=' '; // hold user options for N (new user) and L (login)
    
    cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";

    cin >> makeOptionUpperCase;  //read in user choice for new user creation or login
    option = toupper(makeOptionUpperCase); //toupper does not change the parameter
    switch(option)
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

int getUsernamePassword() 
{
  char username[MAX] = " ";
  char password[MAX] = " ";
  int outputValue;
	cout << "Please enter your desired Username: ";
	cin>>username;
	//	cin.ignore(100, '\n');
	//we ask the user to pick a username here - they should type a username which the above cin.get takes in...why are we ignoring a second line of input that we did not ask for? this was most likely left over from when getUsernamePassword was used for more than user account creation. - s3c4nt

	cout << endl; //not sure why this is here, after they type a username they hit enter which should move it down by default.

	cout << "Now enter your desired Password: ";
	cin>>password;
	//	cin.ignore(100, '\n');
	//again, we ask them for one line of text and use a cin.get to grab that but randomly have a cin.ignore to ignore the second line of text they were not prompted for and won't enter - s3c4nt

	cout << "Checking for errors..." << endl;
	
	char *tempUname = username;
	char *tempPass = password;
	  outputValue = findMatch(*tempUname,*tempPass);

	if(outputValue == 1) 
	{
		cout << "Username already exists. Please choose another." << endl;
		getUsernamePassword();
	}
	else
	{
		cout << " hash function will output to file!." << endl;
		//hashFunction();


	}
}

//FindMatch will query the username/passwd file and check for existing
//entries against what was passed to it

int findMatch(char &username, char &password)
{
    ifstream infile;
    infile.open("UserInfo.txt");
    char unameplaceholder[MAX] = " ";
    unameplaceholder[MAX] = username;
    char pwdplaceholder[MAX] = " ";
    pwdplaceholder[MAX] = password;
    while(!infile.eof())
    {
        char tempusername[MAX]= " ";
        char temppasswd[MAX]= " ";
        infile.get(tempusername, 100, ';');

        if(strncmp(unameplaceholder, tempusername,100) == 1)
        {
            return 1;
        }

        infile.ignore(100, '\n'); //this ignores the pwds in UserInfo.txt
    }
    return 0;
}


