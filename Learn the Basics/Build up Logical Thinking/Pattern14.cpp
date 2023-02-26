/*Pattern 14
A
AB
ABC
ABCD
ABCDE 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        char alphabet='A'; //if you place this outside the for loop then the obtained pattern's shape will be the same but it will be like abcdefghij and so on
        for(j=1;j<=i;j++){
            cout << alphabet;
            alphabet++;
        }
        cout << '\n';
    }
return 0;
}