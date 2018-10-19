
// TeleClientDlg.h: 头文件
//

#pragma once
#include "ConnectThread.h"
#include "CommunicationIOCP.h"
#include "CmdRecvThread.h"
#include "FileTransportThread.h"



// CTeleClientDlg 对话框
class CTeleClientDlg : public CDialog
{
// 构造
public:
	CTeleClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TELECLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
public:
    // Socket上下文信息
    PCLIENTINFO m_pstClientInfo = NULL;
    // 中断事件是否已触发
    BOOL m_bBreakEventHasSigal = FALSE;
    // 数据发送标识
    BOOL m_bHasDataToSend = FALSE;
    // CMD退出标识
    BOOL m_bCmdQuit = FALSE;

    // The thread had initialized that get file.
    CEvent m_GetFileThreadInitializeEvent;

protected:
	HICON m_hIcon;
    // 配置文件
    CString m_csInitFile = _T(".\\client.ini");;
    CCommunicationIOCP m_IOCP;
    tagProfileInfo m_stGetProfile = { 0 };
    SOCKET m_sctConnect;
    //*****************************************
    //*ALARM* Those points need to free before program had finished.
    //*****************************************
    CConnectThread *m_pthdConnectThread = NULL;
    CFileTransportThread *m_pthdFileTransportThread = NULL;

    // 连接中断事件
    HANDLE m_hBreakEvent = NULL;

    // IOCP进程的附加数据
    IOCPTHREADADDTIONDATA m_stIOCPThreadAddtionData;
    PCONNECTTHREADPARAM m_pstConnectThreadParam = NULL;
    // 发给CMD的命令
    CString m_csUserInput;
;
    // CMDRecv线程
    CCmdRecvThread *m_pthdCmdRecvThread = NULL;


	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
    afx_msg LRESULT OnBreakeventsignal(WPARAM wParam, LPARAM lParam);
public:
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    void SetConnectSocket(const SOCKET &sctTarget);
    BOOL ReadDataFromCmd();

protected:
    afx_msg LRESULT OnCreatecmdrecvthread(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnSendordertocmd(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnGetfile(WPARAM wParam, LPARAM lParam);
};
