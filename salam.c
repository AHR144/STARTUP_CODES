#include<stdio.h>

// Function declarations
void print_assalamualaikum(char ch);
void print_assalamu_aleikum(char ch);

int main(){
    char ch;

    printf("Enter B for Bangladesh or R for Russia: ");
    scanf(" %c", &ch); // notice space before %c

    // Function calls based on input
    if(ch == 'B'){
        print_assalamualaikum(ch);
    } else if(ch == 'R'){
        print_assalamu_aleikum(ch);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}

// Function Definitions
void print_assalamualaikum(char ch){
    printf("Assalamualaikum from Bangladesh!\n");
}

void print_assalamu_aleikum(char ch){
    printf("Ассаламу алейкум from Russia!\n");
}
