#include<stdio.h>

int main(){

    int n,m;

    scanf("%d %d",&n,&m);

    int oneD[n*m];
    int twoD[n][m];

    for(int i=0;i<n*m;i++){
        scanf("%d",&oneD[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            twoD[i][j]=oneD[m*i+j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",twoD[i][j]);
        }
        printf("\n");
    }

    return 0;
}