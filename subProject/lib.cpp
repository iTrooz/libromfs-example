#include<iostream>
#include<romfs/romfs.hpp>

int addition(int a, int b){
	std::cout << romfs::get("test.txt").string() << std::endl;
	return a+b;
}