/*Pattern 15
ABCDE
ABCD
ABC
AB
A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        char alphabet = 'A';
        for(j=5;j>=i;j--){
            cout << alphabet;
            alphabet++;
        }
        cout << '\n';
    }
return 0;
}