//Implementation file for UsersClass.h

#include "UsersClass.h"
const int MAX = 100;



//This is the default constructor to initialize variables
User::User()
{
    char username[MAX]= " ";
    char password[MAX]= " ";
}

//Function definition for getting user username from file
User::getUsername()
{

}

//Function definition for getting user password from file
User::getPassword()
{

}

//Function definition for hashing the user password input
User::hashFunction(char Password[])
{


}

User::verifyUser()
{
         std::ifstream infile;
         std::cout << "Please enter the filepath for the searching: " << std::endl;
         char filepath[MAX] = " ";
         std::cin >> filepath;
         infile.open(filepath);
         std::array<char, 99> usernameTemp {0};
         std::array<char, 99> passwordTemp {0};
 
         //check the entire file for usernames and passwords
         while(!infile.eof())
         {
                 //get the username and password from file
                 infile.get(usernameTemp, 100, '\n');
                 infile.get(passwordTemp, 100, '\n');
 
                 //if usernames do NOT match, then we know the user is not registered
                 if(!usernameTemp == username)
                 {
                         std::cout << "You are currently not a registered user." << std::endl;
                 }
                 //if usernames DO match, then we check to see if passwords match
                 else
                 {
                         //if passwords match, we welcome the user back
                         if(passwordTemp == password)
                         {
                                 std::cout << "Hello, " << username << "." << " Welcome back!" << std::endl;
                         }
                 }
         }
         infile.close(filepath);
				   

}

