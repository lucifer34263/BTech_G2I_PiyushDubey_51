/*#include<iostream>
using namespace std;

int min(int a,int b){
    if(a>b){
        return b ;
    }else{
        return a;
    }
}

int main(){
    int n1,n2;

    cout<<"Enter the first number:   ";
    cin>>n1;
    cout<<"Enter the second number :  ";
    cin>>n2;
    cout<<"The minimum number is :  "<<min(n1,n2);

    return 0;
}*/

/*#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }else{
        return (n*n+n)/2;
       
    }
}

int main(){
    int num;
    cout<<"Enter the number :  ";
    cin>>num;

    cout<<"The sum of number is:  "<<sum(num);
    return 0;
}*/


/*#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return (n*factorial(n-1));
    }
}

int main(){
    int num;
    cout<<"Enter the number :  ";
    cin>>num;

    cout<<"The factorial of the number is:  "<<factorial(num);

    return 0;
}*/


/*#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }else{
        return (n%10+sum(n/10));
    }
}

int main(){
    int num;
    cout<<"Enter the number :  ";
    cin>>num;

    cout<<"The sum of digits of the number is :  "<<sum(num);

    return 0;
}*/


/*#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    int factorial_n=factorial(n);
    int factorial_r=factorial(r);
    int factorial_nmr=factorial(n-r);
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n,r;

    cout<<"Enter the number:  ";
    cin>>n;
    cout<<"Enter the number:  ";
    cin>>r;

    cout<<ncr(n,r);

    
    return 0;
}*/



//homework

/*#include<iostream>
using namespace std;

int prime(int n){
    int prime;
    if(n<0){
        return prime=0;
    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                prime =0;
        

        }
    }
    }if(prime){
        cout<<"Prime";
    }else{
        cout<<"Not prime";
    }
}
int main(){
    int num;
    cout<<"Enter the number :  ";
    cin>>num;
    prime(num);
    
    
    return 0; 
}*/

#include<iostream>
using namespace std;


int prime(int n) {
    if (n < 2)
        return 0;

    int prime = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    return prime;
}
int main(){
    int num;
    cout<<"Enter the number :  ";
    cin>>num;
    if (prime(num))
    cout << "Prime";
else
    cout << "Not Prime";

cout << "\nPrime numbers are:\n";

for (int i = 2; i <= num; i++) {
    if (prime(i)) {
        cout << i << " ";
    }
}
return 0;
}