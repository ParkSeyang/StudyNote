#include <iostream>

using namespace std;

class MyString
{
private:
	char* stringpointer;
	int size;

public:
	MyString(char c)
	{
		
		stringpointer = new char[1];
		stringpointer[0] = c;
		size = 1;
	}
	MyString(const char* str)
	{
		size = strlen(str);
		stringpointer = new char[size];
		for (int i = 0; i < size; i++)
		{
			stringpointer[i] = str[i];
		}
	}
	MyString(const MyString& str)
	{
		size = str.size;
		for (int i = 0; i != size; i++)
		{
			stringpointer[i] = str.stringpointer[i];
		}
	}
	~MyString()
	{
		delete[] stringpointer;
	}
};


int main()
{

	return 0;
}