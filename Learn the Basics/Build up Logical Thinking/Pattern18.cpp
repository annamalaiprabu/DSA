/*Pattern 13
E
E D
E D C
E D C B
E D C B A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        char alphabet = 'A'+5-1; //This way of assignment of char is useful 
        for(j=1;j<=i;j++){       //for char type patterns we don't need to be very particular about whatgoes into i and j that much
            cout << alphabet << " ";
            alphabet--;
        }
        cout << '\n';
    }
return 0;
}