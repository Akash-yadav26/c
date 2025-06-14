//bubble short
#include <stdio.h>
int main(){
    int a[]={-1,2,-12,12,10,7,6};
    int i,j,temp;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
            printf("%d ",a[j]);
        }
        printf("\n");

    }
    for(i=0;i<7;i++){
        printf("%d\t",a[i]);
    }
}
// 
