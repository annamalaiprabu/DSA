/* Pattern 11
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){          
        for(j=1;j<=i;j++){      
            if((i+j+1)%2==1){ //for questions like this try to find some relation between i,j and the numbers using trial and error
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << '\n';
    }
    return 0;
}