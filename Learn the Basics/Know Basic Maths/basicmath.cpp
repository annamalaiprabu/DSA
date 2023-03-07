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
    int n{8208};
    int ndupe{n},ndupe2{n},lastDigit{},checkSum{0},numOfDigits{0};
    while(ndupe2!=0){
        ndupe2 = ndupe2/10;
        numOfDigits++;
    }
    while(n!=0){
        lastDigit = n % 10;
        checkSum += pow(lastDigit,numOfDigits);
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
    vector <int> v1; //i*i<=n we get from squaring on both sides of i <=sqrt(n)
    for(int i=1;i*i<=n;i++){ //in the condition part of the n we use i*i<=n instead of i<=sqrt(n)  as sqrt(n) is a mathematical function and everytime(for every iteration) it is called it will take time itself
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
void checkIfPrime(){
    int n{2},flag{0};
    for(int i=2;i*i<=n;i++){
        if(n % i ==0){ //no need to check for n/i as if i is not a factor of n then obviously n/i also won't be a factor of n
            flag=1;
            break;
        }
    }
    if(flag==1 || n==1){
        cout << "Not a Prime\n";
    }
    else{
        cout << "Yes, it is a Prime\n";
    }
    }
void findGcdOrHcf(){
    int num1{40},num2{20},gcd{1};
    // approach 1
    for(int i = 2;i<=min(num1,num2);i++){ // as the hcf can't be greater than the least no. out of the two so we take the least out of the two
        if(num1 % i == 0 && num2 % i ==0){
            gcd = i;
        }
    }
    cout << "The HCF is " << gcd << '\n';
    
    // approach 2
    // here we begin from the end, starting from whether the gcd is the least number itself
    // both the approaches have the same TC of O(min(num1,num2)) as we always take the first
    // but I personally liked the second approach more out of the two as for except both the numbers are prime case like 11 and 13, the 2nd approach loops a lot less than the first one
    gcd = 1;
    for(int i = min(num1,num2);i>=2;i--){
        if(num1 % i ==0 && num2 % i ==0){
            gcd = i;
            break;
        }
    }
    cout << "The HCF is " << gcd << '\n';
    
    // but both these approaches take a lot of time so we can use the euclidean algorithm which is gcd(a,b) = gcd(a-b,b)
    // the program ends when either of the 2 numbers is 0, then the other number is the gcd

    // while(num1 > 0 && num2 > 0){
    //     if(num1 > num2){
    //         num1 = num1 - num2;
    //     }
    //     else{
    //         num2 = num2 - num1;
    //     }
    // }
    // if(num1 == 0){
    //     cout << "The HCF is " << num2 << '\n';
    // }
    // else{
    //     cout << "The HCF is " << num1 << '\n';
    // }
    
    // but after doing a dry run for the euclidean algorithm we found out a way to reduce the number of iterations , by making the observation that gcd(a,b) = gcd(a % b,b), where a was greater than b
    // so lets code the better euclidean algorithm now also comment out the previous way before running this and vice-versa as the num1 and num2 values have been changed from their original 
    
    while(num1 > 0 && num2 > 0){
        if(num1 > num2){
            num1 = num1 % num2;
        }
        else{
            num2 = num2 % num1;
        }
    }
    if(num1==0){
        cout << "The HCF is " << num2 << '\n';
    }  
    else{
        cout << "The HCF is " << num1 << '\n';
    }
    //also to find the LCM the best method would be to used the property HCF * LCM = pdt. of 2 no.s
}

int main(){
    // digitConcept();
    // numberOfDigits();
    // reverseNumber();
    // checkPalindrome();
    // checkArmstrong();
    // printAllDivisors();
    // checkIfPrime();
    findGcdOrHcf();
    return 0;
}