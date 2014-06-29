#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

char Username[]= " ";
char Password[]= " ";

int FindMatch(Username[], Password[]);

int main(){
char option=' '; // hold user options for N (new user) and L (login)

cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";
 
cin.get(option, 100, '\n');  //read in user choice for new user creation or login

switch(toupper(option)){
 case 'N':              //New User option
   //   GetUserInput();
 
  break;
 
 case 'L':              //Login option
   //   FindMatch();
 
  break;

 case 'Q':            //quit the program option
 
  break;
 
 default:
   cout<< "Error: Please Choose Again:"; 
};




//FindMatch will query the username/passwd file and check for existing
//entries against what was passed to it

int FindMatch(Username[], Password[]){


ifstream infile;
infile.open ("UserInfo.txt");




while(!infile.eof){
char tempusername[]= " ";
char temppasswd[]= " ";
 infile.get(tempusername,100,';')

  if (Username==tempusername){
   return=1;}

infile.ignore(temppasswd,100,'/n');
 
}

 return 0;
};
