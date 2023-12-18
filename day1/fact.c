#include <stdio.h>
int factorial(int num){
    int output = 1;
    for (int i = 1;i <= num;i++){
        output = output*i;
    }
    return output;
}
void main(){
    int x=5;
    printf("The factorial of %d is %d ",x,factorial(x));    
}