// bobos1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
[windows programming ����1]
+ ������丮\bob.txt ������ ����
+ ������/�ѱ� �������� utf-8 ���ڵ� ����
+ ������丮\bob2.txt ����
+ ������丮\bob2.txt �� �о ȭ��(�ܼ�)�� ��� (�ѱ� ������ x)
---- ReadFile() api �� ���ؼ� ���� �б�
---- Memory Mapped I/O �� �̿��ؼ� ���� �б�
+ ������丮\bob.txt, ������丮\bob2.txt ����
*/

#include "stdafx.h"
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	create_bob_txt();
	_getch();

	return 0;
}

