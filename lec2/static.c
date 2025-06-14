#include <stdio.h>
static int i=10;
void test (int i){
    i++;
    printf("%d",i);
}
int main(){
    test(i);
    test(i);
    test(i);
}
