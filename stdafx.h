// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: ���α׷��� �ʿ��� �߰� ����� ���⿡�� �����մϴ�.
#include <windows.h>
#include <stdint.h>
#include <strsafe.h>
#include <crtdbg.h>

void print(_In_ const char* fmt, _In_ ...);
bool is_file_existsW(_In_ const wchar_t* file_path);
bool create_bob_txt();