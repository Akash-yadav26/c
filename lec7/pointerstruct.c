// #include <stdio.h>
// struct teacher{
//     char name[10];
//     int Empid;
//     float salary;

// };
// int main(){
//     struct teacher *t2;
//     struct teacher t1={"akash",1234,150000};
//      t2 = &t1;
//     printf("%s %d %f",t2->name,t2->Empid,t2->salary);
//}
/// to print using pointer use ->


// call by value 
// #include <stdio.h>
// struct book{
//     char name[20];
//     int ISBN;
// };
// void display(struct book b);
// void main(){
//     struct book b= {"Let usc",1234};
//     display(b);
// }
// void display(struct book b1){
//     printf("%s %d",b1.name,b1.ISBN);
// }

// call by refernece
// #include "stdio.h"
// struct teacher{
//     char N[10];
//     int Empid;
// };
// void display(struct teacher *b);
// void main(){
//     struct teacher t1;
//     display(&t1);
//     printf("%s",t1.N);
//     printf("%d",t1.Empid);
    

// }
// void display(struct teacher *p){
//  char N[10] = {'a','b','c'};
// //p->N="sarika";
// p->Empid=90;
// scanf("%s",p->N);
//     scanf("%d",&p->Empid);// =1;
// }

// call by refernece
#include "stdio.h"
struct teacher{
    char N[10];
    int Empid;
};
void display(struct teacher *b);
void main(){
    struct teacher t1;
    display(&t1);
    printf("%s",t1.N);
    printf("%d",t1.Empid);
    

}
void display(struct teacher *p){
 char N[10] = {'a','b','c'};
//p->N="sarika";
p->Empid=90;
scanf("%s",p->N);
    scanf("%d",&p->Empid);// =1;
}
