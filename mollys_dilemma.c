//Mollys Dilemma

#include<stdio.h>

main()
 {
  system("clear");
  int cases,i,flag=1,j,l,b,x,y,tiles=0;
  scanf("%d",&cases);
  for(i=0;i<cases;i++)
   {
    scanf("%d%d",&l,&b);
    flag=1;tiles=0;
    while(flag) 
   {x=(l<=b)?l:b;
    y=(l>=b)?l:b;
    j=x;
    while(j<=y)
     {
      tiles++;
      j+=x;
     }
    j=(j>y)?j-x:j;
    if(j==y) 
     {
      flag=0;
     }
    else
     {
      if(l<b)
        b=b-j;
      else
        l=l-j;
     }
   }
    printf("\n\n%d\n\n",tiles);
   }
 } 
