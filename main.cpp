#include <iostream>

using namespace std;
//Variables Declared
int option;			
int get_Num1;			
int get_Num2;			
int get_Sum;			
//Operation Functions
void
addition ()
{				
  get_Sum = get_Num1 + get_Num2;
  cout << get_Sum;

}

void
subtraction ()
{				
  get_Sum = get_Num1 - get_Num2;
  cout << get_Sum;

}

void
multiply ()
{				
  get_Sum = get_Num1 * get_Num2;
  cout << get_Sum;

}

void
divide ()
{				
  get_Sum = get_Num1 / get_Num2;
  cout << get_Sum;

}
//Option Function
void
operations ()
{
  switch (option)
    {
    case 1:
      addition ();

      break;
    case 2:
      subtraction ();
      break;
    case 3:
      divide ();
      break;
    case 4:
      multiply ();
      break;
    }
}

int
main ()
{
    //Ask user for options and saves it
  cout << "Welcome to your calculator. Please select a option from below. " <<endl;

  cout <<"1.Addition, 2.Subtraction, 3.Divide, 4.Multiply or 5.To close program" <<endl;

  cin >> option;
//Ask user for number inputs
  cout << "enter your first number: ";
  cin >> get_Num1;
  cout << "enter your second number: ";
  cin >> get_Num2;
  operations ();


  return 0;
}
