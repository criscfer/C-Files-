//This program is an implementation of a function that uses std::stoi() from the <iostream> library to convert a string to an integer.
#include<iostream>
#include<vector>
#include<string>

int strint(std::string str) // Function to convert strings to integers 
{
	bool converted{true};
	int num{};
	std::vector<int> numbers{};
	for(int j{0}; j < 100; j++)
	{
		numbers.push_back(j);	
	}
	num = std::stoi(str);
	size_t i{0};
	while(i < numbers.size())
	{
		if(numbers.at(i) == num)
		{
			converted = true;
		}
		else
		{
			converted = false;
			break;
		}
		i++;
	}
	if(converted == true)
	{
		return num;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int number{};
	std::string str{};
	std::cin >> str;
	number = strint(str);
	if(number == -1)
	{
		std::cout<< "Error! Invalid number!" << std::endl;
	}
	else
	{
		std::cout<< number;
	}
	return 0;
}
