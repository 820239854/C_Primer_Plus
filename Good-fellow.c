#include<stdio.h>
void jolly(void);
void deny(void);
int main(void){
    jolly();
    deny();
    return 0;
}

void jolly(void){
    int i=0;
    for( ;i<3; i++){
                printf("For he's a jolly good fellow!\n");
    }
}
void deny(void){
    printf("Which nobody can deny!");
}
