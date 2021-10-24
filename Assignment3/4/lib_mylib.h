#ifndef lib_mylib_h
#define lib_mylib_h


void InsertItemAtLast(int A[], int n, int key);

void InsertItemAtFirst(int A[], int n, int key);

void InsertItemAtIndex(int A[], int n, int i, int key);

void DeleteItemFromLast(int A[], int n, int key);

void DeleteItemfromFirst(int A[], int n, int key);

void DeleteItemFromIndex(int A[], int n, int i, int key);

int FindItemUnsorted(int A[], int n, int key);

int FindItemSorted(int A[], int n, int key);

void SortArray(int A[], int n);

int* ExtractSubest(int A[], int n, int i, int j);

void DeleteSubset(int A[], int n, int i, int j);

void SplitIntoTwoArray(int A[], int B[], int n);

int* CloneArray(int A[], int n, int B[]);

void ShiftLeftArray(int A[], int n, int r);

void ShiftRightArray(int A[], int n, int r);

void RotateArrayClockwise(int A[], int n, int r);

void RotateArrayAntiClockwise(int A[], int n, int r);

int FindMin(int A[], int n);

int FindMax(int A[], int n);

void FillArrayPseudoRandom(int A[], int n);

void FillArrayTrueRandom(int A[], int n);

int* IncreaseArraySize(int A[], int n, int m);

void SetArrayToZero(int A[], int n);

void DeleteAllItemOfArray(int A[], int n);

void DeleteArray(int A[], int n);

int* AllocateArray(int A[], int n);


#endif