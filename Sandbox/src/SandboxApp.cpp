#include <Giga.h>

class Sandbox : public Giga::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}