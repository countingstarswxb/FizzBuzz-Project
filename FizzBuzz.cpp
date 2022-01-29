#include <iostream>
#include <string>


void printFizzBuzzOrNum(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
    else if (num % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
    else if (num % 5 == 0)
        { 
            std::cout << "Buzz\n";
        }
    else 
        {
            std::cout << num << std::endl;
        }
}




int main()
{
    for (int num = 1 ; num <= 100 ; num ++)
    {
        printFizzBuzzOrNum(num);
    }



}