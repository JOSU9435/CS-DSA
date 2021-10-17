#include<stdio.h>
#include<string.h>

char sym[7][2]={"M\0","D\0","C\0","L\0","X\0","V\0","I\0"};
int a[]={1000,500,100,50,10,5,1};

void dec_to_roman(int n,char roman[]){
    
    for(int i=0;i<7;i+=2){
        int temp=n/a[i];
        n=n%a[i];
        if(temp==0){
            continue;
        }
        if(!i && temp>3){
            continue;
        }
        if(temp>=5){
            if(temp==9){
                strcat(roman,sym[i-2]);
                strcat(roman,sym[i]);
                continue;
            }
            strcat(roman,sym[i-1]);
            temp-=5;
        }else{
            if(temp==4){
                strcat(roman,sym[i]);
                strcat(roman,sym[i-1]);
                continue;
            }
        }

        while(temp--){
            strcat(roman,sym[i]);
        }
    }
}

void dec_to_unary(int n,char unary[]){
    char x[]="I";
    while(n--){
        strcat(unary,x);
    }
}

int dec_to_binary(int n){

    int ans=0;
    int temp=1;

    while(n>0){
        int rem=n%2;
        ans=ans+rem*temp;
        temp*=10;
        n=n/2;
    }   
    return ans;
}

int main(){

    int a,b;

    scanf("%d %d",&a,&b);
    int hindu,binary,choice;

    printf("enter 0 to add \nenter 1 to multiply \n");

    scanf("%d",&choice);
    
    char roman[100000]="",unary[100000]="";

    if(choice){
        hindu=a*b;
        binary=dec_to_binary(hindu);
        dec_to_unary(hindu,unary);
        dec_to_roman(hindu,roman);
    }else{
        hindu=a+b;
        binary=dec_to_binary(hindu);
        dec_to_unary(hindu,unary);
        dec_to_roman(hindu,roman);
    }

    printf("in hindu/arabic system :%d \n",hindu);
    printf("in binary system :%d \n",binary);
    printf("in unary system :%s \n",unary);
    printf("in roman system :%s \n",roman);

    return 0;
}