#include <iostream>
#include <Windows.h>

using namespace std;

int testdouble(void){
	double value=12.3456789;

	//Ĭ�������,cout���6λ��Ч����
	cout <<value<<endl;

	//�����޸��������
	cout.precision(4); //�޸�cout���������Ϊ4
	cout <<value<<endl;

	//��Ҫ�������,��ʾС��������λ��
	cout.flags(cout.fixed); //���㷨:����,������ʾС��������λ��
	cout <<value<<endl;

	cout<<3.1415926<<endl;

	cout.unsetf(cout.fixed);//ȡ�����㷨
	cout<<3.1415926<<endl;
	system("pause");
	return 0;
}