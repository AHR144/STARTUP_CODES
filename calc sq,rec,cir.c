#include<stdio.h>
#include<math.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a,float b);

int main(){
    float side,rad,a=2.00,b=7.00;
    printf("enter side : ");
    scanf("%f",&side);

    
    printf("enter rad : ");
    scanf("%f",&rad);

   // Store returned area values
     float s_area = squarearea(side);
    float c_area = circlearea(rad);
    float r_area = rectanglearea(a, b);

    // Print areas
    printf("Square area = %f\n", s_area);
    printf("Circle area = %f\n", c_area);
    printf("Rectangle area = %f\n", r_area);


    return 0;
}
float squarearea(float side){
    return side*side;
}
float circlearea(float rad){
return 3.1416*(pow(rad,2));
}
float rectanglearea(float a,float b){
    return a*b;
}