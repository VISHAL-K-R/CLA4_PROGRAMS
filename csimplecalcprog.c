#include <stdio.h>
#include <conio.h>
#include <math.h>
int add(a,b){
    printf("SUM = %d",a+b);
}
int sub(a,b){
    printf("DIFFERENCE = %d",a-b);
}
int mul(a,b){
    printf("PRODUCT = %d",a*b);
}
int div(a,b){
    printf("QUOTIENT = %d \t REMINDER =%d",a/b,a%b);
}
int exp0(a,b){
    int res;
    res=pow(a,b);
    printf("EXPONENTIAL VALUE = %d",res);
}
int main(){
    printf("\t\t\t   SIMPLE CALCULATOR   \t\t\t");
    int A,B,op;
    printf("\n ENTER NUMBER A:");
    scanf("%d",&A);
    printf("\n ENTER NUMBER B:");
    scanf("%d",&B);
    printf("\n ENTER YOUR ARITHMETIC OPERATION:");
    printf("\n 1.ADDITION");
    printf("\n 2.SUBTRACTION");
    printf("\n 3.MULTIPLICATION");
    printf("\n 4.DIVISION");
    printf("\n 5.EXPONENTIAL VALUE OF A");
    scanf("%d",&op);
    switch(op){
        case 1:
            add(A,B);
            break;
        case 2:
            sub(A,B);
            break;
        case 3:
            mul(A,B);
            break;
        case 4:
            div(A,B);
            break;
        case 5:
            exp0(A,B);
            break;
    }
    return 0;}
