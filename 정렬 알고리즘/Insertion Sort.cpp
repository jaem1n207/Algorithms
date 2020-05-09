#include <stdio.h>

/*
	삽입 정렬 알고리즘
	시간 복잡도:  O(N^2) -> 비효율적 
	설명:  각 숫자를 적절한 위치에 삽입하는 방법이다. 
	하지만 array[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
	위와 같이 데이터가 '거의 정렬된' 상태라면 삽입 정렬 알고리즘이 가장 효율적이다.
	Why? 삽입 정렬은 필요할 때에 한해서만 삽입을 진행하기 때문에 데이터가 이미 거의 정렬된 상태에 한해서는 어떤 알고리즘보다도 빠르다는 특징이 있다. 
*/

int main(void) {
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (i = 0; i < 9; i++) {
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;
}

