#include <bits/stdc++.h>
using namespace std;
void printNameNtimes(int n){
    if(n==0)
        return;
    cout << "Annamalai\t";
    printNameNtimes(n-1);
}
void printNameNtimesWay2(int i, int n){
    if(i>n) //or i==0 and i=0 in the function call in main fn
        return;
    cout << "Annamalai\t";
    printNameNtimesWay2(i + 1,n);
    //TC is O(n) and even SC is O(n) calculated using stack space, this SC is hypothetical but still we calculate it
}
void printLinearly1toN(int i,int n){
    if(i==n){
        return;
    }
    cout << i << " ";
    printLinearly1toN(i + 1,n);
}
void printLinearlyNto1(int N){
    if(N==0)
        return;
    cout << N << " ";
    printLinearlyNto1(N-1);
}
void printLinearlyNto1Way2(int i,int n){
    if(i==0) // or i<1 whatever floats your boat man
        return;
    cout << i << " ";
    printLinearlyNto1Way2(i-1,n);
}
void printLinearly1toNthruBacktracking(int i,int n){
    if(i==0)
        return;
    printLinearly1toNthruBacktracking(i-1,n);
    cout << i << ' ';

    // essentially if you observe the previous code to print N to 1 and just flip the 4th and 5th lines of that code, we would get the reverse output of that program, thereby printing 1 to N
    // so for backtracking approach, maybe you can think about the program for the reverse of the desired outcome, dry run a bit and figure out the code
}
void printLinearlyNto1thruBacktracking(int i,int n){
    if(i>n) //here it is also similar to 1 to N code but not i==n therefore in the main function we give 1,desired_n as the parameters
        return;
    printLinearlyNto1thruBacktracking(i+1,n);
    cout << i << ' ';
}

int main(){
    // printNameNtimes(6);
    // printNameNtimesWay2(1,6);
    // printLinearly1toN(0,6);
    // printLinearlyNto1(6);
    // printLinearlyNto1Way2(6,6);
    // printLinearly1toNthruBacktracking(6,6);
    printLinearlyNto1thruBacktracking(1,6);


    
    return 0;
}