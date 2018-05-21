
// PointView.h : CPointView ��Ľӿ�
//

#pragma once

#include "BmpLoader.h"

class CPointView : public CView
{
protected: // �������л�����
	CPointView();
	DECLARE_DYNCREATE(CPointView)


public:
	void DrawCirclea(int r,int a,int b);
	void norm(float v1[], float v2[], float v3[], float* nor);
// ����
public:
	CPointDoc* GetDocument() const;
	
    CBmpLoader Texture;
// ����
public:
	int move;
	int angle;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CPointView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	CClientDC * m_pDC;
	void Init(void);
	bool bSetupPixelFormat(void);
	void DrawScence(void);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // PointView.cpp �еĵ��԰汾
inline CPointDoc* CPointView::GetDocument() const
   { return reinterpret_cast<CPointDoc*>(m_pDocument); }
#endif

