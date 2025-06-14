//linear search
// #include <stdio.h>
// int main(){
//    int a[] = {3,4,-1,2,0,10};
//     int r ,i,flag=0;
//     printf("enter a number");
//     scanf("%d",&r);
//     for(i=0;i<=6;i++){
//       if(r==a[i]){
//         flag =1;
//         printf("number found! at %d ",(i+1));
//       break;
//     }}
//     if(flag==0){
//         printf("not found");
//     }


// }
//second code
#include <stdio.h>
int main(){
  int a[]={-1,2,3,4,56,78,-4};
int i,r,flag=0;
printf("Enter a number");
scanf("%d",&r);
printf(" number = %d",r);
for(i=0;i<8;i++){
  if(r==a[i]){
    printf("number found! at %d",i+1);
    flag=1;
    break;

  }}
  if(flag=0){
    printf("numberr not found");
  }




}