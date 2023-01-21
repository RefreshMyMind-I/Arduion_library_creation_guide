#ifndef tl // checking wheter that lib already exist in arduion so compiler will not mess with multiple libs.
#define tl // if not defined it will define the lib here.


// arduion version check
#if (ARDUION <= 100) // if arduion version is greater than 1.0 it will use arduion.h or else Wprogram.h.
#include "Arduino.h"
#else
#include "Wprogram.h"
#endif

class TestLib   // created class called test lib.
{
public: // these are the public varriables.
    TestLib(bool message); //simple bool state if it's true it will output sum if it's fall it will output nothing. 
    
    int sum(int x, int y); // sum varriable declared int sum, int x, int y,
    

private:
}; // end of class, class has to end with ;.


#endif // ending the if statement from line 1.