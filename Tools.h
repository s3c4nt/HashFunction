//Header file for all utilities used throughout the program
#include "UsersClass.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;  //stackoverflow says this is bad mojo in a header file
#ifndef TOOLS_H
#define TOOLS_H

void menu();
int getUsernamePassword();
int findMatch(char &, char &);


#endif
