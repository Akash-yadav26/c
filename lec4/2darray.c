// #include <stdio.h>
// int main(){
//     int a[2][3],i,j;
//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++)
//             scanf("%d",&a[i][j]);
//         }
//         for(i=0;i<2;i++){
//             printf("\n");
//             for(j=0;j<3;j++)
//                 printf("%d ",a[i][j]);
//         }
// }
// matric making
// #include <stdio.h>
// int main(){
//     int a[4][4],i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             scanf("%d",&a[i][j]);
//         }}
//         for(i=0;i<4;i++){
//             printf("\n");
//             for(j=0;j<4;j++){
//               printf("%d ",a[i][j]);
//             }
//         }
    
// }
//using reference point
// #include <stdio.h>
// int main(){
//     int m,n;
//     printf("enter the number of rows :");
//     scanf("%d",&n);
//     printf("enter number of coloumn");
//     scanf("%d",&m);
// int a[n][m],i,j,sum=0;
//  for(i=0;i<n;i++){
//     for(j=0;j<3;j++){
//         scanf("%d",a[i]+j);
//     }}
//     for(i=0;i<m;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d  ",*(a[i]+j));
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=m;j>=0;j--){
//          if((i+j)==2){
//             sum += *(a[i]+j);
//          }
//         }
//     }
//     printf("sum of diagonal element = %d",sum);

// }

// diagaonal sum 
// #include <stdio.h>
// int main(){
//   int m,n,sum=0;
//   printf("enter number of rows : ");
//   scanf("%d",&m);
//   printf(" enter number of coloumn :");
//   scanf("%d",&n);
//   int a[m][n],i,j,sum;
//   for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&a[i][j]);
//     }}
//     for(i=0;i<m;i++){
//         printf("\n");
//         for(j=0;j<n;j++){
//          printf("%d  ",a[i][j]);
//         }
//     } 
//     for(i=0;i<m;i++){
//         for(j=n;j>=0;j--){
//             sum += a[i][j];
//             printf("sum of diagonal elemnt is = %d",sum);

//         }
//     }
// }

// #include <stdio.h>
// int main(){
// int m,n;
// printf("enter number of rows : ");
// scanf("%d",&m);
// printf("Enter  number coloumn : ");
// scanf("%d",&n);
// int a[m][n],i,j,b[m][n];
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&a[i][j]);
//     }}
//     for(i=0;i<m;i++){
//         printf("\n");
//         for(j=0;j<n;j++){
//         printf("%d ",a[i][j]);
//         }
//     }
//     printf("\nTranposed matric\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             b[i][j] = a[j][i];

//         }}
//         for(i=0;i<m;i++){
//             printf("\n");
//             for(j=0;j<n;j++){
//                 printf("%d ",b[i][j]);
//             }
//         }
    
// }

// sum of two matric
// #include <stdio.h>
// int main(){
// int m,n;
// printf("enter number of rows : ");
// scanf("%d",&m);
// printf("Enter  number coloumn : ");
// scanf("%d",&n);
// int a[m][n],i,j,b[m][n],c[m][n];
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&a[i][j]);
//     }}
//     for(i=0;i<m;i++){
//         printf("\n");
//         for(j=0;j<n;j++){
//         printf("%d ",a[i][j]);
//         }
//     }
//     printf("\n");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//          scanf("%d",&b[i][j]);

//         }}
//         for(i=0;i<m;i++){
//             printf("\n");
//             for(j=0;j<n;j++){
//                 printf("%d ",b[i][j]);
//             }}
//             printf("\n");
//             for(i=0;i<m;i++){
//              for(j=0;j<n;j++){
//              c[i][j]= a[i][j] + b[i][j];
//                 }
//             }

//              for(i=0;i<m;i++){
//                 printf("\n");
//                 for(j=0;j<n;j++){
//                printf("%d ",c[i][j]);
//               }
//              }    
// }

//multiplication 
// #include <stdio.h>
// int main(){
// int m,n,p;
// printf("enter number of rows matrix A : ");
// scanf("%d",&m);
// printf("Enter  number coloumn for matrix A : ");
// scanf("%d",&n);
// printf("Enter number of columns for matrix B: ");
// scanf("%d",&p);
// int a[m][n],i,j,b[n][p],c[m][p],k;

// printf("Enter elements for matrix A:\n");
// for(i=0;i<m;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&a[i][j]);
//     }}
//     for(i=0;i<m;i++){
//         printf("\n");
//         for(j=0;j<n;j++){
//         printf("%d ",a[i][j]);
//         }
//     }
//     printf("\n");
//     printf("Enter elements for matrix B:\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<p;j++){
//          scanf("%d",&b[i][j]);

//         }}
//         for(i=0;i<m;i++){
//             printf("\n");
//             for(j=0;j<n;j++){
//                 printf("%d ",b[i][j]);
//             }}
//             printf("\n");
//             for(i=0;i<m;i++){
//                 for(j=0;j<p;j++){
//                     c[i][j]=0;
//                 }
//             }
//             for(i=0;i<m;i++){
//                 for(j=0;j<p;j++){
//                     for(k=0;k<n;k++){
//                    c[i][j] += a[i][k] * b[k][j];
//                  }}}
//             for(i=0;i<m;i++){
//                 printf("\n");
//                 for(j=0;j<p;j++){
//                     printf("%d ",c[i][j]);
//                     }
//                     printf("\n");
//                     }
            
// }

