#pragma once
#include "afxdialogex.h"


// Диалоговое окно CCircleEditDlg

class CCircleEditDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCircleEditDlg)

public:
	CCircleEditDlg(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CCircleEditDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CircleEditorDlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
};
