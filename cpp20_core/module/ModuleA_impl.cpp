// モジュール実装単位
module;
 // グローバルモジュールフラグメント
 #include <iostream>
module ModuleA;

namespace module_a {
	void func() {
		std::cout << "ModuleA::func()" << std::endl;
		// name_b::C c{};
	}
}