/*#include<iostream>
using namespace std;

int main(){
   // int marks[5]={99,85,87,96,93};
    int size = 5;
    int marks[size];
    marks[1]=90;
    marks[2]=91;

    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    
   for(int i=0;i<size;i++){
    cout<<marks[i]<<"\n";
   }
    return 0;
}*/


/*#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[5]={5,65,85,2,100};
    int size=5;
    
    int index1,index2;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for( int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index1=i;
        }
    }
    
    for( int j =0;j<size;j++){    
        if(nums[j]>largest){
            largest=nums[j];
          index2=j;
        }
    }
   
    cout<<"Smallest value is :  "<<smallest<<"\n";
    cout<<"Lagrest value is : "<<largest<<"\n";
    cout<<"The index for smallest value is :  "<<index1<<"\n";
    cout<<"The index for largest value is :  "<<index2<<"\n";
    
    return 0;
}*/

/*#include<iostream>
using namespace std;

void changeofarray(int arr[],int size){
    cout<<"In function"<<"\n";
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[3]={1,2,3};

    changeofarray(arr,3);
    cout<<"In main function"<<"\n";
    for(int i=0;i<3;i++){
        //arr[i]=2*arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}*/


/*#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[]={2,8,7,6,9,4,5,3,1,10};
    int size=10;
    int target;
    cout<<"Enter the number :  ";
    cin>>target;

    cout<<linearsearch(arr,size,target)<<endl;

    return 0;
}*/


/*#include<iostream>
using namespace std;

void reverseofarray(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
       
    }
}

int main(){
    int arr[]={4,2,5,7,3,6,8,9};
    int size=8;

    reverseofarray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}*/


/*#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;

    for(int i=0;i<size;i++){
        
        sum=sum+arr[i];
        
        
    }
    return sum;
    
}
int product(int arr[],int size){
    int product =1;

    for(int i=0;i<size;i++){
        product=product*arr[i];
    }
    return product;
}
int main(){
    int arr[]={1,5,7,8,9};
    int size=5;

   

    cout<<"sum = "<<sum(arr,size)<<"\n";
    cout<<"Product = "<<product(arr,size)<<"\n";
   

    return 0;

}*/

/*#include<iostream>
#include<climits>
using namespace std;
 
 int index1 ,index2;

int minofnumber(int arr[] ,int size){
     int smallest =INT_MAX;
   

    for(int i=0;i<size;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
            index1=i;
        }
    }
    return smallest;
}
int maxofnumber(int arr[],int size){
    int largest = INT_MIN;

    for(int j=0;j<size;j++){
        if(largest<arr[j]){
            largest = arr[j];
            index2=j;
        }
    }
    return largest;
}

int main(){
    int arr[]={2,1,7,5,6,8,4,9};
    int size=8;

    cout<<"The smallest number =  "<<minofnumber(arr,size)<<"\n";
    cout<<"The largest number =  "<<maxofnumber(arr,size)<<"\n";
    

    

    swap(arr[index1],arr[index2]);
    for(int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;


}
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,6,7,7,6,8};
    int size = 7;
    int count;

    for(int i=0;i<size;i++){
        count = 0;
        for(int j = 0 ; j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}