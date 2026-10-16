#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int data[], int n) {
	// Outer Loop(The Card Picker)
	// starts at index 1 becoz we assume the 1st elem(index 0)
	// is already a sorted hand of size 1.
	for(int i=1; i<n; i++) {

		// The Key (the elem to insert)
		// We pick up the curr elem and save it as 'key'
		// so it doesn't get overwritten while we shift elements.
		int key = data[i];

		// The Backward Pointer
		// 'j' starts right behind 'i' and looks backward
		// into the sorted position
		int j=i-1;

		// Shifting Elements to the Right
		// While we haven't hit the beginning of the array (j>=0)
		// AND the elem on the left is bigger than our key,
		// we shift that elem one position to the right.
		while(j>=0 && data[j]>key) {
			data[j+1] = data[j];	// Shift right
			j--;			// Move backward to check the next elem
		}

		// Dropping the Key into Place
        	// Once the loop stops, we found the correct spot for our key.
        	// Drop it right into the empty slot (j + 1)!
		data[j+1] = key;
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
        insertion_sort(data,n);
        printf("\nSorted array: ");
        printArray(data,n);
        free(data);
        data=NULL;
        return 0;
}
