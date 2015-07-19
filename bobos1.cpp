// bobos1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
[windows programming 과제1]
+ 현재디렉토리\bob.txt 파일을 생성
+ 영문자/한글 조합으로 utf-8 인코딩 저장
+ 현재디렉토리\bob2.txt 복사
+ 현재디렉토리\bob2.txt 를 읽어서 화면(콘솔)에 출력 (한글 깨지면 x)
---- ReadFile() api 를 통해서 파일 읽기
---- Memory Mapped I/O 를 이용해서 파일 읽기
+ 현재디렉토리\bob.txt, 현재디렉토리\bob2.txt 삭제
*/

#include "stdafx.h"
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	create_bob_txt();
	_getch();

	return 0;
}

