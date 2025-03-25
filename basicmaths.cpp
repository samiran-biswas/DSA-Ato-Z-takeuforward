
#include<iostream>
using namespace std;


// ---extract the last digit--
void lastDigit(int n){
    int a;
   while(n>0){

   
 a=n%10;
    n=n/10;
   cout<<a <<endl;
   }
   
  
   

}



// ---tell no of digits in a number

int noOfDigits(int n){
    int count=0;

    while(n>0){
        int a=n%10;
        n=n/10;
        count++;
    }

    return count;
}

// 2nd method ---tell no of digits in a number
int useLogCountDigit(int n){
    int count=(int)(log10)(n)+1;
    return count;
}


// ---reverse a digit

int reverseNumber(int n){
    int rev=0;
    int sign=1;
    if(n<0){
        sign=-1;
    }
    n=abs(n);
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        rev=rev*10+lastdigit;
    }
    return rev*sign;

}

// Check Palindrome

bool isPalindrome(int n){
 bool checkPalindrome=true;
long long rev=0;
int original=n;
    if(n<0){
        return false;

    }
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        rev=rev*10+lastDigit;
    }
   if(original!=rev){
   checkPalindrome=false;
   }
   return checkPalindrome;

}



bool armstrongNumber(int n){

    bool isarmstrongNumber=false;

    int original=n;
    int amsno=0;

    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        amsno=amsno+(lastDigit*lastDigit*lastDigit);
    }
// cout<<amsno;
    if(original==amsno){
        isarmstrongNumber=true;
    }
    return isarmstrongNumber;
}


// ---prinnt all divisors
void printAllDivisors(int n){
int sum=0;
   for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
            cout<<i<<endl;
        }

   }

   cout<<sum;
    
}



void Prime(int n ){
    int count=0;
    for (int i =1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime";
    }else{
        cout<<"Not Prime ";
    }
}

// ----- GCD---> Euclidean Algorithm-----

int GCD(int a, int b){
    int gdcValue;
    while (a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }

    if(a==0){
        gdcValue=b;
    }else{
        gdcValue=a;
    }

    return gdcValue;
}
int LCM(int a,int b){
    return (a*b)/GCD(a,b);
}
int main(){
    // cout<<"Hi";

// lastDigit(7789);
// int totalDigit=noOfDigits(85678765);
// cout<<totalDigit;
// cout<<useLogCountDigit(327);
// cout<<reverseNumber(1534236469);
// cout<<isPalindrome(1214);
// cout<<armstrongNumber(153);
// printAllDivisors(153);
// Prime(5);

// cout<<GCD(20,40);
cout<<LCM(20,40);
    return 0;
}

