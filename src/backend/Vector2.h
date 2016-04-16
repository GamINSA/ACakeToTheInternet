#pragma once
#include <iostream>
#include <boost/serialization/access.hpp>
using namespace std;

///<summary>Classe vecteur. A n'utiliser qu'avec des types numériques évidemment</summary>
///<remarks>C'est normal que le corps des fonctions de cette classe soient définies dans le .h, (voir templates) </remarks>
template <typename T>
class Vector2
{
public:
	Vector2();
	Vector2(T x, T y);
	~Vector2();
	inline T GetX() const;
	inline T GetY() const ;
	inline void SetX(const T x);
	inline void SetY(const T y);
	void Display(ostream& flux) const;
	void operator += (const Vector2<T> v);
	void operator -= (const Vector2<T> v);
	void operator *= (const Vector2<T> v);
	void operator ^= (const Vector2<T> v);
	void operator=(const Vector2<T> v);
private:
	T p_x, p_y;

	friend class boost::serialization::access;
	template<typename T1>
	inline void serialize(T1 & ar, const unsigned int version)
	{
		ar & p_x;
		ar & p_y;
	}
};
template <typename T>
bool operator==(Vector2<T> const& v1, Vector2<T> const& v2);
template <typename T>
bool operator!=(Vector2<T> const& v1, Vector2<T> const& v2);
template <typename T>
Vector2<T> operator+(const Vector2<T> v1, const Vector2<T> v2);
template <typename T>
Vector2<T> operator-(const Vector2<T> v1, const Vector2<T> v2);
template <typename T>
Vector2<T> operator*(const Vector2<T> v1, const Vector2<T> v2);
template <typename T>
Vector2<T> operator^(const Vector2<T> v1, const Vector2<T> v2);
template <typename T>
ostream& operator<<(ostream &flux, Vector2<T> const& v);


template <typename T>
Vector2<T>::Vector2() :p_x(0), p_y(0) { }
template <typename T>
Vector2<T>::Vector2(T x, T y) : p_x(x), p_y(y) { }

template <typename T>
Vector2<T>::~Vector2()
{
}
template <typename T>
inline T Vector2<T>::GetX() const
{
	return p_x;
}
template <typename T>
inline T Vector2<T>::GetY() const
{
	return p_y;
}
template <typename T>
inline void Vector2<T>::SetX(const T x)
{
	p_x = x;
}
template <typename T>
inline void Vector2<T>::SetY(const T y)
{
	p_y = y;
}
template <typename T>
void Vector2<T>::Display(ostream &flux) const
{
	flux << '[' << p_x << ';' << p_y << ']';
}

#pragma region Operators
template <typename T>
bool operator==(Vector2<T> const& v1, Vector2<T> const& v2)
{
	return	v1.GetX() == v2.GetX() &&
		v2.GetY() == v2.GetY();
}
template <typename T>
bool operator!=(Vector2<T> const& v1, Vector2<T> const& v2)
{
	return	v1.GetX() != v2.GetX() ||
		v2.GetY() != v2.GetY();
}

template <typename T>
void Vector2<T>::operator+=(const Vector2<T> v)
{
	p_x += v.GetX();
	p_y += v.GetY();
}
template <typename T>
void Vector2<T>::operator-=(const Vector2<T> v)
{
	p_x -= v.GetX();
	p_y -= v.GetY();
}
template <typename T>
void Vector2<T>::operator*=(const Vector2<T> v)
{
	p_x *= v.GetX();
	p_y *= v.GetY();
}
template <typename T>
void Vector2<T>::operator^=(const Vector2<T> v)
{
	p_x *= v.GetY();
	p_y *= v.GetX();
}
template <typename T>
void Vector2<T>::operator=(const Vector2<T> v)
{
	p_x = v.GetX();
	p_y = v.GetY();
}

template <typename T>
Vector2<T> operator+(const Vector2<T> v1, const Vector2<T> v2)
{
	Vector2<T> v;
	v.SetX(v1.GetX() + v2.GetX());
	v.SetY(v1.GetY() + v2.GetY());
	return v;
}
template <typename T>
Vector2<T> operator-(const Vector2<T> v1, const Vector2<T> v2)
{
	Vector2<T> v;
	v.SetX(v1.GetX() - v2.GetX());
	v.SetY(v1.GetY() - v2.GetY());
	return v;
}
template <typename T>
Vector2<T> operator*(const Vector2<T> v1, const Vector2<T> v2)
{
	Vector2 v<T>;
	v.SetX(v1.GetX() * v2.GetX());
	v.SetY(v1.GetY() * v2.GetY());
	return v;
}
template <typename T>
Vector2<T> operator^(const Vector2<T> v1, const Vector2<T> v2)
{
	Vector2<T> v;
	v.SetX(v1.GetX() * v2.GetY());
	v.SetY(v1.GetY() * v2.GetX());
	return v;
}
template <typename T>
ostream& operator<<(ostream &flux, Vector2<T> const& v)
{
	v.Display(flux);
	return flux;
}