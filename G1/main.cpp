#include <graphics.h>
#include <Windows.h>
/*
int main(void){
	//��ʼ��ͼ�����640*480
	initgraph(640,480);

	//������Ҫ��ͼ�� -��һ��Բ,��(320,240)λ�û�һ��Բ,�뾶200����
	circle(340,240,200);

	system("pause");

	//�ر�ͼ�ν���

	closegraph();

}
*/
/*
int main(void){
	initgraph(640,480);

	setbkcolor(RGB(64,128,128));
	cleardevice();

	//���û��ʵ���ɫ
	setlinecolor(RGB(255,0,0));
	//���û��ʵ���ʽ,PS_SOLID��ʾʵ��,10�����ߵĿ��
	setlinestyle(PS_SOLID,10);
	circle(320,240,200);
	 
	//�����������ɫ
	settextcolor(RGB(255,255,0));
	//��������
	settextstyle(100, //����ĸ߶�
		0, //����Ŀ��,Ϊ0,��ʾ��ָ�����
		"΢���ź�"); //��������
	// ������(170,190)��λ�ô�ӡָ���ı�
	outtextxy(170,190,"�������");

	//����,������λ��(180,380)������(460,100)��һ����
	line(180,380,460,100);




	system("pause");
	closegraph();
	return 0;
}
*/

int main(void){
	initgraph(600,340);
	
	//����ͼƬ
	loadimage(0,"bg.jpg");

	//��һ�����ľ���,���Ͻ�����(300,40),���½�����(550,80)
	rectangle(300,40,550,80);
	//�����ı�������ɫ
	settextcolor(YELLOW);
	//�����ı�������ʽ
	settextstyle(30, //����߶�
		0, //��ָ���߶�
		"΢���ź�");
	outtextxy(310,45,"1-��վ404����");

	rectangle(300,100,550,140);
	outtextxy(310,105,"2-��վ�۸Ĺ���");

	rectangle(300,160,550,200);
	outtextxy(310,165,"3-��վ�����޸�");
	
	rectangle(300,220,550,260);
	outtextxy(310,225,"4-�鿴������¼");

	rectangle(300,280,550,320);
	outtextxy(310,285,"5-�˳�");




	system("pause");
	closegraph();
	return 0;

}