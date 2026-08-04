/*#include<iostream>
using namespace std;

int main(){
    int n,remainder,m=0,pow=1;
    cout<<"Enter the number :  ";
    cin>>n;

   

    while(n>0){
        remainder=n%2;
        n=n/2;
        m+=remainder*pow;
        pow=pow*10;

    }
    cout<<m;

    return 0;
    
}*/

#include<iostream>
using namespace std;

int main(){
    int n,remainder,ans=0,pow=1;

    cout<<"Enter the number :   ";
    cin>>n;
    
    while(n>0){
        remainder=n%10;
        ans+=remainder*pow;
        n=n/10;
        pow=pow*2;
    }
    cout<<ans;

    return 0;
}
