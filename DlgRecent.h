#pragma once


// DlgRecent �Ի���

class DlgRecent : public CDialog
{
	DECLARE_DYNAMIC(DlgRecent)

public:
	DlgRecent(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgRecent();

// �Ի�������
	enum { IDD = IDD_DLG_RECENT };
	void InitLBox();
	void GetSvrGNByIdx(CString &szOut, int iBkrG, int iSvrG);
	void SetHScroll();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox m_List;
	BOOL m_bSave;
	afx_msg void OnBnClkChkRecent();
	afx_msg void OnLbnDblclkLbRecent();
	afx_msg void OnDestroy();
	afx_msg void OnCancel();
	afx_msg void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnLbnSelchange();
};
