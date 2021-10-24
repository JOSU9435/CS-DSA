#include<stdio.h>

const int mod=1e9 +7;

int size(char s[]){
    int n=0;

    while(s[n]!='\0'){
        n++;
    }
    return n;
}

int binPow(int a,int b){
    if (b == 0)
    return 1;
    if (b == 1)
    return a;
    int ret = binPow(a,b/2);
    if (b%2 == 0)
    return (ret * ret)%mod;
 
    return ((ret * ret)%mod * a)%mod;
}

int main(){

    char s[50];

    scanf("%s",s);

    int n=size(s);

    int p=0,b=61;
    long long int res=0;

    for(int i=n-1;i>=0;i--){
        long long int temp=binPow(b,p);
        res=(res+(temp*(s[i]-'a'))%mod)%mod;
        p++;
    }

    printf("%d",res);

    return 0;
}