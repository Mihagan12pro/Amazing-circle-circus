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

// Amazing circle circusView.h: интерфейс класса CAmazingcirclecircusView
//

#pragma once


class CCircleCircusView : public CView
{
protected: // создать только из сериализации
	CCircleCircusView() noexcept;
	DECLARE_DYNCREATE(CCircleCircusView)

// Атрибуты
public:
	CCircleCircusDoc* GetDocument() const;
	

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Реализация
public:
	virtual ~CCircleCircusView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void EVENT_HANDLER_AddCirclesBtn();
	afx_msg void EVENT_HANDLER_DeleteCirclesBtn();
	afx_msg void EVENT_HANDLER_ChangeCirclesBtn();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // версия отладки в Amazing circle circusView.cpp
inline CAmazingcirclecircusDoc* CAmazingcirclecircusView::GetDocument() const
   { return reinterpret_cast<CAmazingcirclecircusDoc*>(m_pDocument); }
#endif

