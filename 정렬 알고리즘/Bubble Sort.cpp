#include <stdio.h>

/*
	버블 정렬 알고리즘
	시간 복잡도: O(N^2) -> 비효율적
	설명: 옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보내는 정렬 방법이다. 
	선택 정렬보다 더 느림.
	Why? 계속해서 자리를 바꿔주어야하기 때문에 컴퓨터가 해야 할 일이 많아 선택 정렬보다 실제로 훨씬 비효율적이다. 정렬 알고리즘 중 가장 느린게 버블 정렬.
*/


int main(void) {
	int i, j, temp;
	int array[11] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9, 11};
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 11; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;
}
