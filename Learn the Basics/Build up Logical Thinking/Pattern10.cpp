/*Pattern 10
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,l,m,n;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){ 
            cout << "*";
        }
        cout << '\n';
    }
    for(l=1;l<=n-1;l++){
        for(m=l;m<=n-1;m++){ // //relate j to i if necessary in the inner loop, dry run to find this
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}