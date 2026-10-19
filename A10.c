#include <stdio.h>

int main() {
    int x,y, z;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && y>z)
    {
        printf(" strictly decreasing order");

    }
    else if(x<y && y<z)
    {
        printf(" strictly increasing order");


    }
    else {
        printf(" neither strictly increasing nor strictly decreasing order");
    
    
     if(x==y ||y==z || x==z)
    {
        printf(" some numbers are equal");
        //printf("")
    }
    else
    {
        printf(" all numbers are distinct");
    }
    }

    
    
    return 0;
}
