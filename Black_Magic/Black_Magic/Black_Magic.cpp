#include <cstddef>

#include"stdafx.h"
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

struct Numb
{
	explicit Numb(int a) : a(a) {}
	Numb() { a = 0; }
	Numb(const Numb& other)
	{
		a = other.a;
	}
	Numb& operator=(const Numb& other)
	{
		a = other.a;
		return *this;
	}
	int a;
};


template <typename T>
class Array
{
public:
	Array(size_t size = 0, const T& value = T()) : data(NULL)
	{
		length = size;
		data = (T*)(new char[length * sizeof(value)]);
		for (size_t i = 0; i < length; i++)
		{
			new(data + i)T(value);
		}
	}

	Array(const Array & other)
	{
		if (other.data != NULL)
		{
			length = other.size();
			data = (T*)(new char[length * sizeof(other)]);
			for (size_t i = 0; i < length; i++)
			{
				new(data + i)T(other[i]);
			}
		}
	}

	~Array()
	{
		if (data != NULL)
		{
			for (size_t i = 0; i < length; i++)
			{
				data[i].~T();
			}
			length = 0;
			delete[] (char*)data;
		}
	}

	Array& operator=(const Array & other)
	{
		if (this != &other)
		{
			this->~Array();
			if (other.data != NULL)
			{
				length = other.size();
				data = (T*)(new char[length * sizeof(other)]);
				for (size_t i = 0; i < length; i++)
				{
					new(data + i)T(other[i]);
				}
			}

		}
		return *this;
	}

	size_t size() const
	{
		return length;
	}

	T& operator[](size_t num)
	{
		if (data != NULL)
		{
			return data[num];
		}
	}

	const T& operator[](size_t num) const
	{
		if (data != NULL)
		{
			return data[num];
		}
	}

private:
	size_t length;
	T* data;
};


int main()
{
	Numb n(6);
	

	Array<Numb>arr(5, Numb(3));

	Array<Numb>arr2(arr);

	Array<Numb>arr3(3, Numb(2));

	arr = arr3;

	Numb n2 = arr3[1];
	const Numb n9 = arr3[1];

	
}

