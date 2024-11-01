#define _CRT_SECURE_NO_WARNINGS
#include <sstream>
#include "pch.h"
#include "framework.h"

// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позволяет совместно использовать код документа в данным проекте.
#ifndef SHARED_HANDLERS
#include "CCircleCircus.h"
#endif

#include"MainFrm.h"
#include "ССircleСircusDoc.h"

#include <propkey.h>
#include<iostream>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include<fstream>
// CAmazingcirclecircusDoc

IMPLEMENT_DYNCREATE(CCircleCircusDoc, CDocument)

BEGIN_MESSAGE_MAP(CCircleCircusDoc, CDocument)
END_MESSAGE_MAP()


// Создание или уничтожение CAmazingcirclecircusDoc

CCircleCircusDoc::CCircleCircusDoc() noexcept
{
	// TODO: добавьте код для одноразового вызова конструктора

}

CCircleCircusDoc::~CCircleCircusDoc()
{
}

BOOL CCircleCircusDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: добавьте код повторной инициализации
	// (Документы SDI будут повторно использовать этот документ)

	return TRUE;
}

std::string readFile(const std::string& fileName) 
{
	std::ifstream f(fileName);
	f.seekg(0, std::ios::end);
	size_t size = f.tellg();
	std::string s(size, ' ');
	f.seekg(0);
	f.read(&s[0], size); // по стандарту можно в C++11, по факту работает и на старых компиляторах
	
	return s;
}


// Сериализация CAmazingcirclecircusDoc

void CCircleCircusDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{

		for (int i = 0; i < circles.size();i++)
		{
			ar << circles[i].X() << circles[i].Y() << circles[i].R();
		}
		
	}
	else
	{
		// Загружаем данные в массив
		bool life = true;

		while(life)
		{
			try

			{
				int x, y, r;
				ar >> x;
				ar >> y;
				ar >> r;

				CCircle circle(x, y, r);
				circles.push_back(circle);
			}
			catch (...)
			{
				life = false;
			}
				
		}
		CWnd* MainWnd = AfxGetMainWnd();
		pView = (CCircleCircusView*)((CMainFrame*)MainWnd);
		// TODO: добавьте код загрузки
	}
}

#ifdef SHARED_HANDLERS

// Поддержка для эскизов
void CAmazingcirclecircusDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Измените этот код для отображения данных документа
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Поддержка обработчиков поиска
void CAmazingcirclecircusDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Задание содержимого поиска из данных документа.
	// Части содержимого должны разделяться точкой с запятой ";"

	// Например:  strSearchContent = _T("точка;прямоугольник;круг;объект ole;");
	SetSearchContent(strSearchContent);
}

void CAmazingcirclecircusDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// Диагностика CAmazingcirclecircusDoc

#ifdef _DEBUG
void CCircleCircusDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCircleCircusDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Команды CAmazingcirclecircusDoc
