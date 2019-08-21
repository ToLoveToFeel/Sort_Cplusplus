#include "include.h"

//Ctrl+K Ctrl+C			注释
//Ctrl+K Ctrl+U			解注
//Ctrl+K Ctrl+F			快速整理代码格式
//Ctrl+D				复制当前行
//Ctrl+L				删除当前行
//Ctrl+Shift+Enter		在当前行任意位置直接换行
//Shift+Home			选中当前行光标前的所有文本
//Shift+Eed				选中当前行光标后的所有文本
//Ctrl+Shift+Home		选中光标前的所有文本
//Ctrl+Shift+Eed		选中光标后的所有文本
//Home					光标跳到当前行行首
//End					光标跳到当前行行尾

int main(void)
{
	std::array y{ 0.0, 6.0, 2.2, 7.2, 4.0, 9.0, 0.8, 5.0, 6.0 };		//第一项为哨兵项，不参与排序
	for (int i = 1; i < sizeof(y) / sizeof(y[0]); i++) {
		cout << std::fixed << std::setprecision(2) << y[i] << "  ";
	}

	BinaryInsertSort(y);

	cout << endl;
	for (int i = 1; i < sizeof(y) / sizeof(y[0]); i++) {
		cout << std::fixed << std::setprecision(2) << y[i] << "  ";
	}

	return 0;
}