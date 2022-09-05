#pragma once

class SwapChain
{
public:
	void Init(const WindowInfo& info, ComPtr<ID3D12Device> device, ComPtr<IDXGIFactory4> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue);
	void Present();
	void SwapIndex();

	ComPtr<IDXGISwapChain3> GetSwapChain() { return _swapChain; }
	uint8 GetBackBufferIndex() { return _backBufferIndex; }

private:
	void CreateSwapChain(const WindowInfo& info, ComPtr<IDXGIFactory4> dxgi, ComPtr<ID3D12CommandQueue> cmdQueue);

private:
	ComPtr<IDXGISwapChain3>	_swapChain;
	uint32					_backBufferIndex = 0;
};

