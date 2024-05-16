#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> //for time()
using namespace std;

const char alphanum[] =
"0123456789!@#$%^&*abcdefghijeklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
	srand(time(0)); // seed the random number generator

	int length = 15; // char password length

	std:: string password;
	for (int i = 0; i < length; ++i) {
		password += alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	std::cout << "Generated Password:" << password << endl; 
	return 0;

}