#include<stdio.h>

int is_valid(char s[]){

    int idx=-1;
    int check=0;
    int i=0;

    while(s[i]!='\0'){
        if(s[i]=='.'){
            if(idx!=-1){
                idx=-1;
                break;
            }
            idx=i;
        }else if(s[i]<'0' || s[i]>'9'){
            idx=-1;
            break;
        }
        i++;
    }
    if(idx!=-1){
        if(s[idx+1]!='\0'){
            return 1;
        }
    }

    return 0;
}

int main(){

    char s[100];

    scanf("%s",s);

    printf("%s \n",is_valid(s)? "valid" : "not valid" );

    return 0;
}