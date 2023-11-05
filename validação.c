#include <stdio.h>
int main (){
     
      double a;
      double media=0;
      int i=1;

      while(i<=2)
      {
        scanf("%lf",&a);
        if(a>0 && a<=10)
        {
            media+=a;
            i++;
        }
        else
        {
            printf("nota invalida\n");
        }
      }

      printf("media = %.2lf\n",media/2);



    return 0;
}