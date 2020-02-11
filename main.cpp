/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (McMillanite): Maximillian Senisch
  2/10/2020
  IDE: repl.it
  COSC-1436-57002
  Description: This program takes in a number and does different math with it 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
  //initialize variables
  double n = 0.0, nSquared = 0.0;
  const double nOverN = 1;
  int counter = 0;

  while(n != -1)
  {
    //ask for input
    cout << "(to exit loop enter -1) \nPlease ";
    n = validateDouble(n);

    //process - calculations
    nSquared = n*n;

    //output to the user
    if(n != -1)
    {
      cout << "Your number (N) = " << n << endl;
      cout << n << " * " << n << " = "<< nSquared << endl;
      cout << n << " / " << n << " = ";
      if(n != 0)
      {
        cout << nOverN << endl;
      }
      else
      {
        cout << "undefined because 0/0 has infinite solutions" << endl;
      }
      cout << "((" << n << " + 3.0) / 5.0) = " << ((n+3)/5) << endl;
      cout << "((" << n << " + 3.0) / 5.0) + ((" << n << " + 7.0) / 2.0) = " << (((n+3.0)/5.0) + ((n+7.0)/2.0)) << endl;
      counter ++;
    }
    cout << "You have exited the program after " << counter << " successful iterations.";
  }
  return 0;
}
