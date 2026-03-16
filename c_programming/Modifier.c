#include<stdio.h>

int main()
{
    int i=10;
    short int j=20;
    long int k=30;

    printf("size of interger is : %lu\n",sizeof(i));   //4
    printf("size of short interger is : %lu\n",sizeof(j));   //2
    printf("size of long interger is : %lu\n",sizeof(k));    //8

        return 0;

}