#include "YamYamEngine.h"
#include "WindowApplication.h"
#include "Application.h"
#include "SceneManager.h"

void WindowApplication::Init(const WindowInfo& info)
{
	GEngine->Init(info);

	GET_SINGLE(SceneManager)->LoadScene(L"TestScene");
}

void WindowApplication::Update()
{
	GEngine->Update();
}