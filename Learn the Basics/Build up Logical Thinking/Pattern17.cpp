/*Pattern 17
   A
  ABA
 ABCBA
ABCDCBA
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j,k,l;
        for(i=1;i<=n;i++){
            char alphabet = 'A';
            for(k=1;k<=n-i;k++){
                cout << " ";
            }
            for(j=1;j<=i;j++){
                cout << alphabet;
                alphabet++;
            }
            alphabet--;
            for(l=1;l<i;l++){
                alphabet--;
                cout << alphabet;
            }
            cout << '\n';
        }
    return 0;
}