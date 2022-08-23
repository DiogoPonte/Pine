#pragma once

#include "Core.h"


namespace Pine {
	
	class PN_API Application {

	public:
		Application();
		virtual ~Application();

		void Run();
	};


	//to be defined in client
	Application* CreateApplication();
}


