/*#include <stdio.h>
#include <math.h>
main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   if((x*log(y))==(y*log(x)))
      printf("=\n");
   else if((x*log(y))<(y*log(x)))
      printf(">\n");
   else
      printf("<\n");
}
*/
#include <stdio.h>
#include <math.h>
main()
{
   int x,y;
   double a;
   scanf("%d %d",&x,&y);
   a=y*log(x)-x*log(y);
   if(a==0)
      printf("=\n");
   else if(a<0)
      printf("<\n");
   else
      printf(">\n");
}
