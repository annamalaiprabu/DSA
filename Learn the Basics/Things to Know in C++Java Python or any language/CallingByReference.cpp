/*Calling by Reference*/
#include <iostream>
using namespace std;
void numbers(int *ptr1,int *ptr2){ // Here we use special integer variables called pointers to store the memory addesses of x and y inputted to the function in main fn
    *ptr1=20;
    *ptr2=10;
}
int main(){
    int x=10,y=20; 
    cout << "Before calling the function x = " << x << " and y = " << y;
    numbers(&x,&y); /*Here while passing the variables too we aren't directly passing the variables bu passing the memory addresses of the variables using & operator*/
    cout << "\nAfter calling the function x = " << x << " and y = " << y; 
    /* Here the assignment of numbers by the function takes over as the numbers are assigned to the addresses of the variables using pointers*/
    return 0;
}
