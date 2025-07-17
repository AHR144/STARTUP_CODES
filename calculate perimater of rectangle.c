#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    printf("enter length:");
    scanf("%d",&x);

    printf("enter width:");
    scanf("%d",&y);

    int p;
    p=2*(x+y);

    printf("perimeter is :%d\n",p);

    return 0;
}