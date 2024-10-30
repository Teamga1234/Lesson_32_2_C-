#pragma once
#include "Class1.h"
class OutsideClass : public Stepan::Class1 {
public:
	void showInfo() {
		cout << "Outside namespace Stepan: OutsideClass" << endl;
	}
};