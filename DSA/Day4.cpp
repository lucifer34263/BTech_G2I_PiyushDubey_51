/*#include<iostream>
using namespace std;

int main(){
    int n,i,j,m;
    cout<<"Enter the number :  ";
    cin>>n;
    //cout<<"Enter the number :  ";
    //cin>>m;

    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i;
    char j;

    cout<<"Enter the number :  ";
    cin>>n;
    //cout<<"Enter the number :  ";
    //cin>>m;

    for(i=0;i<n;i++){
        char ch ='A';

        for(j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<"\n";
    }return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number :  ";
    cin>>n;
    int m =1;


    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            cout<<m;
            m++;
        }
        cout<<"\n";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number :  ";
    cin>>n;
    char m ='A';


    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            cout<<m;
            m++;
        }
        cout<<"\n";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    char m='A';

    cout<<"Enter the number :  ";
    cin>>n;


    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<char(m+i);


        }
        cout<<"\n";
    }
    return 0;

}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout <<"Enter the number :  ";
    cin>>n;

    for(i=0;i<n;i++){
        int m = 1;
        for(j=0;j<i+1;j++){
            cout<<m;
            m++;
        }
        cout<<"\n";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout <<"Enter the number :  ";
    cin>>n;

    for(i=0;i<n;i++){

        for(j=i+1;j>0;j--){
            cout<<j;

        }
        cout<<"\n";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;

    cout<<"Enter the number :  ";
    cin>>n;
    int m=1;

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<m;
            m++;

        }

        cout<<"\n";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j;

    cout<<"Enter the number :  ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }for(j=1;j<=n-i;j++){
            cout<< i+1;
        }
        cout<<"\n";
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,i,j,m,p;

    cout<<"Enter the number :  ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            cout<<" ";
        }for(j=1;j<i+1;j++){
            cout<<j;
        }for(j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;

}*/

/*#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the number :  ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << '*';
        if (i != 0)
        {
            for (j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << '*';
        }

        cout << "\n";
    }

    // bottom

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << '*';

        if (i != n - 2)
        {
            for (j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the number :  ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        for (j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        for (j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}
