#include "include.h"

int main(void)
{
	std::array y{ 0.0, 6.0, 2.2, 7.2, 4.0, 9.0, 0.8, 5.0, 6.0, 2.0 };		//第一项为哨兵项，不参与排序
	for (int i = 1; i < sizeof(y) / sizeof(y[0]); i++) {
		cout << std::fixed << std::setprecision(2) << y[i] << "  ";
	}

	BubbleSort(y);

	cout << endl;
	for (int i = 1; i < sizeof(y) / sizeof(y[0]); i++) {
		cout << std::fixed << std::setprecision(2) << y[i] << "  ";
	}

	return 0;
}