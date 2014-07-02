//Implementation file for Tools.H

#include "Tools.h"

void menu()
{
    char option=' '; // hold user options for N (new user) and L (login)

    cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";

    cin >> option;  //read in user choice for new user creation or login

    switch(toupper(option))
    {
     case 'N':              //New User option
         getUsernamePassword();
         findMatch();

      break;

     case 'L':              //Find a match already in text file (stored usernames and passwords)
         getUsernamePassword();
         verifyUser();

      break;

     case 'Q':            //quit the program option

      break;

     default:
       cout<< "Error: Please Choose Again:";
    }
}

void getUsernamePassword()
{


}


//FindMatch will query the username/passwd file and check for existing
//entries against what was passed to it

int findMatch(username[], password[])
{
    ifstream infile;
    infile.open ("UserInfo.txt");

    while(!infile.eof)
    {
        char tempusername[]= " ";
        char temppasswd[]= " ";
        infile.get(tempusername,100,';')

        if (username==tempusername)
        {
            return=1;
        }

        infile.ignore(temppasswd,100,'/n');
    }
    return 0;
}


