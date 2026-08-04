/*#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,3,7,9,15};
    int size=5;
    int target;
    int i=0;
    int j=size-1;
    int ans;

    cout<<"Enter the target value:  ";
    cin>>target;

    while(i<j){
        int ps=arr[i]+arr[j];
        if(ps==target){
            cout<<"Pair found   :  "<<i<<","<<j<<endl;
            return 0;
            
        }else if(ps>target){
            j--;
        }else if(ps<target){
            i++;
        }
        
    }
    
    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int multiple(vector<int>&nums){
    int n = nums.size();
    for(int val:nums){
        int frequency = 0;
        for(int el : nums){
            frequency++;
            if(frequency>n/2){
                return val;
            }
        }
    }
}

int main(){
    vector<int>nums={5,5,5,2,1,5};
   cout<< multiple(nums);
    return 0;
}*/
#include<iostream>
using namespace std;

int multiple(int arr[],int size){
    int n = size;
    for(int i = 0;i<size;i++){
        int freq = 0;
        for(int j=0;j<size;j++){
            
            if(arr[i]==arr[j]){
                freq++;
                
            }
        
    }if(freq>n/2){
        return arr[i];
    }
  
}
}
    
int main(){
    int arr[5]={5,5,5,2,1};
    int size=5;
    cout<<multiple(arr,size);

    return 0;

}