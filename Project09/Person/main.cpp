#include <iostream>
#include <string>
#include "person.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    person p1( 180, 80);
    person p2( 180, 70);
    cout << p1+p2 << endl;

    //p1.output();
    //p2.output();
    return 0;
}

