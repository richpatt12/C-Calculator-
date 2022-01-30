#include <iostream>

using namespace std;
//Declares variable option,num1,num2, and sum
int option;//variable to store users selected option
int num1;//variable to store number 1 of user
int num2;//variable to store number 2
int sum;//variable to store the sum of number 1 and 2
void addition (){ // addition function
    sum = num1 + num2;
    cout <<sum;
    
}
void subtraction (){// subtraction function
    sum = num1 - num2;
    cout <<sum;
    
}
void multiply (){// multiplication function
    sum = num1 * num2;
    cout <<sum;
    
}
void divide (){// divide function
    sum = num1 / num2;
    cout <<sum;
    
}
void exit () {// divide function
    cout <<"Thanks for at least trying. "<<endl;
    return 0;
}

int main() {
 cout <<"Welcome to your calculator. Please select a option from below. "<<endl;
 cout<<"1.Addition, 2.Subtraction, 3.Divide, 4.Multiply or 5.To close program"<<endl;
 cin >> option;
cout << "enter your first number: ";
cin >> num1;
cout <<"enter your second number: ";
cin >> num2;
if (option == 1)
{
    addition();
} else if(option ==2){
    subtraction();
}
else if(option ==3){
    divide();
}
else if(option ==4){
    multiply();
}
else if (option ==5){
    exit()
}
  return 0;
}