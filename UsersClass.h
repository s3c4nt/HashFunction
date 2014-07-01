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
        char Username[];
        char Password[];

    //public data members
    public:
        //Default constructor
        User();

        //Accessor functions
        void GetUsername();
        void GetPassword();

        //Mutator functions
        void StoreUsername();
        void StorePassword();
        void HashFunction();
        bool VerifyUser();
};



#endif
