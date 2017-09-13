#include<iostream>
#include<string>

using namespace std;

int main()
{
  //PART 1
  string input;
  int letters, index;
  cout<<"Enter a word: ";
  cin>>input;
  last = input.length() - 1;
  index = 0;
  while( index < letters )
  {
    char temp = input[0];
    input[0] = input[last - index];
    input[last - index] = temp;
    index++;
  }

  return 0;
}
