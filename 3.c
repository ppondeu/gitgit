#include<stdio.h>

int main(){
    printf(" *** divisible number ***\nEnter a positive number : ");
    int n;
    scanf("%d", &n);
    if(n <= 0){
        printf("%d is OUT of range !!!", n);
        return 0;
    }
    printf("Output ==> ");
    int sum = 0;
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\nTotal ==> %d", count);
    return 0;
}