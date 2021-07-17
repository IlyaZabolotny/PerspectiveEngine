#pragma once

#ifdef PERSPECTIVE_PLATFORM_WINDOWS

extern Perspective::Application* Perspective::CreateApplication();

void main()
{
	auto app = Perspective::CreateApplication();
	app->Run();
	delete app;
}

#endif 

