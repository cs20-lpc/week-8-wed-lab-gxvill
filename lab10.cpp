#include "ArrayStack.hpp"
#include <iostream>

using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

double gRec(unsigned);
double gStack(unsigned);

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls two functions in two different ways:
 * recursive and iterative. The outputs for both function calls should match
 * exactly.
 * 
 * Input:
 * N/A
 * 
 * Output:
 * An integer to signal to the OS the exit code.
*******************************************************************************/

int main() {
    unsigned startValue = 0;

    cout << "Enter the starting value for i: ";
    cin  >> startValue;

    cout << "\nRecursive:\n";
    cout << gRec(startValue) << endl;

    cout << "\nIterative:\n";
    cout << gStack(startValue) << endl;

    return 0;
}

/*******************************************************************************
 * Description:
 * Recursive function that calculates a result. Displays a message when a base
 * case is reached.
 * 
 * Input:
 * i - an unsigned value that determines whether or not this is a base case
 * 
 * Output:
 * The result of 1.1n + 3.2, where n is the depth of recursion
*******************************************************************************/

double gRec(unsigned i) {
    if (i == 0) {
        cout << "Base case!\n";
        return 3.2;
    }
    
    return gRec(i - 1) + 1.1;
}

/*******************************************************************************
 * Description:
 * Iterative function that simulates recursion using a stack. Calculates a
 * result. Displays a message when a base case is reached.
 * 
 * Input:
 * i - an unsigned value that determines whether or not this is a base case
 * 
 * Output:
 * The result of 1.1n + 3.2, where n is the depth of recursion
*******************************************************************************/

double gStack(unsigned i) {
    // TODO implement using the abilities of a stack

    ArrayStack<double> buff(i+1);
    double count;
    buff.push(3.2);
    
    while(i != 0){
        buff.push(1.1);
        i--;
    }

    while(!buff.isEmpty()){
        count += buff.peek();
        buff.pop();
    }

    return count;

    //regular implementation
    /*
    double count = 0;
    while(i != 0){
        count += 1.1;
        i --;
    }
    count += 3.2;
    return count;
    */


}
