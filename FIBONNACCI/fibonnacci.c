#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add(char a[],char b[],char res[]){
    strrev(a);
    strrev(b);

    int flag1=1,flag2=1;

    int carry=0;
    int i=0;
    strcpy(res,"");

    while(a[i]!='\0' && b[i]!='\0'){
        int temp=(a[i]-'0')+(b[i]-'0')+carry;
        carry=temp/10;
        res[i]=temp%10 + '0';
        i++;
    }

    while(a[i]!='\0'){
        int temp=(a[i]-'0')+carry;
        carry=temp/10;
        res[i]=temp%10 + '0';
        i++;
    }
    while(b[i]!='\0'){
        int temp=(b[i]-'0')+carry;
        carry=temp/10;
        res[i]=temp%10 + '0';
        i++;
    }
    if(carry){
        res[i]=carry+'0';
    }
    strrev(res);
    strrev(a);
    strrev(b);
}

int main(){

    int n;  
    scanf("%d",&n);

    char a[100000]="0",b[100000]="1",c[100000]="0";

    for(int i=0;i<n-1;i++){
        add(a,b,c);
        strcpy(a,b);
        strcpy(b,c);
    }

    printf("fibonacci of : %s\n",c);

    return 0;
}