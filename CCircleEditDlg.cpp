// CCircleEditDlg.cpp: файл реализации
//

#include "pch.h"
#include "Amazing circle circus.h"
#include "afxdialogex.h"
#include "CCircleEditDlg.h"


// Диалоговое окно CCircleEditDlg

IMPLEMENT_DYNAMIC(CCircleEditDlg, CDialogEx)

CCircleEditDlg::CCircleEditDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CircleEditorDlg, pParent)
{

}

CCircleEditDlg::~CCircleEditDlg()
{
}

void CCircleEditDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCircleEditDlg, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений CCircleEditDlg
