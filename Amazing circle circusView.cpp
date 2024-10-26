// Этот исходный код примеров MFC демонстрирует функционирование пользовательского интерфейса Fluent на основе MFC в Microsoft Office
// ("Fluent UI") и предоставляется исключительно как справочный материал в качестве дополнения к
// справочнику по пакету Microsoft Foundation Classes и связанной электронной документации,
// включенной в программное обеспечение библиотеки MFC C++.
// Условия лицензионного соглашения на копирование, использование или распространение Fluent UI доступны отдельно.
// Для получения дополнительных сведений о нашей программе лицензирования Fluent UI посетите веб-сайт
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// (C) Корпорация Майкрософт (Microsoft Corp.)
// Все права защищены.

// Amazing circle circusView.cpp: реализация класса CAmazingcirclecircusView
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позволяет совместно использовать код документа в данным проекте.
#ifndef SHARED_HANDLERS
#include "CCircleCircus.h"
#endif

#include "Amazing circle circusDoc.h"
#include "Amazing circle circusView.h"
#include"CCircleEditDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAmazingcirclecircusView

IMPLEMENT_DYNCREATE(CCircleCircusView, CView)

BEGIN_MESSAGE_MAP(CCircleCircusView, CView)
	// Стандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CCircleCircusView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_AddCirclesBtn, &CCircleCircusView::EVENT_HANDLER_AddCirclesBtn)
	ON_COMMAND(ID_DeleteCIrclesBtn, &CCircleCircusView::EVENT_HANDLER_DeleteCirclesBtn)
	ON_COMMAND(ID_ChangeCirclesBtn, &CCircleCircusView::EVENT_HANDLER_ChangeCirclesBtn)
END_MESSAGE_MAP()

// Создание или уничтожение CAmazingcirclecircusView

CCircleCircusView::CCircleCircusView() noexcept
{
	// TODO: добавьте код создания

}

CCircleCircusView::~CCircleCircusView()
{
}

BOOL CCircleCircusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменения
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Рисование CAmazingcirclecircusView

void CCircleCircusView
::OnDraw(CDC* /*pDC*/)
{
	CCircleCircusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки для собственных данных
}


// Печать CAmazingcirclecircusView


void CCircleCircusView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CCircleCircusView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void CCircleCircusView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void CCircleCircusView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
}

void CCircleCircusView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CCircleCircusView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Диагностика CAmazingcirclecircusView

#ifdef _DEBUG
void CCircleCircusView::AssertValid() const
{
	CView::AssertValid();
}

void CCircleCircusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCircleCircusDoc* CCircleCircusView::GetDocument() const // встроена неотлаженная версия
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCircleCircusDoc)));
	return (CCircleCircusDoc*)m_pDocument;
}
#endif //_DEBUG


// Обработчики сообщений CAmazingcirclecircusView


void CCircleCircusView::EVENT_HANDLER_AddCirclesBtn()
{
	// TODO: добавьте свой код обработчика команд
}


void CCircleCircusView::EVENT_HANDLER_DeleteCirclesBtn()
{
	// TODO: добавьте свой код обработчика команд
}


void CCircleCircusView::EVENT_HANDLER_ChangeCirclesBtn()
{
	// TODO: добавьте свой код обработчика команд

	CCircleEditDlg editorDlg;

	
	editorDlg.DoModal();
}
