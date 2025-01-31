#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int i=1;
    while(i<=a) {
        if(a%i==0) {
            if(a==i){
                printf("%d", i);
            }else {
                printf("%d ", i);
            }
        }
        ++i;
    }
    printf("\n");
}