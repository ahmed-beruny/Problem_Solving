#include<stdio.h>


int main(){
    long long int a[1000];

    for(int i = 0;i<10;i++){
        scanf("%lld",&a[i]);
    }

    for(int i = 0;i<10;i++){
        printf("%lld ",a[i]);
    }

    return 0;
}