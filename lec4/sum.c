#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int sum=0,i;
    for(i=0;i<5;i++){
        sum += a[i];
    }
    printf("%d is total sum",sum);

}