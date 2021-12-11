#pragma once
template <typename T>
class Vector
{
public:
	Vector();
	Vector(const Vector& otherVector);
	Vector(Vector&& other); //rvalue
	~Vector();
	Vector<T>& operator=(const Vector& rightVector);
	Vector<T>& operator=(Vector&& other);


private:
	T* _data;
	int _size;
};

