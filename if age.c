#include<stdio.h>

int main(){
    int age;

    printf("enter age :");
    scanf("%d",&age);

    if(age >=18 ){
printf("adult,you can vote & you can drive");
    }
    else if(age>13 && age<18 ){
        printf("teenager");
    }
    else{
        printf("child");
    }
}