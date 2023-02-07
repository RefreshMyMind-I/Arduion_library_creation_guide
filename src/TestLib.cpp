#include "TestlLib.h" // including TestLib.h file to cpp file to make use of class we created.

TestLib::TestLib(bool messsage) // to get bool value from main code we check here.
{
}

int TestLib::sum(int x, int y) // Performing addition of to int here declared varriable as before in .h file.
{
  

    return x+y; // returning addition of two int to sum varriable.
}

int TestLib::sub(int x, int y);
{
    return x-y;
}

int TestLib::mul(int x, int y);
{
    return x*y;
}
float TestLib::div(float x, float y)
{
    return x/y;
}