/*Pattern 7
    *
   ***  
  *****
 *******
*********
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n;
    cin >> n;             //assume n sometimes as 5 while writing the tchart
    for(i=1;i<=n;i++){
        for(k=i;k<n;k++){ //Even the space variable is related to the external loop's variable, here k is related to i and n sometimes
            cout << " " ;
        }
        for(j=1;j<=(2*i)-1;j++){ //This loop which is used for printing the stars is always related only to the outer for loop variable i
            cout << "*";   // Try to find a relation between the outer for loop variable, n and the printing * variable using algebra
        }
        cout << '\n'; //make a tchart for both these relation tchart1 i and k as i increases what happens to k and similarly make tchart2 for i and j
    }         // finally find out j in terms of i and k in terms of i like j=i+2-n and k=(2*i)-1 as these are the testing conditions in the inner loops
    return 0;
}