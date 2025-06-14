// #include <stdio.h>
// #define sum(x) x+x 
// main(){
//     int a=64,s;
//     s = a/sum(4);
//     printf("%d",s);
// }

// multiplication
// #include <stdio.h>
// #define sum(x) x*x
// int main(){
//     int a,b=64;
//     a= b/sum(4);
//     printf("%d",a);
// }

//multi line code 
#include <stdio.h>
#define s(x,y) { s1= (x*y);\
 printf("%d\n",s1);\
                } // next line after \ nahi to error ayega
void main(){
    int s1=0;
    s(90,59);
    }
    



// #include <stdio.h> 
// int sum(x,y)
// {
//     int s;
//     s= x+y;
//     return s;
// }  
// int main(){
    
//     int a;
//     a= sum(45,32);
//     printf("%d",a);
// }