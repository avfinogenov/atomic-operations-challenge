#include <iostream>
#include <random>
#include <string>

void firstMethod(int givenNumber);
void secondMethod(int givenNumber);
void thirdMethod(int givenNumber);


int main()
{
	srand(time(NULL));

	const int MAX_GIVEN_NUMBER = 4000;
	int givenNumber = rand() % INT_MAX;
	firstMethod(givenNumber);
	secondMethod(givenNumber);
	thirdMethod(givenNumber);

}

void thirdMethod(int givenNumber)
{

	int givenNumberForOutput = givenNumber;
	int operationsCount = 0;

	while (givenNumber > 1)
	{
		if (givenNumber % 16 == 11 || givenNumber % 16 == 15 || givenNumber % 16 == 7)
		{
			givenNumber++;
			operationsCount++;
			continue;
		}
		if (givenNumber % 2 == 1)
		{
			givenNumber--;
			operationsCount++;
			continue;
		}
		givenNumber /= 2;
		operationsCount++;

	}
	std::cout << "third method\n";
	std::cout << "given number: " + std::to_string(givenNumberForOutput) + "; operations count: " + std::to_string(operationsCount);
	std::cout << "\n";

}



int getSquareCompare(int givenNumber, int baseCompare)
{
	while (baseCompare < givenNumber)
	{
		baseCompare *= 2;
	}
	return baseCompare;
}


void secondMethod(int givenNumber)
{

	int givenNumberForOutput = givenNumber;
	int operationsCount = 0;
	int squareCompare = getSquareCompare(givenNumber, 1);

	

	while (givenNumber > 1)
	{
		if (givenNumber % 2 == 1)
		{
			if (givenNumber < squareCompare)
			{
				givenNumber++;
			}
			else
			{
				givenNumber--;
			}
			
			operationsCount++;
			squareCompare = getSquareCompare(givenNumber, squareCompare);
			continue;
		}
		givenNumber /= 2;
		squareCompare /= 2;
		operationsCount++;

	}
	std::cout << "second method\n";
	std::cout << "given number: " + std::to_string(givenNumberForOutput) + "; operations count: " + std::to_string(operationsCount);
	std::cout << "\n";

}

void firstMethod(int givenNumber)
{
	
	int givenNumberForOutput = givenNumber;
	int operationsCount = 0;

	while (givenNumber > 1)
	{
		if (givenNumber % 2 == 1)
		{
			givenNumber--;
			operationsCount++;
			continue;
		}
		givenNumber /= 2;
		operationsCount++;

	}
	std::cout << "first method\n";
	std::cout << "given number: " + std::to_string(givenNumberForOutput) + "; operations count: " + std::to_string(operationsCount);
	std::cout << "\n";

}