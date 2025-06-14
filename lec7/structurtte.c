#include <stdio.h>
struct book{
    char N[10];
    int ISBN;
};
 void main(){
    int i;
    struct book b[10];
    for(i=0;i<10;i++){
        scanf("%s %d",b[i].N,&b[i].ISBN);
        for(i=0;i<10;i++){
            printf("%s %d",b[i].N,b[i].ISBN);
        }
    }
}