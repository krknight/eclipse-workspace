/*
 ============================================================================
 Name        : Unit4C.c
 Author      : Keith Knight
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printS(char []);
void printArray(int [], int);
void swap(int *, int *);
int * bubbleSort(int [], int);
int * selectionSort(int [], int);
int * insertionSort(int [], int);


int main(void) {

	char strBS[] = "\nBubble Sort";
	char strSS[] = "\n\nSelection Sort";
	char strIS[] = "\n\nInsertion Sort";
	printS(strBS);

	int arrBSUnsorted[] = {64, 34, 25, 12, 22, 11, 90};
	int * arrBSSorted;
	int arrSSUnsorted[] = {64, 34, 25, 12, 22, 11, 80};
	int * arrSSSorted;
	int arrISUnsorted[] = {64, 34, 25, 12, 22, 11, 70};
	int * arrISSorted;
	int n = sizeof(arrBSUnsorted)/sizeof(arrBSUnsorted[0]);

	printf("\nUnsorted = ");
	printArray(arrBSUnsorted, n);

	arrBSSorted = bubbleSort(arrBSUnsorted, n);
	printf("\nSorted = ");
	printArray(arrBSSorted, n);

	printS(strSS);
	printf("\nUnsorted = ");
	printArray(arrSSUnsorted, n);

	arrSSSorted = selectionSort(arrSSUnsorted, n);
	printf("\nSorted = ");
	printArray(arrSSSorted, n);

	printS(strIS);
	printf("\nUnsorted = ");
	printArray(arrISUnsorted, n);

	arrISSorted = selectionSort(arrISUnsorted, n);
	printf("\nSorted = ");
	printArray(arrISSorted, n);

	return EXIT_SUCCESS;
}

void printS(char str[]) {
	printf("%s", str);
}

void printArray(int arr[], int size) {
	for (int i=0;i<size;i++)
		printf("%d ", arr[i]);
}

void swap(int *higher, int *lower) {
	int temp = 0;

	temp = *higher;
	*higher = *lower;
	*lower = temp;
	return;
}

int * bubbleSort(int arr[], int last) { // Time complexity O(n)
	int i,j;
	char * swapped = "false\0";
	char f[] = "false\0";

	for(i=0;i<last-1;i++) { // to ensure all iterations are done to always be successful
		swapped = "false\0";
		for (j=0;j<last-1-i;j++) { // -i because the last i number of elements are always correct
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = "true\0";
			}
		}
		if (strcmp(f, swapped) == 0) {
//			printf("Swapped is %s ", swapped);
			break;
		}
	}
	return arr;
}

int * selectionSort(int arr[], int last) {  // Time complexity O(n^2)
	int i,j;

	for (i=0;i<last;i++) {
		for (j=i+1;j<last;j++) {
			if (arr[j] < arr[i]) {
				swap(&arr[j], &arr[i]);
			}
		}
	}

	return arr;
}

int * insertionSort(int arr[], int last) {  // Time complexity O(n*2)
	int i, key, j;

	for (i=1;i<last;i++) {

		key = arr[i];
		j = i - 1;
		/*
		 * Move elements of arr[0..i-1], that are greater than key, to one position
		 * ahead of their current position
		 */
		while (j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}

//	unsigned int a = 6;
//	int b = -10;
//	(a+b)>6 ? printf(" >6") : printf(" <6");
//	// expect -4 > 6 false therefore " <6" but get " >6"  because expressions promote all types to unsigned)
//    // ok when both are int

	return arr;
}
