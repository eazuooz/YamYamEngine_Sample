#include "YamYamEngine.h"
#include "SwapChain.h"

void SwapChain::Init(const WindowInfo& info, ComPtr<ID3D12Device> device, ComPtr<IDXGIFactory4> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue)
{
	CreateSwapChain(info, dxgi, cmdQueue);
}

void SwapChain::Present()
{
	// Present the frame.
	_swapChain->Present(0, 0);
}

void SwapChain::SwapIndex()
{
	_backBufferIndex = (_backBufferIndex + 1) % SWAP_CHAIN_BUFFER_COUNT;
}

void SwapChain::CreateSwapChain(const WindowInfo& info, ComPtr<IDXGIFactory4> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue)
{
	// ������ ���� ���� ������
	_swapChain.Reset();

	//DXGI_SWAP_CHAIN_DESC sd;
	//sd.BufferDesc.Width = static_cast<uint32>(info.width); // ������ �ػ� �ʺ�
	//sd.BufferDesc.Height = static_cast<uint32>(info.height); // ������ �ػ� ����
	//sd.BufferDesc.RefreshRate.Numerator = 60; // ȭ�� ���� ����
	//sd.BufferDesc.RefreshRate.Denominator = 1; // ȭ�� ���� ����
	//sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM; // ������ ���÷��� ����
	//sd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	//sd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	//sd.SampleDesc.Count = 1; // ��Ƽ ���ø� OFF
	//sd.SampleDesc.Quality = 0;
	//sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT; // �ĸ� ���ۿ� �������� �� 
	//sd.BufferCount = SWAP_CHAIN_BUFFER_COUNT; // ����+�ĸ� ����
	//sd.OutputWindow = info.hwnd;
	//sd.Windowed = info.windowed;
	//sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD; // ���� �ĸ� ���� ��ü �� ���� ������ ���� ����
	//sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

	//dxgi->CreateSwapChain(cmdQueue.Get(), &sd, &_swapChain);

	DXGI_SWAP_CHAIN_DESC1 sd;
	{
		ZeroMemory(&sd, sizeof(sd));
		sd.BufferCount = SWAP_CHAIN_BUFFER_COUNT;
		sd.Width = static_cast<uint32>(info.width); // ������ �ػ� �ʺ�
		sd.Height = static_cast<uint32>(info.height); // ������ �ػ� ����
		sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
		sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		sd.SampleDesc.Count = 1;
		sd.SampleDesc.Quality = 0;
		sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
		sd.AlphaMode = DXGI_ALPHA_MODE_UNSPECIFIED;
		sd.Scaling = DXGI_SCALING_STRETCH;
		sd.Stereo = FALSE;
	}

	IDXGISwapChain1* swapChain1 = NULL;

	dxgi->CreateSwapChainForHwnd(cmdQueue.Get(), info.hwnd, &sd, NULL, NULL, &swapChain1);

	swapChain1->QueryInterface(IID_PPV_ARGS(&_swapChain));
	
	swapChain1->Release();

	_swapChain->SetMaximumFrameLatency(SWAP_CHAIN_BUFFER_COUNT);
}