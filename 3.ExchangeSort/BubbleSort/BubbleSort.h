#pragma once
#include "include.h"

template <typename T, int N>
void BubbleSort(std::array<T, N>& list)
{
	constexpr int size = N - 1;
	int change_flag = 1;		//如果没发生交换说明已经排序完成，不需要继续运行，1代表发生变化

	for (int i = size; (i > 1) && (1 == change_flag); i--) {		//n-1趟排序
		change_flag = 0;
		for (int j = 1; j < i; j++) {		//第i趟需要比较n-i-1次
			if (list[j] > list[j + 1]) {
				list[0] = list[j];
				list[j] = list[j + 1];
				list[j + 1] = list[0];
				change_flag = 1;	//发生交换
			}
		}
	}
}
