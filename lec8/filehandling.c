//r+--> first operation is read then write
// w+ --> first operation is write then read
//a+--> first operation is append then write or read
#include "stdio.h"
main(){
    FILE *fp =fopen("ak.txt","w");
    FILE *f,*fp2;
    char ch;
   f= fopen("C:/Users/AKASH/OneDrive/Desktop/txt/akash.txt","w");
     while(1){
        char c=getchar();
       if(c!='S'){
         putc(c,f);
       }
        else
        break;
     }
     fclose(f);
     return 0;
   

   // read 
    fp2=fopen("C:/Users/AKASH/OneDrive/Desktop/txt/akash.txt","r");
    while(ch != EOF){
     ch=getc(fp2);
      printf("%c",ch);

    }
    fclose(fp2);
    return 0;
}


