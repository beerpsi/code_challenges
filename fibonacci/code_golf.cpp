#include <stdio.h>

int main(){
    long double next_number, last_number = 0, curr_number = 1;
    printf("%-5.0Lf\n", last_number);
    printf("%-5.0Lf\n", curr_number); 
    for (int i = 0; i < 98; i++){
        next_number = last_number + curr_number;
        printf("%-5.0Lf\n", next_number);
        last_number = curr_number;
        curr_number = next_number;
    }
} 
