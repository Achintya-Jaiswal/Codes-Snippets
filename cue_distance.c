//Cues distance

#include<stdio.h>
#include<math.h>

main()
 {
  system("clear");
  float l,b,r,x,y,flag=1,dist=0;
  scanf("%f%f%f%f",&l,&b,&r,&x);
  y=r;
  do
   {
    if((y+r)==b)
      flag=0;
    else
     {
      if((x+r)==l)
       {
        if((b-y-r)<(l-1))
         {
          dist+=(sqrt(2)*(b-y-r));
          y=b-r;
         }
        else 
         {
          dist+=(sqrt(2)*(l-r-r));
          x=r;
          y+=(l-r-r);
         }
       }
      else if(x==r)
       {
        if(b-y-r<(l-1))
         {
          dist+=(sqrt(2)*(b-y-r));
          y=b-r;
         }
        else
         {
          dist+=(sqrt(2)*(l-r-r));
          x=l-r;
          y+=(l-r-r);
         }
       }
      else
       {
        if((l-x-r)<(b-1))
         {
          dist+=(sqrt(2)*(b-y-r));
          y=b-r;
         }
        else
         {
          dist+=(sqrt(2)*(l-r-r));
          x=l-r;
          y+=(l-r-r);
         }
       }
     }
   }while(flag);
  printf("%.3f",dist);
 }

