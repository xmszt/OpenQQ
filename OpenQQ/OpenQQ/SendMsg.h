#pragma once

#include "stdafx.h"

#define MAX_FILE_SIZE 20480 //һ�ζ�ȡ������ļ��ֽ���

struct SendMsg
{
	TCHAR userName[20];//������
	TCHAR sendUser[20];
	TCHAR recvUser[20];
	TCHAR sendMsg[250];
	BOOL isSingleSend;
	BOOL isFriendInfo;
	BOOL isOnLine;

	//��������ļ�������
	BOOL isFile;
	BOOL isFinished;
	UINT transSize;
	UINT fileOffset;
	char sendFile[20480];
	TCHAR fileName[50];
	ULONGLONG fileLen;

	BOOL isWindowShake;

	//ͷ��ͬ��
	BOOL isHeadPic;
	UINT headNum;
};