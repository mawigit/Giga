#pragma once


#ifdef GG_PLATFORM_WINDOWS

extern Giga::Application* Giga::CreateApplication();

int main(int argc, char** argv)
{

	Giga::Log::Init();
	GG_CORE_WARN("Initialized Log");
	int a = 69;
	GG_INFO("Info {0}", a);


	auto app = Giga::CreateApplication();
	app->Run();
	delete app;
}


#endif