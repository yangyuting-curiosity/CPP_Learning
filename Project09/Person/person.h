#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
class person
{
    public:

        person( int, int);
        void input();
        void output();
        person();
        ~person();
        int operator+(person &); //***********
    private:
        //string name;
        int  height;
        int  weight;
};



#endif // PERSON_H_INCLUDED
