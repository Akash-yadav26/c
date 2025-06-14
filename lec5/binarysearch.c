// bainary search 
#include <stdio.h>
void binary_search(int a[],int n);
main(){
    int a[]={2,3,4,5,6,7};
    int n;
    scanf("%d",&n);
    binary_search(a,n);
    return 0;
}
void binary_search(int a[],int n){
    int low =0,high= 5;
    int mid,flag=0;
    while(low <= high){
       mid =(low + high)/2;
       if(a[mid]==n){
        printf("found %d",n);
        flag = 1;
        break;
       }
      else{
      if(a[mid]<n)
        low = mid-1;
    
     else
     if(a[mid]>n)
        high = mid +1;
     
    }}
}


// binray search
