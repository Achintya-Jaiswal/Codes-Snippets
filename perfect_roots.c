//perfect roots

#include<stdio.h>
#include<math.h>

main()
 {
  system("clear");
  int cases,n,i,k,x;
  float min,max,div,j;
  scanf("%d",&cases);
  for(x=1;x<=cases;x++)
   {
    scanf("%d%f%f",&n,&min,&max);
    i=ceil(min);
    div=1/(float)n;
    j=pow(i,div);
    k=floor(j);
    while((j-(float)k)>0)
     {
      i+=1;
      j=pow(i,div);
      k=floor(j);
     }
    for(i=pow(i,div);(pow(i,n))<=max;i++)
      printf("%d\t",i);
    printf("\n");
   }
 }
