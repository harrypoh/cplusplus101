// CODE FILENAME: Binary converterLeBouefAssn6
// DESCRIPTION:   This just converts binary to decimal
// CLASS/TERM:    Coding 101
// DESIGNER:      Jason LeBouef
// FUNCTIONS:    
//*****************************************************************************
#include <iostream>  
#include <cstdlib>  // Added for system pause
#include <fstream>  // Added for Data files
#include <iomanip>  // Added to set functions
#include <cctype>

using namespace std;


//*********************************************************************
// FUNCTION:    main
// DESCRIPTION: Responsbile for the top level processing of the budget
// CALLS TO:    addExpense,
//**********************************************************************

int main()
{
  //Variables
  int userBinary = 0;

  // Based off the Coding 101 #e01

  // Ask for the Binary number
  cout << "Please Enter a Binary Number (example : 101001 ): " << endl;

  // Grab the User's input
  cin >> userBinary;


  cout << endl << endl;

  system ("PAUSE");

  return 0;
}

