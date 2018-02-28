//============================================================================
// Name        : Returning_Objects.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Animals.h"

using namespace std;

Animals zebra()
    {
    Animals mouse;
    mouse.setName("Tom");
    mouse.setColor("Purple");
    //cout << sizeof mouse << endl;  // uncomment to see size of 48
    return mouse;
    }

/*		///////////////////// OR /////////////////////

     this way is more efficient b/c it is only passing around a pointer
*/

Animals *pPig()	//Need Animals so we can pass that return to the Animals spider below
    {
    Animals *duck = new Animals;
    duck->setName("Daffy");
    duck->setColor("Black");
    //cout << sizeof duck << endl;  // uncomment to see size of 4
    return duck;
    }

int main()
    {
    Animals frog = zebra();
    frog.speak();

    Animals *spider = pPig();
    spider->speak();//need spider->speak() b/c of the 'new' used in pPig function above

    delete spider;// NEED to clear spider b/c of the 'new' in the pPig function above

    return 0;
    }
