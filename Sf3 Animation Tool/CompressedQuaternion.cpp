#include "CompressedQuaternion.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <corecrt_math.h>

CompressedQuaternion::CompressedQuaternion(uint16_t v0, uint16_t v1, uint16_t v2)
{
	this->v0 = v0;
	this->v1 = v1;
	this->v2 = v2;
}
void CompressedQuaternion::InitializeStructFields()
{
	this->_staticField._maxValue = 1.414214f;
	this->_staticField.maxValueShift = 1.0f / this->_staticField._maxValue;
}
Quaternion CompressedQuaternion::toQuaternion()
{
	uint16_t* a2 = (uint16_t*)malloc(sizeof(uint16_t) * 3);
	float* a1 = (float*)malloc(sizeof(float) * 4);
	Quaternion retstr = *(Quaternion*)malloc(sizeof(Quaternion));

	a2[0] = v0;
	a2[1] = v1;
	a2[2] = v2;

	this->InitializeStructFields();
	this->sub_13146BA_NATIVECPP(a1, a2);

	retstr.q1 = a1[0];
	retstr.q2 = a1[1];
	retstr.q3 = a1[2];
	retstr.q4 = a1[3];

	return retstr;
}
void CompressedQuaternion::sub_13146BA_NATIVECPP(float* a1, uint16_t* a2)
{
	int v2; // ebp
	uint32_t v3; // esi
	int v4; // edx
	uint16_t v5; // si

	staticField p_maxValue; // eax
	float v8; // xmm0_4
	float v9; // xmm1_4
	float v10; // xmm3_4
	float v11; // xmm4_4
	float v12; // xmm5_4
	float v13; // xmm0_4
	uint32_t v14; // al
	float v16; // [esp+8h] [ebp-34h]
	float v17; // [esp+Ch] [ebp-30h]
	float v18; // [esp+10h] [ebp-2Ch]
	int v19; // [esp+18h] [ebp-24h]
	float v20; // [esp+20h] [ebp-1Ch]
	uint32_t v21; // [esp+24h] [ebp-18h]

	v21 = a2[0];
	v2 = (int)((a2[1] >> 14) + 4 * (v21 & 8191));
	v3 = (uint32_t)a2[2];
	v4 = (int)((v3 >> 15) + 2 * (a2[1] & 16383));
	v5 = (uint16_t)(v3 & 32767);
	{
		v19 = v4;
		v4 = v19;
	}
	p_maxValue = this->_staticField;
	v8 = p_maxValue._maxValue;
	v9 = p_maxValue.maxValueShift;

	v10 = (float)((float)((float)v2 * p_maxValue._maxValue) / 32767.0) - v9;
	v11 = (float)((float)((float)v4 * p_maxValue._maxValue) / 32767.0) - v9;
	v12 = (float)((float)((float)v5 * p_maxValue._maxValue) / 32767.0) - v9;
	{
		v20 = (float)((float)((float)v4 * v8) / 32767.0) - v9;
		v12 = (float)((float)((float)v5 * v8) / 32767.0) - v9;
		v11 = v20;
		v10 = (float)((float)((float)v2 * v8) / 32767.0) - v9;
	}
	v13 = (float)sqrtf((float)((float)((float)(1.0 - (float)(v10 * v10)) - (float)(v11 * v11)) - (float)(v12 * v12)));

	v14 = (v21 >> 13) & 3;

	if (v14 == 1)
	{
		a1[1] = 0;
		a1[0] = 0;
		a1[3] = 0;
		a1[2] = 0;
		v18 = v12;
		v17 = v11;
		v16 = v13;
	}
	else
	{
		if (v14 == 2)
		{
			a1[1] = 0;
			a1[0] = 0;
			a1[3] = 0;
			a1[2] = 0;
			v18 = v12;
			v17 = v13;
		}
		else
		{
			if (v14 != 3)
			{
				a1[1] = 0;
				a1[0] = 0;
				a1[3] = 0;
				a1[2] = 0;
				this->sub_190D759(a1, (v13), (v10), (v11), (v12));
				return;
			}
			a1[1] = 0;
			a1[0] = 0;
			a1[3] = 0;
			a1[2] = 0;
			v18 = v13;
			v17 = v12;
		}
		v16 = v11;
	}
	this->sub_190D759(a1, (v10), (v16), (v17), (v18));
	return;
}
void CompressedQuaternion::sub_190D759(float* a1, float a2, float a3, float a4, float a5)
{
	a1[0] = a2;
	a1[1] = a3;
	a1[2] = a4;
	a1[3] = a5;
}