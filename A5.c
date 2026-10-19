#include<stdio.h>
int main()
{
  int a , b ,c; 
 printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)

    
    {
        printf("Triangle is possible\n");
        if(a==b && b==c)        {
            printf("Equilateral triangle");
        }
        else if(a==b || b==c || a==c)
        {
            printf("Isosceles triangle");
        }
        else if((a*a+b*b==c*c )|| (b*b+c*c==a*a) || (a*a+c*c==b*b))
        {
            printf("Right angle triangle");
        }
        
        else
        {
            printf("Scalene triangle");
        }
    }
    else
    {
        printf("Triangle is not possible");
    }
    return 0;
}