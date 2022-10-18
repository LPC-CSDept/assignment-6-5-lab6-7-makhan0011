//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)

// initiate function swapTwo  
void swapTwo(int &num1, int &num2);

// swap function that swaps num1, num2, and num3
void swap(int &num1, int &num2, int &num3)
{
    swaptwo(num1, num2);
    swaptwo(num1, num3);
}

// swapTwo function that swaps two int
void swapTwo(int &num1, int &num2)
{
    int a, b; 
    a = num1;
    b = num2; 
    num1 = b; 
    num2 = a; 
}
