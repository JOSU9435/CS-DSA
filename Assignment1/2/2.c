#include<stdio.h>

int is_valid(char s[]){

    int idx=-1;
    int i=0;

    while(s[i]!='\0'){
        if(s[i]=='@'){
            if(idx!=-1){
                idx=-1;
                break;
            }
            idx=i;
        }
        i++;
    }

    if(idx==-1 || idx==0){
        return 0;
    }

    int periodIdx=-1;

    i=idx+1;
    
    while(s[i]!='\0'){
        if(s[i]=='.'){
            if(periodIdx!=-1){
                periodIdx=-1;
                break;
            }
            periodIdx=i;
        }
        i++;
    }

    if(periodIdx==-1){
        return 0;
    }

    if(s[periodIdx+1]=='\0' || periodIdx-1==idx){
        return 0;
    }

    return 1;
}

int main(){

    char s[100];

    scanf("%s",s);

    printf("%s\n",is_valid(s) ? "valid" : "not valid");

    return 0;
}