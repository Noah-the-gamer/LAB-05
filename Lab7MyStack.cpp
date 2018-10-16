/*
Noah Fulton
Created Oct. 15, 2018
The main is set up to test the string reversal functions 1-4


*/
#include "pch.h"
#include <iostream>
#include <string>
#include "Lab7MyStack.h"


int main()
{
	std::string testString = "This is a test string";
	std::cout << testString << std::endl;
	std::cout << stringReversal1(testString) << std::endl;
	std::cout << stringReversal2(testString) << std::endl;
	std::cout << stringReversal3(testString) << std::endl;
	std::cout << stringReversal4(testString) << std::endl;
}

