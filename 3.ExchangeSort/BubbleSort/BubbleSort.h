#pragma once
#include "include.h"

template <typename T, int N>
void BubbleSort(std::array<T, N>& list)
{
	constexpr int size = N - 1;
	int change_flag = 1;		//���û��������˵���Ѿ�������ɣ�����Ҫ�������У�1�������仯

	for (int i = size; (i > 1) && (1 == change_flag); i--) {		//n-1������
		change_flag = 0;
		for (int j = 1; j < i; j++) {		//��i����Ҫ�Ƚ�n-i-1��
			if (list[j] > list[j + 1]) {
				list[0] = list[j];
				list[j] = list[j + 1];
				list[j + 1] = list[0];
				change_flag = 1;	//��������
			}
		}
	}
}
