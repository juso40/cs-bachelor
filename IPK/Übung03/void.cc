#include <iostream>
#include <cmath>

using namespace std;




void collatz(int &zahl)
{

    
     cout <<zahl << endl;
    
    while (zahl!=0 and zahl!=1 and zahl!=-1 and zahl!=-5 and zahl !=-17)
    {
        if (zahl%2==0){
         zahl=zahl/2;
         
        }
        else {
         zahl=zahl*3+1;   
        }
         cout <<zahl << endl;
    }
}

int main()
{
    int zahl; 
    
    cin >> zahl;
   
    
    collatz(zahl);
}
