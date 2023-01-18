#include <stdio.h>
#include <stdlib.h>
int limit = 100;

int squareOfSum(int n){
    int sum1=(n*(n+1)*(2*n+1))/6;
    return sum1;
}
int sumOfSquares(int n){
    int sum2=(n*(n+1))/2;
    return sum2*sum2;
}
void main(){
    printf("%d",(abs(squareOfSum(limit)-sumOfSquares(limit))));
}
