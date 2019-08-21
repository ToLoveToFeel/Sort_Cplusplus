#pragma once
#include "include.h"

template <typename T, int N>
void SimpleSelectSort(std::array<T, N>& list)		//默认第0项为哨兵项
{
	constexpr int size = N - 1;

	int i, j;
	int min;
	for (i = 1; i < size; i++) {
		min = i;
		for (j = i + 1; j <= size; j++) {
			if (list[j] < list[min]) {
				min = j;
			}
		}
		if (min != i) {
			list[0] = list[i];
			list[i] = list[min];
			list[min] = list[0];
		}
	}
}
