#pragma once
#include <inttypes.h>
#include "CompressedQuaternion.h"
#include "Quaternion.h"

class CompressedQuaternion
{
public:
	uint16_t v0;
	uint16_t v1;
	uint16_t v2;

	struct staticField
	{
		float _maxValue;
		float maxValueShift;
	};

	CompressedQuaternion::staticField _staticField;

	CompressedQuaternion(uint16_t v0, uint16_t v1, uint16_t v2);
	CompressedQuaternion() = default;

	void InitializeStructFields();

	Quaternion toQuaternion();

	void sub_13146BA_NATIVECPP(float* a1, uint16_t* a2);

	void sub_190D759(float* a1, float a2, float a3, float a4, float a5);
};

