#include<stdio.h>

int main(){

    long long int n;
    
    scanf("%lld",&n);

    long long int a=1,b=1,c;

    for(long long int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }

    printf("fibonacci of %lld : %lld",n,c);

    return 0;
}