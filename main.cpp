// practicearean.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*#include <iostream>
using namespace std;
int main(){
 for(int i=0;i<5;i++){
            if(i==2)break;

    for(int j=0;j<3;j++){
        cout<< "star"<< endl;

    }
 }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
  int x=2;
  int y=5;
  for(int i=1;i<4;i++){
    x=x+y;
    y=x-y;
  }
  cout<<"values are:&x,&y" <<x<<y;
}
*/
/*
/*
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value for n";
  cin >> n;
  if (n % 2 == 0)
  {
    cout << "even";
  }
  else
  {
    cout << "odd";
  }
}
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  cout << "factorial is" << fact;
  return 0;
}