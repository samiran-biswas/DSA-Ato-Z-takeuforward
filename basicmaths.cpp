
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

int main(){
    // cout<<"Hi";

// lastDigit(7789);
int totalDigit=noOfDigits(85678765);
cout<<totalDigit;
    return 0;
}

