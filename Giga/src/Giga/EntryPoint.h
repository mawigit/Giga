#pragma once


#ifdef GG_PLATFORM_WINDOWS

extern Giga::Application* Giga::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Giga::CreateApplication();
	app->Run();
	delete app;
}


#endif