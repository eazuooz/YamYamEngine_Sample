#pragma once
#include "YamYamEngine.h"

#ifdef _DEBUG
#define DX12_ENABLE_DEBUG_LAYER
#endif

// �η� �繫��
class GraphicDevice
{
public:
	void Init();

	ComPtr<IDXGIFactory4> GetDXGI() { return _dxgi; }
	ComPtr<ID3D12Device> GetDevice() { return _device; }

private:
	// COM(Component Object Model)
	// - DX�� ���α׷��� ��� �������� ���� ȣȯ���� �����ϰ� �ϴ� ���
	// - COM ��ü(COM �������̽�)�� ���. ���λ����� �츮���� ������
	// - ComPtr ������ ����Ʈ ������
	ComPtr<ID3D12Debug>			_debugController;
	ComPtr<IDXGIFactory4>		_dxgi; // ȭ�� ���� ��ɵ�
	ComPtr<ID3D12Device>		_device; // ���� ��ü ����
};

