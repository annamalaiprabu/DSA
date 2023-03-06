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

// void sumOfFirstNterms(int n){ //we can also use the direct formula (n* (n+1))/2 but lets not do that as we are learning recursion here
//     if(n==1)
//         cout << 
//         return;
// }
void parameterizedWayforSumof1toN(int sum,int n){ //here we play around with the parameters more than the functions
    if(n==0){ //when there are 2 or more lines in the if statement don't forget curly braces
        cout << sum << '\n';
        return;
    }
    parameterizedWayforSumof1toN(sum+n,n-1); //this order of parameters doesn't matter as long as you understand their working properly
}
int functionalWayforSumof1toN(int n){
    if (n==1){ //or a more mundane way would be if (num == 0) return 0 am skipping this step in the function to save a recursive call
        return 1;
    }
    return n + functionalWayforSumof1toN(n-1);
}
int factorial(int n){
    if(n==1){ //here we can't use n==0 as in case of multiplications never return 0 or even if (n==0) case you keep, then return 1 instead of 0
        return 1;
    }
    return n * factorial(n-1);
    //here TC = O(n) and SC also = O(n)
}
void revArrayUsingForLoop(){
    int n= 5;
    int a[n] = {1,2,3,4,2};
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(a[start],a[end]); //can use temp variable to swap as it might be more efficient than calling a swap function, but am just coding it here for your understanding of how it works
        start++;
        end--;
    }
    for(int i = 0; i < n ; i++){
        cout << a[i] << '\t';
    }
}
void revArrayUsingRecursionWay1(int a[],int start,int end){
    if(start >= end){ //even > is important here as in the case of even sizes they skip the pointers equal case and directly cross over each other
        return a[];
    }
    swap(a[start],a[end]);
    revArrayUsingRecursionWay1(a[],start+1,end-1);
    
}
int main(){
    // printNameNtimes(6);
    // printNameNtimesWay2(1,6);
    // printLinearly1toN(0,6);
    // printLinearlyNto1(6);
    // printLinearlyNto1Way2(6,6);
    // printLinearly1toNthruBacktracking(6,6);
    // printLinearlyNto1thruBacktracking(1,6);
    // parameterizedRecursionWayforSumof1toN(0,3);
    // cout << functionalWayforSumof1toN(3) << '\n';
    // cout << factorial(5) << '\n';
    revArrayUsingForLoop();


    return 0;
}