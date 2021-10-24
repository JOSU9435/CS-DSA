#include "lib_mylib.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InsertItemAtLast(int A[], int n, int key){

    n++;
    A=(int* )realloc(A,n*sizeof(int));
    A[n-1]=key;

    return ;
}

void InsertItemAtFirst(int A[], int n, int key){

    n++;
    A=(int*)realloc(A,n*sizeof(int));

    for(int i=n-1;i>0;i--){
        A[i]=A[i-1];
    }

    A[0]=key;
    return;
}

void InsertItemAtIndex(int A[], int n, int i, int key){

    n++;

    A=(int*)realloc(A,n*sizeof(int));

    for(int j=n-1;j>i;j--){
        A[j]=A[j-1];
    }

    A[i]=key;

    return;
}

void DeleteItemFromLast(int A[], int n, int key){
    if(n==0){
        return;
    }
    n--;
    A[n]=-1;
    A=(int* )realloc(A,n*sizeof(int));
    return ;
}

void DeleteItemfromFirst(int A[], int n, int key){

    if(n==0){
        return;
    }

    n--;
    for(int i=0;i<n;i++){
        A[i]=A[i+1];
    }
    A=(int* )realloc(A,n*sizeof(int));
    return;
}

void DeleteItemFromIndex(int A[], int n, int i, int key){

    if(n==0){
        return;
    }

    n--;

    for(int j=i;i<n;i++){
        A[j]=A[j+1];
    }

    A=(int*)realloc(A,n*sizeof(int));
    return;
}

int FindItemUnsorted(int A[], int n, int key){

    for(int i=0;i<n;i++){
        if(A[i]==key){
            return i;
        }
    }

    return -1;
}

int FindItemSorted(int A[], int n, int key){

    int l=0,r=n-1;

    while(l<=n){
        int mid=(l+r)/2;

        if(A[mid]==key){
            return mid;
        }else if(A[mid]>key){
            r=mid-1;  
        }else{
            l=mid+1;
        }
    }

    return -1;
}

void SortArray(int A[], int n){

    for(int i=0;i<n;i++){
        int temp=i;
        for(int j=i+1;j<n;j++){
            if(A[temp]>A[j]){
                temp=j;
            }
        }
        int x=A[temp];
        A[temp]=A[i];
        A[i]=x;
    }

    return;
}

int* ExtractSubest(int A[], int n, int i, int j){
    
    int newSize=j-i+1;

    int* newArray=(int*)malloc(newSize*sizeof(int));

    int p=0;

    for(int k=0;k<n;k++){

        if(k>=i && k<=j){
            newArray[p]=A[k];
            p++;
        }
    }
    return newArray;
}

void DeleteSubset(int A[], int n, int i, int j){

    int newSize=n-(i-j+1);

    for(int k=i;k<newSize;k++){
        A[k]=A[k+(j-i+1)];
    }
    A=(int*)realloc(A,newSize*sizeof(int));
    return;
}

void SplitIntoTwoArray(int A[], int B[], int n){

    int temp=n/2;

    B=(int*)malloc((n-temp)*sizeof(int));

    for(int i=temp;i<n;i++){
        B[i-temp]=A[temp];
    }

    A=(int*)realloc(A,temp*sizeof(int));

    return;
}

int* CloneArray(int A[], int n, int B[]){

    B=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        B[i]=A[i];
    }

    return B;
}

void ShiftLeftArray(int A[], int n, int r){

    for(int i=0;i<n-r;i++){
        A[i]=A[i+r];
    }

    for(int i=n-r;i<n;i++){
        A[i]=0;
    }

    return;
}

void ShiftRightArray(int A[], int n, int r){

    for(int i=n-1;i>=r;i--){
        A[i]=A[i-r];
    }
    for(int i=0;i<r;i++){
        A[i]=0;
    }
    return;
}

void RotateArrayClockwise(int A[], int n, int r){

    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=A[i];
    }
    for(int i=0;i<n-r;i++){
        A[i]=temp[i+r];
    }
    for(int i=n-r;i<n;i++){
        A[i]=temp[i-(n-r)];
    }

    return;
}

void RotateArrayAntiClockwise(int A[], int n, int r){

    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=A[i];
    }

    for(int i=r;i<n;i++){
        A[i]=temp[i-r];
    }

    for(int i=0;i<r;i++){
        A[i]=temp[i+(n-r)];
    }

    return;
}

int FindMin(int A[], int n){

    int min=0;

    for(int i=1;i<n;i++){
        if(A[min]>A[i]){
            min=i;
        }
    }
    return min;
}

int FindMax(int A[], int n){

    int max=0;

    for(int i=1;i<n;i++){
        if(A[max]<A[i]){
            max=i;
        }
    }

    return max;
}

void FillArrayPseudoRandom(int A[], int n){

    for(int i=0;i<n;i++){
        A[i]=rand()%(int)(1e9+7);
    }
    return;
}

void FillArrayTrueRandom(int A[], int n){

    srand(time(0));

    for(int i=0;i<n;i++){
        A[i]=rand()%(int)(1e9+7);
    }
    
    return;
}

int* IncreaseArraySize(int A[], int n, int m){

    A=(int*)realloc(A,m*sizeof(int));

    return A;
}

void SetArrayToZero(int A[], int n){

    for(int i=0;i<n;i++){
        A[i]=0;
    }
}

void DeleteAllItemOfArray(int A[], int n){

    A=(int*)realloc(A,0);

    return;
}

void DeleteArray(int A[], int n){

    free(A);

    return;
}

int* AllocateArray(int A[], int n){

    A=(int*)malloc(n*sizeof(int));
    return A;
}