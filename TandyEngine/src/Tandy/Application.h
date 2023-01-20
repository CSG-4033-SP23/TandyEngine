#pragma once

#include "Core.h"

namespace Tandy {

	class TANDY_API Application {
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	Application* CreateApplication();

}