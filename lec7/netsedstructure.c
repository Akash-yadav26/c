#include <stdio.h>
int main(){
    struct city{
    char d[10];
    int pincode;
};
struct Address{
    char Name[10];
    struct city c;
};
    struct Address a;
    scanf("%s %s %d",&a.Name,&a.c.d,&a.c.pincode);
    printf("%s %s %d",a.Name,a.c.d,a.c.pincode);
}

