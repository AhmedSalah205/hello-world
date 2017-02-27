#include <stdio.h>




int main(void)
{
    int x=25;
    int y=52;
    int temp;
    
    printf("x is %d\n",x);
    printf("y is %d\n",y);
    
    /*swpping*/
    temp=x;
    x=y;
    y=temp;
    
    printf("x is %d\n",x);
    printf("y is %d\n",y);

    

}