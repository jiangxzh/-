#include <iostream>
#include <Windows.h>

using namespace std;

int testcin(void){
	int a;
	int b;
	int c;
	cout<<"��������������:"<<endl;
	cin>>a>>b>>c;
	cout << "a="<<a<<endl;
	cout<< "b="<<b<<endl;
	cout<< "c="<<c<<endl;
	 

	while(cin.fail()){
	cout << "����ʧ��,Ӧ��������������"<< endl;
	cin.clear();//���cin�Ĵ����־
	cin.sync();//���������


	cin>>a>>b>>c;
	cout << "a="<<a<<endl;
	cout<< "b="<<b<<endl;
	cout<< "c="<<c<<endl;

	}



	system("pause");
	return 0;
}