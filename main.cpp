#include <iostream>

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

  return 0;
}
