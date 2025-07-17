#include<stdio.h>

void calculateprice(float value);

int main(){
float value;
printf("enter item value:");
scanf("%f",&value);

calculateprice(value);

return 0;
}
void calculateprice(float value){
    value = value + (0.18*value);
    printf("total value is :%f\n",value);
}