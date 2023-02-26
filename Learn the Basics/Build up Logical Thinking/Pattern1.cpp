/* Pattern 1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){          // The outer for loop is for the no. of lines of the output required and to move the printed stuff by second loop onto the next line
        for(j=1;j<=5;j++){      // The inner for loop is for printing the stars with spaces if required
            cout << "* ";
        }
        cout << '\n';
    }
    return 0;
}