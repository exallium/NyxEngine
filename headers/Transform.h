#pragma once

//Compact types

struct Transformation//40 bytes
{
	vector3 Position;
	vector3 Scale;
	quaternion Rotation;
};