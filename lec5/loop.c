// #include <stdio.h>
// int main(){
//    int a,i;
//  char c[] ="NIET";
// for(int i=0;i<=4;i++){
//    for( int j=0;j<=i;j++){
// printf("%c",c[i]);
//    }
//    printf("\n");
// }
// }

// #include <stdio.h>
// int main(){
//    char c[]="NIET";
//    int i,j;
//    for(i=0;i<=4;i++){
//       for(j=0;j<i;j++){
//          printf("%c",c[j]);
//       }
//       printf("\n");
//    }
// }

// number is palendrom;
#include <stdio.h>
int main(){
char ch[]="akash yadav";
char t;
int l,i,j,m,flag=0;
for(i=0;ch[i]!='\0';i++);
l=i-1;
m =l/2;
i=0;
while(i<=m){
   if(ch[i]!=ch[l]){
      flag=1;
      break;
   }
   i++;
   l--;
}
if(flag==1)
   printf("\nstring is not plaindrom");
else
printf("\n");   
}