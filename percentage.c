#include<stdio.h>
int main (){
float physics,chemistry,english,hindi,math;
printf("enter physics");
scanf("%f",&physics);
printf("enter chemistry");
scanf("%f",&chemistry);
printf("enter english");
scanf("%f",&english);
printf("enter hindi");
scanf("%f",&hindi);
printf("enter math");
scanf("%f",&math);
float p = (physics+chemistry+english+hindi+math)/5;
printf("your percentege%f",p);
    return 0;
}