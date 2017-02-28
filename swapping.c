#include <stdio.h>


void swap(int* a,int* b)
{
    int temp=*a;
    
    *a=*b;
    *b=temp;
}

int main(void)
{
    int x=25;
    int y=52;
    
    printf("x is %d\n",x);
    printf("y is %d\n",y);
    
    /*swpping*/
    swap(&x,&y); 
    
    printf("x is %d\n",x);
    printf("y is %d\n",y);

    

}