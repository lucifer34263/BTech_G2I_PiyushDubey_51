/*#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int start,end,n;
   

    for(start=0;start<size;start++){
        for(end=start;end<size-1;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
           cout<<" ";
        }
        cout<<"\n";
    }
   
    
    return 0;
}*/


/*#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int size=7;
    int start,end,n;
   
    int maxsum=INT_MIN;
    for(start=0;start<size;start++){
        int currsum=0;
        for(end=start;end<size-1;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);
            
           
        }
        
    }
    cout<<maxsum;
   
    
    return 0;
}*/


/*#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int size=7;
    int maxsum=INT_MIN;
    int currsum=0;
    for(int start=0;start<size;start++){
        
        currsum+=arr[start];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
            
            
        }
        
    }
    cout<<maxsum;
   

    return 0;
}*/

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,3,5,8,9};
    int size=5;
    int target;

    cout<<"Enter the target value:  ";
    cin>>target;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" , "<<j;
                cout<<" ";
                return 0;
            }
        }
    }
    return 0;
}