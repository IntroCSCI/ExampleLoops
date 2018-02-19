#include<iostream>
#include<string>

using namespace std;


int main()
{
  string input;
  int last;
  char current = '';
  bool found = false;
  cout<<"Enter a word: ";
  cin>>input;
  last = input.length() - 1;
  
  do
  {
    current = input[last];
    found = current=='a' || current=='e' || current=='i' 
            || current=='o' || current=='u';
    last--;
  }while( !found );
  cout<<"MESSAGE\n";
  cout<<current<<endl;
  
  return 0;
}
