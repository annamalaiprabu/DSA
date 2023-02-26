/*Pattern 16
A
BB
CCC
DDDD
EEEEE
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    char alphabet = 'A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout << alphabet;
        }
        cout << '\n';
        alphabet++;
    }
return 0;
}