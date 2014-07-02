//Class for the Users
#include <iostream>
using namespace std;

#ifndef USERSCLASS_H
#define USERSCLASS_H


//Class for users
class User
{
    //private data members
    private:
        char username[];
        char password[];

    //public data members
    public:
        //Default constructor
        User();

        //Accessor functions
        void getUsername();
        void getPassword();

        //Mutator functions
        void storeUsername();
        void storePassword();
        void hashFunction();
        bool verifyUser();
};



#endif
