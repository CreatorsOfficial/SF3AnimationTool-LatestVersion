#pragma once
#include "Position.h"
#include "Quaternion.h"

class AnimatedTransform
{
public:
	Quaternion rotation;
	Vector3 position;
public:
	AnimatedTransform(Vector3 position, Quaternion quaternion);
	AnimatedTransform() = default;
};