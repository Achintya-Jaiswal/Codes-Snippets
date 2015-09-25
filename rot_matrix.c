#include<stdio.h>

main()
 {
  int a[10][10],m,n,r,i,j,k,h,temp;
  system("clear");
  printf("Enter no. of rows and columns\n");
  scanf("%d%d",&m,&n);
  printf("Enter elements\n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  printf("Enter no. of rotations\n");
  scanf("%d",&r);
  printf("\n\nOriginal Matrix:\n\n");
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
      printf("%d\t",a[i][j]);
    printf("\n");
   }
  for(i=0;i<r;i++)
   {
    for(j=0;j<m/2;j++)
     {
      temp=a[j][j];
      for(k=j;k<n-1-j;k++)
       {
        a[j][k]=a[j][k+1];
       }
      for(k=j;k<m-1-j;k++)
       {
        a[k][n-1-j]=a[k+1][n-1-j];
       }
      for(k=n-1-j;k>j;k--)
       {
        a[m-1-j][k]=a[m-1-j][k-1];
       }
      for(k=m-1-j;k>j+1;k--)
       {
        a[k][j]=a[k-1][j];
       }
      a[k][j]=temp;
     }
   } 
  printf("\n\nAfter %d Rotations:\n\n",r);
  for(k=0;k<m;k++)
   {for(h=0;h<n;h++)
      printf("%d\t",a[k][h]);
    printf("\n");
   }
 
 } 
