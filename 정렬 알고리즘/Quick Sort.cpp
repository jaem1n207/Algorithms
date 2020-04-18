#include <stdio.h>

/*
	퀵 정렬 알고리즘 -> 대표적인 '분할 정복'알고리즘이다. 
	시간 복잡도: 평균적으로 O(N * logN) 
	한계점: 시간 복잡도O(N^2) -> why? [1 2 3 4 5 6 7 8 9 10] 이렇게 정렬이 되어있는 경을 오름차순으로 정렬하려 할 때 최악 
	설명: 특정한 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 뒤에 배열을 반으로 나눈다. 
*/

int number = 10; 	
int data[10] = {1, 10, 5, 8 ,7, 6, 4, 3, 2, 9};

void show() {
	int i;
	for(i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}
}

void quickSort(int *data, int start, int end) {
	if (start >= end) {	// 원소가 1개인 경우 
		return; 
	}
	
	int key = start;	// 키는 첫 번째 원소 
	int i = start + 1;
	int j = end;
	int temp;
	while(i <= j) {	// 엇갈릴 때까지 반복 
		while(i <= end && data[i] <= data[key]) {	// key 값보다 큰 값을 만날 때까지 
			i++;
		}
		while(j > start && data[j] >= data[key]) {	// key 값보다 작은 값을 만날 때까지 
			j--;
		}
		if (i > j) {	// 현재 엇갈린 상태면 key 값 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp; 
		} else {	// 엇갈리지 않았다면 i와 j를 교체 
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	} 
	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void) {
	quickSort(data, 0, number - 1);
	show();
	
	return 0;
}
