#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "hacker.h"

 /*
 1.��վ404����
 2.��վ�۸Ĺ���
 3.��վ������¼
 4.DNS����
 5.��������������
 */

using namespace std;
#define WIDTH	40
#define HEIGHT	15
#define MAXSIZE 4096

void inputPwd(char pwd[],int size){
	char c;
	int i=0;
	//����������:123456
	//���浽�ַ�����pwd:'1','2','3','4','5','6'
	//��'\0',ת��Ϊ�ַ���
	while(1){
		c=getch(); //�������
		
		//��������س���,����'\r'
		if(c=='\r'){
			pwd[i]=0; //'\0'
			break;
		}
		pwd[i++]=c;
		cout<<'*';
		
	}
	cout<<endl;
}




void login(void){
	string name;
	char pwd[32];
	while(1){
		system("cls");
		std::cout << "�������˺�:";
		std::cin >> name;  //���û������˺�,������name
	
		std::cout << "����������:";
		//std::cin >> pwd;  //���û���������,������pwd  

		//ʵ����������
		inputPwd(pwd,sizeof(pwd));

		if(name=="54hk"&& !strcmp(pwd,"123456")){
			break;
		}else{
			std::cout<<"������˺Ż������������������롣"<<endl;
			system("pause");
		}
	}
}

void printInMiddle(string msg){
	int leftSpace=(WIDTH-msg.length())/2;
		for(int i=0;i<leftSpace;i++){
			cout<<" ";

		}
		cout<<msg<<endl;
	}



void menuShow(void){
	/*
	system("cls");
	std::cout <<"1.��վ404����" << std::endl;
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.�鿴������¼" << std::endl;
	std::cout << "4.�����޸�" << std::endl;
	std::cout << "5.�˳�" << std::endl;
	*/
	string menu[]={
		"1.��վ404����",
		"2.��վ�۸Ĺ���",
		"3.��վ�����޸�",
		"4.�鿴������¼",
		"5.�˳�"
	};
	//����˵�����󳤶�
	int max =0;
	int menuCount=sizeof(menu)/sizeof(menu[0]);
	for(int i=0;i<menuCount;i++){
		if(menu[i].length()>max){
			max=menu[i].length();

		}

	}
	system("cls");
	//��ӡ����
	printInMiddle("---�ڿ͹���ϵͳ---");

	int leftSpace=(WIDTH-max)/2;
	for(int i=0;i<menuCount;i++){
		for(int i=0;i<leftSpace;i++){
			cout<<" ";

		}
		cout<<menu[i]<<endl;
	}

}

int menuChoise(void){
	int n=0;
	while(1){
	cin>>n;
	if(cin.fail()){
		cin.clear();
		cin.sync();
		cout<<"��Ч����,����������."<<endl;
		system("pause");

	}else{
		break;
	}
	}
	return n;
}
//��վ404����
void attack404(void){
	char id[64];//��վid
	char response[MAXSIZE];//������,�ӷ��������ؽ��
	system("cls");
	//cout<<"404����..."<<endl;
	//int hk_404(char *id, char *response) ;
	printInMiddle("---��վ404����---");
	cout<<"������׼����������վ��ID:";
	scanf_s("%s",id,sizeof(id));

	cout<<"����ִ��404����...\n";

	hk_404(id,response);
	string retStr=UTF8ToGBK(response);
	cout<<retStr<<endl;
	system("pause");
}

//��ҳ�۸Ĺ�����para��ʾ�������
//int hk_tamper(char *id, char *para, char *response);
void siteEdit(void){
	system("cls");
	char id[64];//��վid
	char response[MAXSIZE];//������,�ӷ��������ؽ��
	string attackText;
	printInMiddle("---��վ�۸Ĺ���---");
	cout<<"������׼����������վ��ID:";
	scanf_s("%s",id,sizeof(id));

	cout<<"��������Ҫд�������:";
	cin>>attackText;
	//�ѱ��ص�gbk����ת��ΪUTF-8����
	GBKToUTF8(attackText);
	cout<<"����ִ����վ�۸Ĺ���...\n";
	hk_tamper(id,(char *)attackText.c_str(),response);

	string retStr=UTF8ToGBK(response);
	cout<<retStr<<endl;
	system("pause");
}

//�鿴������¼
void attackRecord(void){
	system("cls");
	char id[64];//��վid
	char response[MAXSIZE];//������,�ӷ��������ؽ��
	
	printInMiddle("---�鿴������¼---");
	cout<<"������׼���鿴����վ��ID:";
	scanf_s("%s",id,sizeof(id));

	cout<<"���ڲ鿴������¼...\n";
	hk_record(id, response);
	string retStr=UTF8ToGBK(response);
	cout<<retStr<<endl;
	system("pause");
}


//��վ�����޸�
//int hk_restore(char *id, char *response);

void attackRepair(void){
	system("cls");
	char id[64];//��վid
	char response[MAXSIZE];//������,�ӷ��������ؽ��
	
	printInMiddle("---��վ�����޸�---");
	cout<<"������׼���޸�����վ��ID:";
	scanf_s("%s",id,sizeof(id));

	cout<<"�����޸���վ...\n";
	hk_restore(id, response);
	string retStr=UTF8ToGBK(response);
	cout<<retStr<<endl;
	system("pause");
}

void init(void){
	//�����ն˴��ڵĴ�С
	char cmd[128];
	sprintf(cmd,"mode con cols=%d lines=%d",WIDTH,HEIGHT);//��ӡ���ַ���
	system(cmd);
}
int main(void){
	init();
	login();//ʵ�ֵ�¼����
	while(1){
	menuShow();
	cout<<"������:";
	int n=menuChoise();
	
	switch(n){
	case 1:
		attack404();
		break;
	case 2:
		siteEdit();
		break;
	case 3:
		
		attackRepair();
		break;
	case 4:
		attackRecord();
		break;
	case 5:
		return 0;
	default:
		cout<<"��Ч����,����������."<<endl;
		system("pause");
		break;
	}

	}

	
	//system("pause");
	return 0;
}
