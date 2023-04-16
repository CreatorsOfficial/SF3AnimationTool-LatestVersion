#pragma once
class Quaternion
{
public:
	float q1;
	float q2;
	float q3;
	float q4;
public:
	Quaternion(float q1, float q2, float q3, float q4);
	Quaternion() = default;
};