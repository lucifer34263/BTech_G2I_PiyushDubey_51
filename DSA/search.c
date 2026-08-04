#include<stdio.h>

int search(int arr[],int size,int target){
    
    for(int i=0;i<size;i++){
        if(arr[i]==target){
        return i;
        }else{
            return 0;
        }
    }
}

int main(){
    int arr[4]={4,1,7,8};
    int size=4;
    int result;

    int target;
    printf("Enter the target value:  ");
    scanf("%d" ,&target);

    search(arr,size,target);

   
    return 0;
}