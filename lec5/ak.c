#include <stdio.h>
 int main(){
    int n,i,j;
    int arr[10];
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The even numbers in the array:");
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d",arr[i]);
            count += 1;

        }
    }
    if(count ==0){
        printf("Nil");
    }
    printf("\nTotal number even numbers in the array : %d\n",count);
    return 0;
 }
//     int a= 10;
//     int *p = &a;
//     printf("%p",p);
//     return 0;
// }

