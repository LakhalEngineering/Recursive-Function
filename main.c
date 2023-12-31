#include <stdio.h>

int count =0;

int recursive(int x){
    if (x==0){
        return -1;
    }
    count++;   
    printf("x = %d\n",x);
    recursive(x-1);
    
}

int main(){

    int i;
    i = recursive(10);
    printf("count = %d\n",count);
    printf("Value of i = %d\n",i);
    return 0;
}