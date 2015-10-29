#include "iterN.h"

int main(){
	std::cout << "Node Test Driver" << std::endl;

	iterN testIterNode(NULL,NULL,NULL,NULL);
	iterN testIterNode2(&testIterNode, NULL, NULL, NULL);
	std::cout << testIterNode << std::endl;
}