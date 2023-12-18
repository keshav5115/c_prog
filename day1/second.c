#include<stdio.h>
void swap(int i, int j){
    
    int temp;
    temp = j;
    j=i;
    i=temp;
    printf("swapping %d and %d\n", i, j);
}
int main(){
    swap(22,45);
    return 0;

}
