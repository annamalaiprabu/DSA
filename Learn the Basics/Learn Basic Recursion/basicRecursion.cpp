#include <bits/stdc++.h>
using namespace std;
void printNameNtimes(int n){
    if(n==0)
        return;
    cout << "Annamalai\n";
    n--;
    printNameNtimes(n);
}
void printNameNtimesWay2(int i, int n){
    if(i>n)
        return;
    cout << "Annamalai\n";
    printNameNtimesWay2(i + 1,n);
}
int main(){
    printNameNtimes(5);
    return 0;
}