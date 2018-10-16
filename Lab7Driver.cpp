/*
Noah Fulton
Created Oct. 15, 2018
This file holds the functions stringReversal 1-4
reversal 1 uses a stack, 2 uses a vector, 3 uses a list,
4 uses a custom class called MyClass

*/
#include "pch.h"
#include "Lab7MyStack.h"
#include <string>
#include <stack>
#include <vector>
#include <list>

//create custom class
class MyClass
{
public:
	//return if function is empty
	bool isEmpty()
	{
		return holdVector.empty();
	}
	//push a character into the vector/list
	void push(char letter)
	{
		holdVector.push_back(letter);
	}
	//pull last character from list/vector
	char pull()
	{
		char returnChar = holdVector.back();
		holdVector.pop_back();
		return returnChar;
	}


private:
	//std::vector<char> holdVector;
	std::list<char> holdVector;
};




//string reversal using stack
std::string stringReversal1(std::string input)
{
	//create a hold stack
	std::stack <char> holdStack;
	//fill the hold stack
	for (int i = 0; i < input.length(); i++)
	{
		holdStack.push(input[i]);
	}
	std::string returnString;
	//fill the return string
	for (int i = 0; i < input.length(); i++)
	{
		returnString += holdStack.top();
		holdStack.pop();
	}
	return returnString;
}

//reverse a string using a vector
std::string stringReversal2(std::string input)
{
	//declare a hold vector
	std::vector <char> holdVector;
	//fill the hold vector
	for (int i = 0; i < input.length(); i++)
	{
		holdVector.push_back(input[i]);
	}
	std::string returnString;
	//fill the return string
	do
	{
		returnString += holdVector.back();
		holdVector.pop_back();
	} while (! holdVector.empty());
	return returnString;
}

//reverse a string using a list
std::string stringReversal3(std::string input)
{
	//declare a hold list
	std::list<char> holdList;
	//fill the hold list
	for (int i = 0; i < input.length(); i++)
	{
		holdList.push_back(input[i]);
	}
	std::string returnString;
	//fill the return string
	do
	{
		returnString += holdList.back();
		holdList.pop_back();
	} while (!holdList.empty());
	return returnString;
}

//reverse string with a custom class
std::string stringReversal4(std::string input)
{
	//declare custom class
	MyClass holdClass;
	//fill the class
	for (int i = 0; i < input.length(); i++)
	{
		holdClass.push(input[i]);
	}
	std::string returnString;
	//fill the string
	do
	{
		returnString += holdClass.pull();
	} while (!holdClass.isEmpty());

	return returnString;
}