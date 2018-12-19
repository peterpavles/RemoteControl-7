
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

#include <afxshellmanager.h>
#include <afxvisualmanager.h>
#include <afxvisualmanagerwindows.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <VersionHelpers.h>
#include <regex>
#include <list>
#include <Windows.h>
#include <atlpath.h>

#include <comdef.h>

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#define WM_BREAKEVENTSIGNAL     WM_USER+101
#define WM_CREATECMDRECVTHREAD  WM_USER+102
#define WM_SENDORDERTOCMD       WM_USER+103
#define WM_GETFILE              WM_USER+104
#define WM_PUTFILE              WM_USER+105
#define WM_TASKPAUSE            WM_USER+106

#include <afxsock.h>            // MFC 套接字扩展
#include "assistFunc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif







