#include <iostream>
#include <random>
#include <string>

void firstMethod(int givenNumber);
void secondMethod(int givenNumber);

int main()
{
	srand(time(NULL));

	const int MAX_GIVEN_NUMBER = 4000;
	int givenNumber = rand() % MAX_GIVEN_NUMBER;
	firstMethod(givenNumber);
	secondMethod(givenNumber);


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


}