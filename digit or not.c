#include<stdio.h>
#include<math.h>

int main(){
    int x;

    printf("enter a number :");
    scanf("%d",&x);

    if(x>0 && x<9){
        printf("it's a digit\n");
    }else{
        printf("it's a not digit\n");
    }
  

    return 0;

}