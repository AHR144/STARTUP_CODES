#include<stdio.h>

void printTable(int a);

int main(){
int a;

printf("enter a number :");
scanf("%d",&a);

printTable(a);

}

void printTable(int a){
for(int i=1;i<a;i++){

     printf("%d x %d = %d\n", a, i, a * i);
}
}