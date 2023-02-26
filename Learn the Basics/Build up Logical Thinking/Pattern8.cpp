/*Pattern 8
*********
 *******
  *****
   ***
    *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n;
    cin >> n;
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++){
            cout << " ";
        }
        for(j=1;j<=(2*n)-(2*i)+1;j++){ //see here even n might be related to them, always keep an open mind
            cout << "*";
        }
    cout << '\n';
    }
    return 0;
}