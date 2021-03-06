
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展


#include <WinSock2.h>
#include <atlpath.h>
#include <shlobj.h>
#include <afxmt.h>
#include <vector>
#include <queue>
#include <regex>


#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT


#include <afxsock.h>            // MFC 套接字扩展
#include <afxcview.h>
#include <afxcview.h>
#include <afxext.h>
#include <afxcontrolbars.h>
#include <afxwin.h>
#include <afxcview.h>

#define WM_HASINFOTOFLUSH   WM_USER+1
#define WM_HASCMDREPLY      WM_USER+2
#define WM_HASORDERTOSEND   WM_USER+3
#define WM_HASDLGCLOSE      WM_USER+4
#define WM_HASFILEDATA      WM_USER+5
#define WM_FILEDLGUPDATE    WM_USER+6

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "assistFunc.h"
#include <afxcmn.h>
