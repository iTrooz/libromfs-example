#include <iostream>

#include "subProject/lib.h"
#include <romfs/romfs.hpp>

using namespace std;

int main(int argc, char * argv[]) {
	romfs::testFunc();
	printf("%i\n", addition(5, 6));
}
