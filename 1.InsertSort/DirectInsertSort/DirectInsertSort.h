#pragma once

#include "include.h"
//Ĭ������

template <typename T, int N>
void DirectInsertSort(std::array<T, N>& list)		//Ĭ�ϵ�0��Ϊ�ڱ���
{
	constexpr int size = N - 1;
	int i, j;
	for (i = 2; i <= size; i++) {
		if (list[i] < list[i - 1]) {
			list[0] = list[i];
			list[i] = list[i - 1];
			for (j = i - 2; list[j] > list[0]; j--) {
				list[j + 1] = list[j];
			}
			list[j + 1] = list[0];
		}

	}
}



