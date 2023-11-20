#include <Giga.h>

class Sandbox : public Giga::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Giga::Application* Giga::CreateApplication()
{
	return new Sandbox();
}