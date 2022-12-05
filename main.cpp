#include <iostream>

#include "subProject/lib.h"
#include <romfs/romfs.hpp>

using namespace std;

int main(int argc, char * argv[]) {
	cout << romfs::get("test.txt").string() << endl;
	printf("%i\n", addition(5, 6));
}
