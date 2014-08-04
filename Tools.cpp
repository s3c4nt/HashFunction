//This is the Tools implementation file

#include "Tools.h"
#include <fstream>

const int MAX = 100;

void menu()
{
  char makeOptionUpperCase= ' ';  
  char option=' '; // hold user options for N (new user) and L (login)
    
    std::cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";

    cin >> makeOptionUpperCase;  //read in user choice for new user creation or login
    option = toupper(makeOptionUpperCase); //toupper does not change the parameter
    switch(option)
    {
     case 'N':              //New User option
         getUsernamePassword();
	 menu();
      break;

     case 'L':              //Find a match already in text file (stored usernames and passwords)
         getUsernamePassword();
         //verifyUser();
	 menu();
      break;

     case 'Q':            //quit the program option
      break;

     default:
       std::cout<< "Error: Please Choose Again:";
       menu();
    }
}

void getUsernamePassword() 
{
	//variables
  	char username[MAX] = " ";
  	char password[MAX] = " ";
	char hashpass[MAX] = " ";
  	int matchValue = 0;


	//get username from user
	std::cout << "Please enter your desired Username: ";
	cin>>username;
	

	//get password from user
	std::cout << "Now enter your desired Password: ";
	cin>>password;

	//check to make sure the username and password does not already exist
	std::cout << "Checking for errors..." << std::endl;
	matchValue = findMatch(username, password); 
	if(matchValue >= 1)
	{
		std::cout << "Username already exists. Please choose another." << std::endl;
		getUsernamePassword();
	}
	else
	{
		//hashFunction(password);
		//outfile.write(username, hashpass);
		std::cout << "Congratulations. Your Username and Password have been saved." << std::endl;
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
