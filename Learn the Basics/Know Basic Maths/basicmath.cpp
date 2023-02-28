#include <bits/stdc++.h>
using namespace std;
void digitConcept(){
    // extraction of the digits of a number
    int num,lastDigit;
    num = 6364283;
    while(num!=0){
        lastDigit = num % 10;
        cout << lastDigit << '\t'; 
        num = num/10;
    }
    cout << '\n';
    // prints the number in a reverse fashion from right to left
}
void numberOfDigits(){
    int num,count{0};
    num = 6364283;
    while(num!=0){
        num = num/10;
        count++;
    }
    cout << count << '\n';
    // the time complexity is logbase10(n), whenever in a loop the no. of iterations decrease by 10 then logbase10 if decreases by 2 then logbase2 and so on

    //another way to get the no. of digits
    //cout << (int)(log10(num) + 1) << '\n'; //its correct only checked in online compiler dont know why the output here is random
}
void reverseNumber(){
    // reverse the number
    int num{778200};
    int lastDigit;
    int revNum{0};
    while(num!=0){
        lastDigit = num % 10;
        revNum = revNum*10 + lastDigit; //here the trailing zeros are automatically discounted and we multiply the revNum by 10 to get the next last digit just next(right) of it
        num = num/10;
    }
    cout << revNum << '\n'; 
}
void checkPalindrome(){
	int n = 121;
    int lastDigit,revNum{0},ndupe{n};
	while(n!=0){
		lastDigit = n % 10;
		revNum = revNum * 10 + lastDigit;
		n = n/10;
	}
	if(revNum==ndupe){
		cout << "Yes" << '\n';
	}
	else{
		cout << "No" << '\n';
	}
}
void checkArmstrong(){
    int n{371};
    int ndupe{n},lastDigit{},checkSum{0};
    while(n!=0){
        lastDigit = n % 10;
        checkSum += pow(lastDigit,3);
        n = n/10;
    }
    if(checkSum == ndupe)
        cout << "Yes, Armstrong\n";
    else
        cout << "No, Armstrong\n";
}
void printAllDivisors(){
    // the method for babies
    // int n{36};
    // for(int i=1;i<=n;i++){
    //     if(n % i == 0)
    //         cout << i << '\t';
    // }
    // gigachad method
    int n{36};
    vector <int> v1;
    for(int i=1;i*i<=n;i++){ //in the condition part of the n we use i*i<n as sqrt(n) is a mathematical function and everytime(for every iteration) it is called it will take time itself
        if(n % i == 0 ){
            v1.emplace_back(i);
            if(i != n/i){
                v1.emplace_back(n/i);
            }
        }
    }
    sort(v1.begin(),v1.end());
    for(auto x:v1){
        cout << x << " ";
    }
}
int main(){
    // digitConcept();
    // numberOfDigits();
    // reverseNumber();
    // checkPalindrome();
    // checkArmstrong();
    printAllDivisors();

    return 0;
}