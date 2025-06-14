// #include <stdio.h>
// int main(){
//     int a= 10;
//     int *b =&a;
//     printf("%d\n",a);
//     printf("%d",b);
// }

// }
//single pointer

// #include <stdio.h>
// void main(){
//     int a=10;
//     int b = &a;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",&b);
//     printf("%d\n",&a);
//     printf("%d\n",*(&a));
//     printf("%d\n",(&b));


// }

// swaping numbers
// #include <stdio.h>
// int main(){
//     int a=5,b=10;
//     swap(&a,&b);
//     printf(" a= %d\n",a);
//     printf("b= %d",b);

// }
// void swap(int*a,int*b){
//     *a = *a * *b;
//     *b = *a / *b;
//     *a = *a / *b;

// }






// #include <stdio.h>
// void main(){
//     void *v;
//     int a=10;
//     v= &a;
//     char c ='A';
//  int *i =(int*)v;
//     printf("%d\n",*i);
//     printf("%d\n",*(int*)v);
//     v=&c;
//     printf("%c\n",*(char*)v);
// }

//
#include <stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    //scanf("%d",(a+i));
    for(i=0;i<10;i++){
        printf("%d",a[i]);
        //or
     //printf("%d",*(a+i));   
    }
    
}