#include<stdio.h>
  int main()
{

  int n;

        printf("Enter a No:");

        scanf("%d ",&n);


        if (n>0)
        {
        printf("%d is positive no.",n);

                if (n%2==0)
                {
                        printf"%d is even no",n);

                                if (n%5==0 && n%7==0)
                                {
                                        printf("%d is divisible by 5& 7",n);
                                        //break;
                                }
                        //      break;
                }
                else
                {
                        printf("%d is Odd  no",n);

                                if (n%5==0 && n%7==0)
                                {
                                        printf("%d is divisible by 5& 7",n);
                          //              break;
                                }
                            //    break;
                }
            }   
    else
        {
        printf("%d is negative  no.",n);

                if (n%2==0)
                {
                        printf("%d is even no",n);

                                if (n%5==0 && n%7==0)
                                {
  //          break;                
                                     printf("%d is divisible by 5& 7",n);
                                }
                                //break;
                }

                else
                {
                        printf("%d is Odd  no",n);
                          
                                if (n%5==0 && n%7==0)
                                {
                                        printf("%d is divisible by 5& 7",n);
                                  //      break;
                                }
         
                }

        }
        
        return 0;
}
                                
                                 
