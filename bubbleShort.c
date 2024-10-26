#include <stdio.h>
#define MAX 100
void bubbleSort(int arr[], int n,int a,int b,int swap) {
    for (a=0;a<n;a++) {
        for (b=0;b<(n-1);b++) {
		if(arr[b]>arr[b+1]){
		swap=arr[b];
		arr[b]=arr[b+1];
		arr[b+1]=swap;
		}
          
            }
        }
    }

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], n;
    int a,b,swap;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting:\n");
    printArray(arr, n);
    bubbleSort(arr, n,a,b,swap);
    printf("Array after sorting:\n");
    printArray(arr, n);
    return 0;
}
