//string
// string end with \0 --> null or end with -->  NULL
// #include <stdio.h>
// int main(){
//     char arr[10];
//     int i;
//     for(i=0;i<10;i++){
//         scanf(" %c", &arr[i]);// white space
//     }
//     for(i=0;i<10;i++){
//         printf("%c ",arr[i]);
//     }
//     return 0;
//}

//second method --> no space giv if you give spaCE THan it default end the program
// #include <stdio.h>
//  int main(){
//     char c[10];
//     scanf("%s",c);
//     printf("\nstring is\n%s",c);

// }

//get
// #include <stdio.h>
// #include "string.h"
//  int main(){
//  char c[10];
//  gets(c);
//  puts("string is");
//  puts(c);
//  return 0;
// }

//string length using pointer

// #include <stdio.h>
// int main(){
//     char *p;
//     int i,ctr=0;
//     gets(p);
//     for(i=0;p[i] != '\0';i++){
//         printf("%d",ctr);
//        ctr++;
//     }
// }

//reverse a string
// #include <stdio.h>
// #include "string.h"
// int main(){
//     char p[100];
//     int i,ctr=0;
//     char c[100];
//     gets(p);
//     for(i=0;p[i] != '\0';i++){
//         printf("%d",ctr);
//        ctr++;
//     }
//      for( int j= ctr-1; j>=0;j++){
//         c[i] = p[j];
//         i++;
//         }
//         puts(c);
// }

// #include <stdio.h> // 
// int main(){
//     char ch[] ="Hello";
//     char[]
// }

// reverse stirng in differnet string

// #include <stdio.h>
// void main(){
// char c[]= "NIET";
// char t[100];
// //reverse the string
// int l=0,i,j;
// for(i=0;c[i] != '\0';i++);
// l=i;// now length stored in l which is string length of i that --> is --> 4
// i=0;//so that it can usable in later with t
// for(j=l-1;j>=0;j--){
// t[i] =c[j];// i is initilization to 0  so that t can set index 
// i++;
// }
// t[l]='\0';
// puts(t);
// }

// string reverse to in different string
#include<stdio.h>
#include "string.h"
void main(){
char ch[] ="akash yadav";
char t;
int l,i,j,m;
for(i=0;ch[i]!='\0';i++);
    l=i-1;
    m=l/2;
    i=0;
    while(i<=m){
        t=ch[i];
        ch[i]=ch[l];
        ch[l]=t;
        i++;
        i--;
    } 
    puts(ch);
}
