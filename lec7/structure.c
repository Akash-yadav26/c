// #include <stdio.h>
//  struct student{
//         char name[10];
//         int rollno;
//         float fees;
//     };

// void main(){
//     struct student s1,s2,s3;
//     scanf("%s",&s1.name);
//     scanf("%d",&s1.rollno);
//     scanf("%d",&s1.fees);
//     printf("%s %d %f",s1.name,s1.rollno,s1.fees);

// }
 
 //another 
 #include <stdio.h>
 struct student{
        char name[10];
        int rollno;
        float fees;
    };

void main(){
    // struct student s1,s2,s3;
    // scanf("%s",&s1.name);
    // scanf("%d",&s1.rollno);
    // scanf("%d",&s1.fees);
     struct student s1={"Ram",1,223.0078};
    printf("%s %d %f",s1.name,s1.rollno,s1.fees);;


}