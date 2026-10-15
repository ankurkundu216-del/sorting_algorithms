#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int data[], int n) {
	// Outer loop (Passes Counter)
	// Controls how many total rounds we run.
	// To sort 'n' elements, we need (n-1) passes.
	for(int k=1; k<n; k++) {

		// Resetting Trackers for the New Pass\
		// - 'ptr = 0': Always start comparing from the very beginning of the array.
		// - 'swap = 0': Assume no swap have happened yet in this round.
		int ptr=0, swap=0;

		// Inner Loop (Adjacent Comparisons)
		// Compares elements side-by-side (ptr and ptr+1).
		// We subtract 'k' bcoz the largest elements have already "bubbled"
		// to the end and are already sorted, so we can skip them.
		while(ptr<n-k) {

			// The Swap Condition
			// If the left element is bigger than the right,
			// they are out of order!
			if(data[ptr]>data[ptr+1]) {
				int tmp=data[ptr];		// Save left elem temporarily
				data[ptr]=data[ptr+1];		// Move right elem to left
				data[ptr+1]=tmp;		// Put saved elem into the right
				swap=1;				// Flag that a swap happened
			}
			ptr++;		// Move pointer to check the next pair
		}
		// Smart Optimization (Early Exit)
		// If a full pass finishes and 'swap' is still 0, it means
		// the array is already sorted. We break out early to save CPU time!
		if(swap == 0) break;
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
	bubble_sort(data,n);
	printf("\nSorted array: ");
	printArray(data,n);
	free(data);
	data=NULL;
	return 0;
}
