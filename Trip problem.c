#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,sum,avg,j,k,l;
    printf("\n Enter the 1st person amount in dollar = ");
    scanf("%d",&a);
    printf("\n Enter the 1st persons amount in cent  = ");
    scanf("%d",&b);
    printf("\n Enter the 3nd persons amount in dollar= ");
    scanf("%d",&c);
    printf("\n Enter the 3nd persons amount in cent  = ");
    scanf("%d",&d);
    printf("\n Enter the 3rd persons amount in dollar= ");
    scanf("%d",&e);
    printf("\n Enter the 3rd persons amount in cent  = ");
    scanf("%d",&f);
            
                     g=a*100+b;
                     h=c*100+d;
                     i=e*100+f;
                 
     printf("\n**************************************************");
                     printf("\n  The 1rd persons amount %d ",g);
                     printf("\n  The 2rd persons amount %d ",h);
                     printf("\n  The 3rd persons amount %d ",i);

         sum=g+h+i;
     printf("\n**************************************************");
           printf("\n Total amount They spent =%d cents",sum);
         avg=sum/3;

           printf("\n Average amount          =%d cents",avg);

          j=(g-avg)/100;
          k=(h-avg)/100;
          l=(i-avg)/100;


     printf("\n**************************************************");
     printf("\n The dollar in negative value means he/she will have to pay the amount to others");
             printf("\n Final amount of 1st person's in dollar = $%d ",j);
             printf("\n Final amount of 2nd person's in dollar = $%d ",k);
             printf("\n Final amount of 3rd person's in dollar = $%d ",l);


    return 0;
}