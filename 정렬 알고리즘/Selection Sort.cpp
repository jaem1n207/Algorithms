#include <stdio.h>

/*
	선택 정렬 알고리즘
	시간 복잡도: O(N^2) -> 비효율적 
	설명: 가장 작은 것을 선택해서 제일 앞으로 보낸다. 
*/

int main(void) {
	int i, j, min, index, temp; 
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for (i = 0; i < 10; i++) {	// i = 1
		min = 9999;
		for (j = i; j < 10; j++) {	
			if (min > array[j]) {	
				min = array[j];	
				index = j;	
			}
		}
		temp = array[i];	
		array[i] = array[index];	
		array[index] = temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;
}

