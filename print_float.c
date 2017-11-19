#include<stdio.h>
int main(void){
    float i;
    printf("please enter a float number\n");
    scanf("%f", &i);
    printf("fixed-point notation: %f\n", i);
    printf("exponential notation: %e\n", i);
    printf("p notation: %a\n", i);
}
