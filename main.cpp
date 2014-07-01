#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// moved FindMatch function to it's own file and call it in main as needed. 


int main(){
  char option=' '; // hold user options for N (new user) and L (login)
  cout <<"Welcome to SlikHash Version .01 \n";
  cout <<"Main Menu: \n";
  cout <<" (N) New User \n (L) Login \n (Q) Quit \n your choice: ";
  // future: move this main menu printing and selection (?) to it's own function and call it from main(). This will keep main cleaner and allow menu alteration without derping with main() directly. - DC
  cin.get(option);  //read in user choice for new user creation or login

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
    cout<< "Error: Invalid Choice. \n Please Choose Again. \n your choice: "; 
  };

}





  
