//Bellban Bee Hops

#include<stdio.h>

int check(int,int,int,int);

main()
 {
  system("clear");
  int x1,x2,y1,y2,hops,flag=0;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  while(flag==0)
   {
    if((x1>x2)&&(y1>y2))
     {
      x1-=1;
      y1-=1;
      flag=check(x1,x2,y1,y2);
     }
    else if((x1<x2)&&(y1<y2))
     {
      x1+=1;
      y1+=1;
      flag=check(x1,x2,y1,y2);
     }
    else if((x1>x2)&&(y1<y2))
     {
      x1-=1;      
      flag=check(x1,x2,y1,y2);
     }
    else if((x1<x2)&&(y1>y2))
     {
      y1-=1;
      flag=check(x1,x2,y1,y2);
     }
    else if(x1==x2)
     {
      y1=(y1<y2)?y1+1:y1-1;
      flag=check(x1,x2,y1,y2);
     }
    else
     {
      x1=(x1<x2)?x1+1:x1-1;
      flag=check(x1,x2,y1,y2);
     }
   }
  printf("%d",hops);
 }

int check(int a,int b,int c,int d)
 {
  return ((a==c)&&(b==d));
 }
