#pragma once

template <typename T>
class Queue
{
private:
	size_t start,end;
	T *data;
	size_t allSize;
	size_t used;
public:
	Queue(size_t size)
	{
		allSize = size;
		start = end = used = 0;
		if (size == 0)
			throw 311;
		data = new T[size];
	}

	void push(const T& el)
	{
		if (used == allSize)
			throw 112;

		this->data[end] = el;
		end = ++end%allSize;
		used++;
	}

	T next()
	{
		if (used == 0)
			throw 332;

		T tmp = this->data[start];
		return tmp;
		
	}

	T pop()
	{
		if (used == 0)
			throw 332;

		T tmp = this->data[start];
		start = ++start%allSize;
		used--;
		return tmp;
	}

	void resize(size_t newSize)
	{
		T *tmp;
		if (used > newSize)
			throw 415;
		size_t tmpMS = allSize;
		allSize = newSize;
		tmp = new T[allSize];
		size_t input = 0;
		for (size_t i = start; input < used; i=(i+1)%tmpMS)
		{
			tmp[input++] = data[i];
		}
	}
};	