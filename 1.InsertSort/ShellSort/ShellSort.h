#pragma once
#include "include.h"

template<typename T, int N>
void ShellSort(std::array<T, N>& list, int d)				//默认第0项为哨兵项
{
	constexpr int size = N - 1;
	int i, j;
	for (i = d + 1; i <= size; i++) {
		if (list[i] < list[i - d]) {
			list[0] = list[i];
			list[i] = list[i - d];
			for (j = i - 2*d; (j > 0) && (list[0] < list[j]); j = j - d) {
				list[j + d] = list[j];
			}
			list[j + d] = list[0];
		}
	}
}

