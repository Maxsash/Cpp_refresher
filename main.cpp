#include <iostream>
#include <cmath> //for math functions

using namespace std;

int main()
{
  cout << "Hello world!" << endl;
  //cout basically stands for 'console out'. Used for printing
  //endl stands for 'end line'

  //Printing a shape
  cout << "    /|" << endl;
  cout << "   / |" << endl;
  cout << "  /  |" << endl;
  cout << " /   |" << endl;
  cout << "/____|" << endl;

  //creating a variable
  string character_name = "John";
  int character_age;  //need not assign value straight away
  character_age = 69; //No quotation marks here!

  //using the variables
  cout << "There once was a man named " << character_name << endl;
  cout << "He was " <<character_age << " years old." << endl;

  //using functions
  cout << character_name.length() <<"\n"; //Here length is a function
  cout << character_name.find("hn",0) <<endl ; //another function, now with parameters
  //the first parameter is the string to find, Second is which index to start looking from
  cout << character_name.substr(1,2) <<endl;
  //This is used to make a sub string. First parameter is starting index
  //second parameter is the desired length of string.

  //NEW math fucntions from cmath
  cout << pow(2,5) <<endl;
  cout << sqrt(49.8) <<endl;
  cout << round(4.6) <<endl;
  cout << ceil(4.1) <<endl; //ceiling function
  cout << floor(4.9) <<endl;
  cout << fmax(50000,69) <<endl; //compare to get larger number
  cout << fmin(420, 50000) <<endl;

  //User Input
  int age;
  cout << "Please enter your age: ";
  cin >> age;
  cout << "You are " << age << " years old" <<endl;
  string name;
  cout << "Please enter you name: ";
  cin.ignore(); //https://stackoverflow.com/a/6649914 --Please go through
  getline (cin, name); //it is suggested to only ever use getline instead of cin
  cout << "Hey there " << name << " !" <<endl;

  return 0;
}
