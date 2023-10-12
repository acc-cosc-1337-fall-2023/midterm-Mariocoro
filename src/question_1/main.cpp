#include <iostream>
#include <assert.h>
using namespace std;

// function definition to swap the refernce.
void swapByRef(int &x, int &y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

// function definition to swap the values.
void swapbyValue(int x, int y) {
   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}

int main () {
     // local variable declaration:
     int a = 100;
     int b = 200;
      
     // assertions 
     // Before swap
     assert(a==100);
     assert(b==200);
     
     // After swap by reference
     swapByRef(a,b);
     assert(a==200);
     assert(b==100);
     
     // Again swap using call by value
     swapbyValue(a,b);
     assert(a==200);
     assert(b==100);
     return 0;
}