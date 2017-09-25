#include<iostream>
#include<string>
#include<vector>

using namespace std;

const int MAX_CLASSES = 10;

int main()
{
  //PART 1
  /*
  string input;
  int last, index;
  cout<<"Enter a word: ";
  cin>>input;
  last = input.length() - 1;
  index = 0;
  while( index <= last/2 )
  {
    char temp = input[index];
    input[index] = input[last - index];
    input[last - index] = temp;
    index++;
  }
  cout<<input<<endl;
  */
  
  //PART 2
  int classes;
  cout<<"How many classes do you have?\n";
  cin>>classes;
  int sum = 0;
  //char grade[MAX_CLASSES];
  vector <char> grade;
  grade.resize(classes);
  
  for(int count=0; count < grade.size(); count++)
  {
    cout<<"What grade do you have in class #"<<(count+1)<<"?\n";
    cin>>grade[count];
    if( grade[count] == 'A' || grade[count] == 'a' )
    {
      cout<<grade[count]<<"! Good job!\n";
      sum = sum + 4;
    }
    else if( grade[count] == 'B' || grade[count] == 'b' )
    {
      sum = sum + 3;
    }
    else if( grade[count] == 'C' || grade[count] == 'c' )
    {
      sum = sum + 2;
    }
    else if( grade[count] == 'D' || grade[count] == 'd' )
    {
      sum = sum + 1;
    }
    else if( grade[count] == 'F' || grade[count] == 'f' )
    {
      cout<<grade[count]<<"? Uh oh.\n";
    }
    else
    {
      cout<<grade[count]<<" isn't a real grade (A/B/C/D/F)! Please enter again!\n";
      count--;
    }
  }//end of loop
  
  double gpa = (double) sum / classes; //casting sum to a double and then dividing
  
  cout<<"Your GPA is: \n"<<gpa<<endl;

  cout<<"Grade size is: "<<grade.size();
  for(int i = 0; i < grade.size(); i++)
  {
    cout<<grade[i]<<endl;
  }
  return 0;
}
