//******************************************************************************
// License:     MIT
// Author:      Hoffman
// Create Time: 2018-11-28
// Description: 
//      The header file of class CFileTransferTaskListCtrl.
//
// Modify Log:
//      2018-11-28    Hoffman
//      Info: a. Add declare below member methods.
//              a.1. OnTransportMnPauseselectedtask();
//              a.2. OnTransportMnStartselectedtask();
//            b. Add below member variables.
//              b.1. m_ref_TransportTaskManager;
//              b.2. m_acsTaskStatus;
//            c. Modify declare below member methods.
//              c.1. CFileTransferTaskListCtrl();
//                  c.1.1. Add TransportTaskManagerObj and acsTaskStatus 
//                         two paraments.
//******************************************************************************

#pragma once
#include "stdafx.h"
#include "FileTransportManager.h"
#include "CommunicationIOCP.h"
#include "StructShare.h"

// CFileTransforTaskListCtrl

class CFileTransferTaskListCtrl : public CListCtrl
{
	DECLARE_DYNAMIC(CFileTransferTaskListCtrl)

private:
    CFileTransportManager &m_ref_TransportTaskManager;
    const CString *const m_acsTaskStatus = NULL;
    CCommunicationIOCP &m_ref_IOCP;
    PCLIENTINFO m_pstClientInfo = NULL;
public:
	CFileTransferTaskListCtrl(CFileTransportManager &TransportTaskManagerObj,
                              const CString acsTaskStatus[],
                              CCommunicationIOCP &IOCP,
                              PCLIENTINFO pstClientInfo);
	virtual ~CFileTransferTaskListCtrl();

protected:
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnTransportMnPauseselectedtask();
    afx_msg void OnTransportMnStartselectedtask();
};
