#include<stdio.h>
void LinearSearch(int arr[],int n,int target){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element Found at index %d",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found");
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    LinearSearch(arr,size,40);
    return 0;
}