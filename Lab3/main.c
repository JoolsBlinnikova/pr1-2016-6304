// Laba_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void print_sentence(char* buf, int lenth);		// ������ �����������

int main()
{
	int buf =0;			// ���������� ��� ������������� �����
	char buffer[500];		// ������ ��� �������� �������� �����

	int lenth = 0;			// ����� �������� �����������
	int n = 0;				// ���������� ����������� � ����������� ������ 
	int m = 0;				// ���������� ����������� � ����������������� ������
	
	do						//	������������ ����
	{
		buf = getchar();

		if ((buf == '.') || (buf == ';'))
		{
			buffer[lenth++] = (char)buf;		// ���������� ������� ������
			print_sentence(buffer, lenth);		// �������� ��������� �����������
			n++; m++;		// ����������� ��� ��������
			lenth = 0;		// �������� ����� �������� �����������
		}
		else if (buf == '?')
		{
			lenth = 0;		// �������� ����� �������� �����������, ������ ��� ����������� � "?" �������������
			n++;		// ����������� ������ ������� ��
		}
		else if (((buf == '\t') && (lenth == 0)) || (buf == '\n') )
			lenth = 0;		//	�������� ����� , ������ ��� ��������� � ������� ����� ������ ����� ��������������
		else
			buffer[lenth++] = (char)buf;		// ���������� ������� ������
	} while (!(buf == '!'));
	
	printf("���������� ����������� �� %d � ���������� ����������� ����� %d", n, m);
	return 0;
}

void print_sentence(char* buf, int lenth)
{
	for (int i = (buf[0] == ' ') ? 1 : 0; i < lenth; i++)		// ���������� ������ ������ � �����������
		printf("%c", buf[i]);
	printf("\n");
}

