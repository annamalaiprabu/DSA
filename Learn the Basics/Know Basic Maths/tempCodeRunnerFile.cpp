while(num1 > 0 && num2 > 0){
        if(num1 > num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
    if(num1 == 0){
        cout << "The HCF is " << num2 << '\n';
    }
    else{
        cout << "The HCF is " << num1 << '\n';
    }