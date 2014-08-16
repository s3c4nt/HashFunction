//This is the Tools implementation file

<<<<<<< HEAD
=======
#include "Tools.h"
//#include "UsersClass.h"
#include <iostream>
#include <string>
#include <cstring>
>>>>>>> 39b6a91a128620c5d2cfd17da82316f0f1492211
#include <fstream>

const int MAX = 99;

void menu()
{
    char option=' '; // hold user options for N (new user) and L (login)
    
    std::cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";
    std::cin >> option;

<<<<<<< Updated upstream
std::cin >> option; // makeOptionUpperCase;  //read in user choice for new user creation or login
//  option = toupper(makeOptionUpperCase); //toupper does not change the parameter
switch(toupper(option))
=======
    switch(toupper(option))
>>>>>>> Stashed changes
    {
     case 'N':              //New User option
         getUsernamePassword();
      break;

     case 'L':              //Find a match already in text file (stored usernames and passwords)
         getUsernamePassword();
         verifyUser();
      break;

     case 'Q':            //quit the program option
      break;

     default:
       std::cout << "***Error: Please Choose Again!***";
       menu();	
    }
}

void getUsernamePassword() 
{
	//variables
char username[MAX] = {0};
char password[MAX] = {" "};
char hashpass[MAX] = {0};
  	int matchValue = 0;


	//get username from user
	std::cout << "Please enter your desired Username: ";
	std::cin >> username;
	

	//get password from user
	std::cout << "Now enter your desired Password: ";
	std::cin >> password;
<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes

	//check to make sure the username and password does not already exist
	std::cout << "Checking for errors..." << std::endl;

	matchValue = findMatch(username, password); 
	if(matchValue = 0)
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



//FindMatch will query the username/passwd file and check for new user entries

int findMatch(char username [], char password []) 
{
  std::ifstream infile;
    infile.open("UserInfo.txt",std::ifstream::in);
// char unameplaceholder[MAX] = {0};
//  unameplaceholder = username;
// char pwdplaceholder[MAX] = {0};
//  pwdplaceholder = password;
    while(!infile.eof())
    {
    char tempusername[MAX]= {0};
    char temppasswd[MAX]= {0};
        infile.get(tempusername, 100, ';');
	infile.get(temppasswd, 100, '\n');
	// int matchvalue = strncmp(unameplaceholder, tempusername,100);
	if( tempusername == username)
        {
	  return 0;  //match found so user exists
        } else {
	  return 1; //no match found, user does not exist
	}

	// infile.ignore(100, '\n'); //this ignores the pwds in UserInfo.txt
    }
}

