#include <Perspective.h>

class Sandbox : public Perspective::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

Perspective::Application* Perspective::CreateApplication()
{
	return new Sandbox();
}