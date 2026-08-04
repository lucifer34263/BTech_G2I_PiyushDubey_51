// If else statements

/*#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age>=18){
        cout<<"You are eligible for voting.\n";
    }else{
        cout<<"You are not eligible for voting.\n";
    }

    return 0;

}

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :  ";
    cin>>n;

    cout<<(n>=0?"Positive":"Negative")<<endl;

   /* if(n%2==0){
        cout<<"The entered number is even.\n";
    }else{
        cout<<"The entered number is odd.\n";

    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character:  ";
    cin>>ch;



    if(ch>='a'&& ch<='z'){
        cout<<"lowercase\n";
    }
    else{
        cout<<"UPPERCASE\n";
    }

    return 0;

}*/

// loops

/*#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    cout<<"Enter the number:  ";
    cin>>n;

    //while(i<=n){
    for(i=0;i<=n;i++){

        cout<<i<<endl;

    }
    return 0;
}*/

/*#include<iostream>
using namespace std;


    int main(){
        int n,i,sum=0;
        cout<<"Enter the number:   ";
        cin>>n;

        for(i=1;i<=n;i++){
            sum=sum+i;
        }
        cout<<sum;


    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,sum=0;

    cout<<"Enter the number :  ";
    cin>>n;

    for(int i =1;i<=n;i++){
        if(n%2!=0){
            sum=sum+n;

        }

    }
    cout<<"sum = "<<sum;
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,prime;

    cout<<"Enter the number :  ";
    cin>>n;

    if(n<=0){
        prime=1;
    }else{
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime =0;
        }

    }
}if(prime){
    cout<<"Prime";

}else{
    cout<<"Non prime";
}


    return 0;


}*/

// nested loop (pattern printing)

#include <iostream>
using namespace std;

int main()
{
    int n, i,j,m;
    cout<<"Enter the number :  ";
    cin>>n;
    cout<<"Enter the number :  ";
    cin>>m;

    for(i=1;i<=n;i++){
        
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
       
    }
    
    
    return 0;
}
