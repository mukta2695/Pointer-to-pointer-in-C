#include<stdio.h>

int main(){
    printf("We are going to get the value of a variable using pointer to a pointer\n");
    printf("Let the value be 26\n");
    int i=26;
    int *i_ptr;
    int **ptr_to_ptr;
    i_ptr=&i;
    ptr_to_ptr=&i_ptr;
    printf("Value of variable using pointer to a pointer is: %d", **ptr_to_ptr);
    return 0;
}