#pragma once
#include "Class1.h"

namespace Stepan {

	class Class2 :public Class1 {
	public:
		void showInfo() {
			cout << "Inside namespace Stepan: Class2" << endl;
		}
	};
}