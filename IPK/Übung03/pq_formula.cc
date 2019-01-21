#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double a,b,c,x1,x2,squareroot;
string t;

int main()
{
      cout << "a=" << flush;
      cin >> a;
      
      cout << "b=" << flush;
      cin >> b;
      
      cout << "c=" << flush;
      cin >> c;
      
      cout << "Your equation is as follows:\n" << a << "x²+" << b << "x+" << c << "=0\n" << "Is this correct?(y|n)"<< flush;
      cin >> t;
      
      if (t == "y") {
          
          squareroot=(b*b-4*a*c);
          x1=(((-b)+sqrt(squareroot))/(2*a));
          x2=(((-b)-sqrt(squareroot))/(2*a));
          
          if (squareroot<0 ){
            cout << "Result is complex!" << endl;   
          }
          
          else if (squareroot==0){
            cout << "x1:" << x1 << endl;
          }
          
          else if (squareroot>0){
             cout << "x1=" << x1 << "\n" << "x2=" << x2 <<endl;
          }
          else if (a==b==0){
            cout << "No solution!"<<endl;
          } 
      
      }
      else if (t == "n") {
          cout <<"\n\nLet's try again!\n";;
          main();}
          
    
}
