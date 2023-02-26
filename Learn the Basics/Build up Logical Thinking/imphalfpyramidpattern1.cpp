/*imphalfpyramidpattern1
    *
   **
  ***
 ****
*****
*/
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){ // this 3rd for loop with k is used for printing the spaces before the stars
            cout << " ";
        }
        for(j=1;j<=i;j++){
            cout << "*"; //Note that here this pattern has no spaces so we only * not "* (not star and space)" if you space it will look like a full triangle
        }
        cout << '\n';
    }
return 0;
}