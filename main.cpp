#include <iostream>

using namespace std;

int main()
{
  cout << "Hello world!" << endl;
  //cout basically stands for 'console out'. Used for printing
  //endl stands for 'end line'

  //creating a variable
  string character_name = "John";
  int character_age;  //need not assign value straight away
  character_age = 69; //No quotation marks here!

  //using the variables
  cout << "There once was a man named " << character_name << endl;
  cout << "He was " <<character_age << " years old." << endl;

  //Printing a shape
  cout << "    /|" << endl;
  cout << "   / |" << endl;
  cout << "  /  |" << endl;
  cout << " /   |" << endl;
  cout << "/____|" << endl;

  return 0;
}
