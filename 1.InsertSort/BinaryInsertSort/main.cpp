#include "include.h"

//Ctrl+K Ctrl+C			ע��
//Ctrl+K Ctrl+U			��ע
//Ctrl+K Ctrl+F			������������ʽ
//Ctrl+D				���Ƶ�ǰ��
//Ctrl+L				ɾ����ǰ��
//Ctrl+Shift+Enter		�ڵ�ǰ������λ��ֱ�ӻ���
//Shift+Home			ѡ�е�ǰ�й��ǰ�������ı�
//Shift+Eed				ѡ�е�ǰ�й���������ı�
//Ctrl+Shift+Home		ѡ�й��ǰ�������ı�
//Ctrl+Shift+Eed		ѡ�й���������ı�
//Home					���������ǰ������
//End					���������ǰ����β

int main(void)
{
	std::array y{ 0.0, 6.0, 2.2, 7.2, 4.0, 9.0, 0.8, 5.0, 6.0 };		//��һ��Ϊ�ڱ������������
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