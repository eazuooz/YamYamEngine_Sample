#pragma once
#include "YamYamEngine.h"

class CImGUIMgr
{
	DECLARE_SINGLE(CImGUIMgr);
private:
	ID3D12DescriptorHeap* m_pHeap;
	
public:
	void init(HWND hWnd);
	void progress();
};


