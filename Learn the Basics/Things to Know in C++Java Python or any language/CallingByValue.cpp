/* Calling by Value in Functions */
#include <iostream>
using namespace std;
void numbers(int x,int y){
    x=20;
    y=10;
}
int main(){
    int x=10,y=20;
    cout << "Before calling the function x = " << x << " and y = " << y;
    numbers(x,y);
    cout << "\nAfter calling the function x = " << x << " and y = " << y; 
    /* See here even though we assign x=20 and y=10 for the numbers in the function, the numbers remain unswapped finally
    This is because the assigning dies out in the function itself as they are local variables
    This can be solved by Calling by Reference */
    return 0;
}