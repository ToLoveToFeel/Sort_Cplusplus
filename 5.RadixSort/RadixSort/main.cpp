#include "include.h"

int main(void)
{
	std::array y{ "369", "367", "167", "239", "237", "138", "230", "139" };
	//std::array y{ 369, 367, 167, 239, 237, 138, 230, 139 };
	SLList list;
	list.recnum = sizeof(y) / sizeof(y[0]);
	list.keynum = NUM_OF_NUM;
	for (int i = 0; i < list.recnum; i++) {
		list.r[i].keys = y[i];
		//list.r[i].keys = std::to_string(y[i]);
		////list.r[i].next = 0;
	}
	cout << "Before Sort : ";
	for (int i = 0; i < list.recnum; i++) {
		cout << std::fixed << std::setprecision(2) << y[i] << "  ";
	}

	RadixSort(list);

	cout << endl << "After Sort  : ";
	RadixPrint(list);
	//for (int i = 1; i < sizeof(y) / sizeof(y[0]); i++) {
	//	cout << std::fixed << std::setprecision(2) << y[i] << "  ";
	//}

	return 0;
}