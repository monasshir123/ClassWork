#include <stdio.h>

int main() {
    int x ,y,z;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    x>y ? y>z ? printf("%d is the largest no ",x):z>x ? printf("%d is the larges no ",z): printf("%d",z):y>z ? printf("%d is the largest no ",y): printf("%d is the largest no ",z);
    
    //    x>y ? y>z ? printf("%d is the largest no",x): z>x ? printf("%d is the largest no",z): printf("%d is the largest no",x) ;y>z ? 
    return 0;
}
