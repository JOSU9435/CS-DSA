#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void best_input(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
}

void average_input(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=rand()%(int)(1e9);
    }
}

void worst_input(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=n-i;
    }
}

void insertion_sort(int arr[],int n){

    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;

        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main(){

    int n;

    scanf("%d",&n);

    int arr[n];

    clock_t start,end;
    long int t;

    // worst input

    worst_input(arr,n);

    start=clock();

    insertion_sort(arr,n);

    end=clock();

    t=end-start;

    printf("Total elapsed time insertion sort for worst input: %f \n", (double)t/(double)CLOCKS_PER_SEC);

    // best input

    best_input(arr,n);

    start=clock();

    insertion_sort(arr,n);

    end=clock();
    t=end-start;

    printf("Total elapsed time insertion sort for best input: %f \n", (double)t/(double)CLOCKS_PER_SEC);

    // average input

    average_input(arr,n);

    start=clock();

    insertion_sort(arr,n);

    end=clock();
    t=end-start;

    printf("Total elapsed time insertion sort for average input: %f \n", (double)t/(double)CLOCKS_PER_SEC);


    return 0;
}