#include<stdio.h>
int one_three();
int two();
int main()
{
printf("starting now:\n");
one_three();
printf("done!");
}

int one_three(){
printf("one\n");
two();
printf("three\n");
}

int two(){
printf("two\n");
}
