#include<stdio.h>
#include<stdlib.h>

void quick_sort(int data[], int first, int last) {
	if (first < last) {
		int lower = first; int upper = last;
		int pivot = data[first];
		while(lower<=upper) {
			while(data[lower]<=pivot && lower<=last){ lower++;}
			while(pivot<data[upper] && upper>=first){ upper--;}
			if(lower<upper) {
				int tmp = data[lower];
				data[lower] = data[upper];
				data[upper] = tmp;
			}else{
				lower++;
			}
		}
		int tmp=data[first];
		data[first]=data[upper];
		data[upper]=tmp;
		quick_sort(data, first, upper-1);
		quick_sort(data, upper+1, last);
	}
}

// Function to Print Array
void printArray(int data[], int n) {
        for(int i=0; i<n; i++) {
                printf("%d ", data[i]);
        }
        printf("\n");
}
// Menu Driven Function
int main() {
        int n;
        printf("Enter no. of elements: ");
        scanf("%d", &n);
        if(n<=0){printf("Invalid!\n");return 1;}
        int *data=(int*)malloc(n*sizeof(int));
        if(data==NULL){printf("Invalid!\n");return 1;}
        printf("Enter %d elements:\n",n);
        for(int i=0; i<n; i++){scanf("%d", &data[i]);}
        printf("\nOriginal array: ");
        printArray(data,n);
        quick_sort(data,0,n-1);
        printf("\nSorted array: ");
        printArray(data,n);
        free(data);
        data=NULL;
        return 0;
}
