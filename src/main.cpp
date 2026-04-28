#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <sys/types.h>

using namespace std;

int main(int argc, char** args){

	time_t t;
	time(&t);
	srand(t);
	cout << "Seu numero gerado foi "<< args[min(rand() % argc + 1, argc-1)] << "\n";
	return 0;
}
