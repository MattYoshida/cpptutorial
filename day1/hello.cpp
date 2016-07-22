#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!\n";

  // // integers
  // int age = 13;
  //
  // std::cout << age;

  int age1 = 14.5;
  float age2 = 14.5;
  char c = 'A';
  string name = "Matt";

  cout << age1 << endl;
  cout << age2 << endl;
  cout << c << endl;
  cout << name << endl;

  float a = 5;
  float b = 7;


  cout << a / b << endl;

  string input;
  cout << "Hello, what is your name?" << endl;
  cin >> input;

  cout << "Hello, " << input << endl;

  int age;
  cout << "How old are you? " << endl;
  cin >> age;

  cout << "You are " << age << " years old." << endl;
}
