void HelloWorld () {
    cout << "Hello World!";
}

/* PURPOSE: Program to compute the first integral power to which 2 can be 
            raised that is greater than a user-input integer. 
*/

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{  int i = 0;
   int n = 1;

   while(true)
      {  cout << "Please enter a number, 0 to quit ";
      cin >> n; // this should check whether n is an integer
      if (n == 0) return 0;
      i = 0;
      while ( n > pow(2,i))
      {   i++;
      }
      cout << "2 raised to " << i << " (" << pow(2,i) << ") "
         << " is the first power of two greater than or equal to " << n << "\n";
   }      
}
