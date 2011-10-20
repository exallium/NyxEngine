#pragma once

//Matrix.h
//Includes struct and function prototypes

struct matrix
{
	float
	m11,m12,m13,m14,
	m21,m22,m23,m24,
	m31,m32,m33,m34,
	m41,m42,m43,m44;
};

void SetMatrixTranslation(matrix & m, const vector3 & value);
void SetMatrixUp(matrix & m, const vector3 & value);
void SetMatrixRight(matrix & m, const vector3 & value);
void SetMatrixBackward(matrix & m, const vector3 & value);

void GetMatrixTranslation(const matrix & m, vector3 & result);
void GetMatrixUp(const matrix & m, vector3 & result);
void GetMatrixRight(const matrix & m, vector3 & result);
void GetMatrixBackward(const matrix & m, vector3 & result);

void InvertMatrix(const matrix & input, matrix & result);
void MulMatrix(const matrix & a,const matrix & b, matrix & result);
void ScaleMatrix(const matrix & input, const float & scalar, matrix & result);