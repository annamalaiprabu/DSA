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
        return; //as we can't return an array directly from a function and also we have performed the necessary swaps to the array before reaching the base case, so no probs we can print the array in the main fn to verify   
    }
    swap(a[start],a[end]);
    revArrayUsingRecursionWay1(a,start+1,end-1);
    //here we are using 2 pointers in the next approach I will show how this is possible using one pointer only
}
void revArrayUsingRecursionWay2(int a[],int i,int size){ //at the beginning of the main fn we will take i to be 0
    // here we are using only one pointer to swap, more efficient than the previous one
    if(i >= size/2){ //this condition is even for both odd and even don't overthink it, you can optimize more for odd and even cases individually but for now a single forula if(i>=n/2) will do
        return;
    }
    swap(a[i],a[size-i-1]); //the formula for the second swap arraySize - i - 1
    revArrayUsingRecursionWay2(a,i + 1, size); //for the recursion call in an array, the argument for an array is only the name of the array passed during the first function call, only there in the first function definition, we need to pass the array with [] like this int arr[]
}
                                              //also the size also need not be reduced it can be size only in all recursion calls, only thing we need to change is the the pointer we use here i or start which is 0 at the beginning, nothing else in the revursive fn calls 
bool checkIfPalindrome(string s,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return checkIfPalindrome(s,i+1,n); //this is actually the else condition and as it is a bool function we need to return at the end so I am returning the whole next recursive calls only
                                       //finally this is the line which gives the verdict
    //if sometimes recursion is taking too long in gfg try an iterative approach and vice-versa
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
    // revArrayUsingForLoop();
    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // revArrayUsingRecursionWay1(arr,0,n-1); //here the arguments passed to the fn apart from the array must be 0 to n-1(not n) as per the indexing, we can use it to also reverse only specific parts of the array
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << '\t';
    // }
    // revArrayUsingRecursionWay2(arr,0,n); //pls make a note in one pointer approach we give n as the parameter and not n-1 like the 2 pointer approach for reversing an array
    // for(int i=0;i<n;i++){ 
    //     cout << arr[i] << '\t';
    // }
    string s = "madam";
    int n = s.size(); //performing string operation of size on string s to get the size
    cout << checkIfPalindrome(s,0,n) << '\n';

    return 0;
}