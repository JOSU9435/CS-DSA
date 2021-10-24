#include<stdio.h>

#define MAX 536870911 // 2^29-1

char arr[MAX+1]={0};

int main(){

    long long int n=MAX;

    for(long long int i=2;i*i<=n;i++){
        if(arr[i]==0){
            for(long long int j=i*i;j<=n;j+=i){
                arr[j]=1;
            }
        }
    }

    for(long long int i=2;i<=n;i++){

        if(arr[i]==0){
            printf("%lld ",i);
        }
    }

    printf("\n");

    return 0;
}