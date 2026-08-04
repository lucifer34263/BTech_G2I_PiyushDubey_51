/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector < int> vec = {1,2,3,5,6,7,9};

    cout<<"size of the vector is "<<vec.size()<<"\n";

    vec.push_back(25);
    cout<<"size of the vector is "<<vec.size()<<"\n";
    vec.pop_back();
     cout<<"size of the vector is "<<vec.size()<<"\n";
     cout<<"The first term of the vector is "<<vec.front()<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }


    
    
    return 0; 
   
}*/


/*#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec ={4,1,2,1,2};
int ans=0;
for(int i : vec){
    ans=ans^i;
}
cout<<ans<<"\n";


    
    
    return 0;
}*/


/*#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int>&vec,int target){
    for(int i :vec ){
        if(vec[i]==target){
            return i;
        }
    }return -1;
}
int main(){
    vector<int>vec= {1,2,5,6,7,8,10,9};
    int target;
    cout<<"Enter the target:  ";
    cin>>target;
    //cout<<"size= "<<vec.size()<<"\n";

    cout<<linearsearch(vec,target)<<"\n";

    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int reverse(vector<int>&vec){
    int size=vec.size();
    int start=0;
    int end=size-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }

}
int main(){
    vector<int>vec = {1,6,7,8,9,4,7};
    reverse(vec);
    for(int i: vec){
        cout<<i<<"\n";
    }


    return 0 ;
}*/


#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,5,6,8};
    int size = 5;
    int target;
    cout<<"Enter the target:  ";
    cin>>target;
    for(int i=0;i<size;i++){
       
        for(int j = i+1 ; j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<","<<j<<endl;
                return 0;
            }
        }
    }
    return 0;
}