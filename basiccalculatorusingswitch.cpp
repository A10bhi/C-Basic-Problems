#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;
     cout<<"choose operation to perform '+''/''*''-'" << endl;
     cin>>ch;

    cout << "enter the value of a and b" << endl;
    cin>>a>>b;

    switch(ch)
{
    case 1:
    cout<<a+b;
    break;

       case 2:
    cout<<a/b;
    break; 

      case 3:
    cout<<a*b;
    break; 

     case 4:
    cout<<a-b;
    break;
}
}