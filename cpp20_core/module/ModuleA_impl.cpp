// モジュール実装単位
module;
 // グローバルモジュールフラグメント
 #include <iostream>
module ModuleA;

namespace module_a {
	void func() {
		int num = 0;

		num += get_part1();
		num += get_part2();
		std::cout << "ModuleA::func():" << num << std::endl;
		// name_b::C c{};
	}
}