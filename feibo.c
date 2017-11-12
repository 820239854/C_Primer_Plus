#include<stdio.h>
int main() {   int x1 = 0;   int x2 = 1;   int i = 0;   printf("%i",x1);   printf(" %i",x2);   while (i<4){       if(x1 > x2){           x2 = x1 + x2;           printf(" %i",x2);       }else{           x1 = x1 + x2;           printf(" %i",x1);       }       i++;   }}


