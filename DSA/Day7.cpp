/*#include<iostream>
using namespace std;

int powercheck(int n){
    if(n<=0){
        return 0;
    }
    while(n%2==0){
        n/=2;
    }
    return n==1;
}

int main(){
    int n;
    cout<<"Enter the number :  ";
    cin>>n;

    if(powercheck(n)){
        cout<<"True";
    }else{
        cout<<"false";
    }

    return 0;
}*/


#include<iostream>
using namespace std;

int reverse(int n){
   int rem,ans=0;
   while(n>0){
    rem=n%10;
    
    
    
    ans=ans*10+rem;
    n=n/10;
    
   }
   return ans;
}

int main(){
    int n;
    cout<<"Enter the number :  ";
    cin>>n;

    cout<<"The reverse of number is :  "<<reverse(n);

    return 0;
}


    
