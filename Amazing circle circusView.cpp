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
#include "Amazing circle circus.h"
#endif

#include "Amazing circle circusDoc.h"
#include "Amazing circle circusView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAmazingcirclecircusView

IMPLEMENT_DYNCREATE(CAmazingcirclecircusView, CView)

BEGIN_MESSAGE_MAP(CAmazingcirclecircusView, CView)
	// Стандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CAmazingcirclecircusView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_AddCirclesBtn, &CAmazingcirclecircusView::EVENT_HANDLER_AddCirclesBtn)
	ON_COMMAND(ID_DeleteCIrclesBtn, &CAmazingcirclecircusView::EVENT_HANDLER_DeleteCirclesBtn)
	ON_COMMAND(ID_ChangeCirclesBtn, &CAmazingcirclecircusView::EVENT_HANDLER_ChangeCirclesBtn)
END_MESSAGE_MAP()

// Создание или уничтожение CAmazingcirclecircusView

CAmazingcirclecircusView::CAmazingcirclecircusView() noexcept
{
	// TODO: добавьте код создания

}

CAmazingcirclecircusView::~CAmazingcirclecircusView()
{
}

BOOL CAmazingcirclecircusView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменения
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Рисование CAmazingcirclecircusView

void CAmazingcirclecircusView::OnDraw(CDC* /*pDC*/)
{
	CAmazingcirclecircusDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки для собственных данных
}


// Печать CAmazingcirclecircusView


void CAmazingcirclecircusView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CAmazingcirclecircusView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void CAmazingcirclecircusView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void CAmazingcirclecircusView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
}

void CAmazingcirclecircusView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CAmazingcirclecircusView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Диагностика CAmazingcirclecircusView

#ifdef _DEBUG
void CAmazingcirclecircusView::AssertValid() const
{
	CView::AssertValid();
}

void CAmazingcirclecircusView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAmazingcirclecircusDoc* CAmazingcirclecircusView::GetDocument() const // встроена неотлаженная версия
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAmazingcirclecircusDoc)));
	return (CAmazingcirclecircusDoc*)m_pDocument;
}
#endif //_DEBUG


// Обработчики сообщений CAmazingcirclecircusView


void CAmazingcirclecircusView::EVENT_HANDLER_AddCirclesBtn()
{

	
}


void CAmazingcirclecircusView::EVENT_HANDLER_DeleteCirclesBtn()
{
	// TODO: добавьте свой код обработчика команд
}


void CAmazingcirclecircusView::EVENT_HANDLER_ChangeCirclesBtn()
{
	// TODO: добавьте свой код обработчика команд
}
