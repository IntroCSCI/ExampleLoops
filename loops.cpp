#include<iostream>
#include<string>

using namespace std;

int main()
{
  //PART 1
  string input;
  int last, index;
  cout<<"Enter a word: ";
  cin>>input;
  last = input.length() - 1;
  index = 0;
  while( index <= last )
  {
    char temp = input[index];
    input[index] = input[last - index];
    input[last - index] = temp;
    index++;
  }
  cout<<input<<endl;

  return 0;
}
