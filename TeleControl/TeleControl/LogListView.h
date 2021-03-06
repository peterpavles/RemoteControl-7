#pragma once

#include "StructShare.h"
// LogListView 视图
#define LOG_TYPE_NUMBER 3

class CLogListView : public CListView
{
    DECLARE_DYNCREATE(CLogListView)

protected:
    CLogListView();           // 动态创建所使用的受保护的构造函数
    virtual ~CLogListView();

public:
#ifdef _DEBUG
    virtual void AssertValid() const;
#ifndef _WIN32_WCE
    virtual void Dump(CDumpContext& dc) const;
#endif
#endif
protected:
    CString m_acsType[LOG_TYPE_NUMBER] = {
        _T("NOTE"),
        _T("ALARM"),
        _T("ERROR")
    };

protected:
    DECLARE_MESSAGE_MAP()
public:
    virtual void OnInitialUpdate();

    //**********************************************************************
    // FUNTION:     Insert information to LogListView.
    // OUPUT:       None
    // RETURN:      Successful (TRUE) or failure (FALSE)
    // PARAMETER:
    //      csInfo:     Containt of information.
    //      dwType:     Type of information.
    //                      Note:   0
    //                      Alarm:  1
    //                      Error:  2
    // NOTE:        
    //      1. Point cann't be NULL.
    //**********************************************************************
    BOOL InsertLogInfo(_In_ DWORD dwType,
                       _In_ const CString csInfo);
};


