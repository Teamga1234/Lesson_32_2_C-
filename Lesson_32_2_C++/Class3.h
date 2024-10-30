#pragma once
#include "Class1.h"

namespace Stepan {

	class Class3:public Class1 {
	public:
		void showInfo() {
			cout << "Inside namespace Stepan: Class3" << endl;
		}
	};
}