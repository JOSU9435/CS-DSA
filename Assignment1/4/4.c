#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX (int)1e5

void random_input(int arr[],int n){

    for(int i=0;i<n;i++){
        arr[i]=rand()%MAX;
    }
}

void sorted_input(int arr[],int n){

    for(int i=0;i<n;i++){
        arr[i]=i;
    }
}

void bubble_sort(int arr[],int n){

    int i=0;

    while(i<n){

        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        i++;
    }
}

void selection_sort(int arr[],int n){

    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

int main(){

    int n;

    scanf("%d",&n);

    int arrRandom[n];
    int arrSorted[n];

    random_input(arrRandom,n);
    sorted_input(arrSorted,n);

    clock_t start,end;
    long int t;

    start=clock();

    bubble_sort(arrRandom,n);

    end=clock();
    t=end-start;

    printf("Total elapsed time bubble sort random input: %f \n", (double)t/(double)CLOCKS_PER_SEC);

    start=clock();

    bubble_sort(arrSorted,n);

    end=clock();
    t=end-start;

    printf("Total elapsed time bubble sort sorted input: %f \n", (double)t/(double)CLOCKS_PER_SEC);

    start=clock();

    selection_sort(arrRandom,n);

    end=clock();
    t=end-start;

    printf("Total elapsed time selection sort random input: %f \n", (double)t/(double)CLOCKS_PER_SEC);

    start=clock();

    selection_sort(arrSorted,n);

    end=clock();
    t=end-start;

    printf("Total elapsed time selection sort sorted input: %f \n", (double)t/(double)CLOCKS_PER_SEC);

    return 0;
}