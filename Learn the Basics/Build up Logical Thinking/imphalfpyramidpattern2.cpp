/*imphalfpyramidpattern2
*****
 ****
  ***
   **
    * 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<=i-1;k++){
            cout << " ";
        }
        for(j=5;j>=i;j--){
            cout << "*";
        }
        cout << '\n';
    }
return 0;
}