#include<stdio.h>
#include<stdlib.h>

void selection_sort(int data[], int n) {
	// Outer Loop (The Boundary Swapper)
	// Moves the boundary between the sorted and unsorted parts one step at a time.
	// It goes up to n-1 bcoz the final elem will automatically be in place.
	for(int i=0; i<n-1; i++) {

		// Assume Current is Minimum
		// We assume the first elem of the curr unsorted
		// portion (at index 'i') is the smallest value.
		int min_idx=i;

		// Inner Loop (The Hunter)
		// Scans through the rest of the unsorted array (from i+1 to the end)
		// to hunt for an even smaller value.
		for(int j=i+1; j<n; j++) {

			// Updating Minimun Index
			// If we find an element smaller than our current minimum,
			// we update 'min_idx' to remember its location.
			if(data[j] < data[min_idx]) {
				min_idx=j;
			}
		}

		// The Swap (Placing it in the front)
		// Once the inner loop finishes, we know the absolute minimum of the
                // unsorted part. If it's not already at index 'i', swap them!
		if(min_idx != i) {
			int tmp = data[i];
			data[i] = data[min_idx];
			data[min_idx] = tmp;
		}
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
        selection_sort(data,n);
        printf("\nSorted array: ");
        printArray(data,n);
        free(data);
        data=NULL;
        return 0;
}


