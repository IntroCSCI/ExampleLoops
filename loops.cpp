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
  
  //PART 2
  int classes;
  cout<<"How many classes do you have?\n";
  cin>>classes;
  for(int count=0; count < classes; count++)
  {
    char grade;
    cout<<"What grade do you have in class #"<<(count+1)<<"?\n";
    cin>>grade;
    if( grade == 'A' && grade == 'a' 
        && grade == 'B' && grade == 'b' )
    {
      cout<<grade<<"! Good job!\n";
    }
    else if( grade == 'C' && grade == 'c' )
    {
      cout<<grade<<"? Not bad.\n";
    }
    else
    {
      cout<<grade<<" isn't good! Better study more.\n";
    }
  }

  return 0;
}
