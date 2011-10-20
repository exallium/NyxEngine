#pragma once

//vector.h

struct vector2
{
	float x,y;
};

struct vector3
{
	float x,y,z;
}

struct vector4
{
	float x,y,z,w;
};

typedef vector4 quaternion;

struct matrix
{
	float
	m11,m12,m13,m14,
	m21,m22,m23,m24,
	m31,m32,m33,m34,
	m41,m42,m43,m44;
};