#include "CImGUIMgr.h"

#include "Application.h"
#include "GraphicDevice.h"
#include "CommandQueue.h"


#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx12.h"

//CImGUIMgr::CImGUIMgr()
//{
//
//}
//
//CImGUIMgr::~CImGUIMgr()
//{
//    m_pHeap->Release();
//}

void CImGUIMgr::init(HWND hWnd)
{
    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;       // Enable Keyboard Controls    
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;           // Enable Docking
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;         // Enable Multi-Viewport / Platform Windows

    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();

     // When viewports are enabled we tweak WindowRounding/WindowBg so platform windows can look identical to regular ones.
    ImGuiStyle& style = ImGui::GetStyle();
    if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
    {
        style.WindowRounding = 0.0f;
        style.Colors[ImGuiCol_WindowBg].w = 1.0f;
    }


    // create descriptor heap
    D3D12_DESCRIPTOR_HEAP_DESC desc = {};
    desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    desc.NumDescriptors = 1;
    desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    DEVICE.Get()->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&m_pHeap));
        

    // Setup Platform/Renderer backends

    bool bSuccess = ImGui_ImplWin32_Init(hWnd);
    bSuccess = ImGui_ImplDX12_Init(DEVICE.Get(), 3, DXGI_FORMAT_R8G8B8A8_UNORM
        , m_pHeap, m_pHeap->GetCPUDescriptorHandleForHeapStart()
        , m_pHeap->GetGPUDescriptorHandleForHeapStart());
}

void CImGUIMgr::progress()
{
    ImGui_ImplDX12_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();



    {
        bool open = true;
        ImGui::ShowDemoWindow(&open);
    }


    GRAPHICS_CMD_LIST->SetDescriptorHeaps(1, &m_pHeap);
    ImGui::Render();
    ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), GRAPHICS_CMD_LIST.Get());


    // Update and Render additional Platform Windows
    if (ImGui::GetIO().ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
    {
        ImGui::UpdatePlatformWindows();
        ImGui::RenderPlatformWindowsDefault();
    }
}