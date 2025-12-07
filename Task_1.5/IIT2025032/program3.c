#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("Number | Square | Cube");
    printf("\n--------------------------\n");
    for(int i=1;i<=n; i++){
        printf("%d | %d | %d\n", i, i*i,i*i*i);
    }

}