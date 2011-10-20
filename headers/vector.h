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

void AddVector2(const vector2 & a, const vector2 & b, vector2 & result);
void SubVector2(const vector2 & a, const vector2 & b, vector2 & result);
void MulVector2(const vector2 & a, const vector2 & b, vector2 & result);
void DivVector2(const vector2 & a, const vector2 & b, vector2 & result);
void ScaleVector2(const vector2 & input, const float & scalar, vector2 & result);

void AddVector3(const vector3 & a, const vector3 & b, vector3 & result);
void SubVector3(const vector3 & a, const vector3 & b, vector3 & result);
void MulVector3(const vector3 & a, const vector3 & b, vector3 & result);
void DivVector3(const vector3 & a, const vector3 & b, vector3 & result);
void ScaleVector3(const vector3 & input, const float & scalar, vector3 & result);

void AddVector4(const vector4 & a, const vector4 & b, vector4 & result);
void SubVector4(const vector4 & a, const vector4 & b, vector4 & result);
void MulVector4(const vector4 & a, const vector4 & b, vector4 & result);
void DivVector4(const vector4 & a, const vector4 & b, vector4 & result);
void ScaleVector4(const vector4 & input, const float & scalar, vector4 & result);

void CrossVector3(const vector3 & a, const vector3 & b, vector3 & result);
void DotVector3(const vector3 & a, const vector3 & b, float & result);