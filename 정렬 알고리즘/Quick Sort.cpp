#include <stdio.h>

/*
	�� ���� �˰��� -> ��ǥ���� '���� ����'�˰����̴�. 
	�ð� ���⵵: ��������� O(N * logN) 
	�Ѱ���: �ð� ���⵵O(N^2) -> why? [1 2 3 4 5 6 7 8 9 10] �̷��� ������ �Ǿ��ִ� ���� ������������ �����Ϸ� �� �� �־� 
	����: Ư���� ���� �������� ū ���ڿ� ���� ���ڸ� ���� ��ȯ�� �ڿ� �迭�� ������ ������. 
*/

int number = 10; 	
int data[10] = {1, 10, 5, 8 ,7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end) {
	if (start >= end) {	// ���Ұ� 1���� ��� 
		return; 
	}
	
	int key = start;	// Ű�� ù ��° ����
	int i = start + 1;
	int j = end;
	int temp;
	while(i <= j) {	// �������� �ش� while�� Ż�� (�������� ���� �������� �ݺ��ϰ� ��) 
		while(data[i] <= data[key]) {	// key ������ ū ���� ���� ������ ���������� �̵� 
			i++;
		}
		while(data[j] >= data[key] && j > start) {	// key ������ ���� ���� ���� ������ �ݺ� 
			j--;
		}
		if (i > j) {	// ���� ������ ���¸� key �� ��ü 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp; 
		} else {	// �������� �ʾҴٸ� 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	} 
	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void) {
	quickSort(data, 0, number - 1);
	for(int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}
	
	return 0;
}
