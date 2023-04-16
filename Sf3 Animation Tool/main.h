#pragma once
#include "main.h"
#include <string>

enum  Bones
{
	hair1 = 6,
	hair = 5,
	head = 4,
	neck = 3,
	forearm_twist_l = 11,
	weapon_l = 13,
	f_big3_l = 16,
	f_big2_l = 15,
	f_big1_l = 14,
	f_main3_l = 19,
	f_main2_l = 18,
	f_main1_l = 17,
	f_pointer3_l = 22,
	f_pointer2_l = 21,
	f_pointer1_l = 20,
	hand_l = 12,
	forearm_l = 10,
	arm_l = 9,
	scapular_l = 23,
	clavicle_l = 8,
	chest_l = 24,
	zero_joint_hand_l = 7,
	forearm_twist_r = 29,
	weapon_r = 31,
	f_big3_r = 34,
	f_big2_r = 33,
	f_big1_r = 32,
	f_main3_r = 37,
	f_main2_r = 36,
	f_main1_r = 35,
	f_pointer3_r = 40,
	f_pointer2_r = 39,
	f_pointer1_r = 38,
	hand_r = 30,
	forearm_r = 28,
	arm_r = 27,
	scapular_r = 41,
	clavicle_r = 26,
	chest_r = 42,
	zero_joint_hand_r = 25,
	chest = 2,
	stomach = 1,
	toe_l = 47,
	foot_l = 46,
	calf_l = 45,
	thigh_l = 44,
	back_l = 48,
	zero_joint_pelvis_l = 43,
	toe_r = 55,
	foot_r = 54,
	calf_r = 53,
	thigh_r = 52,
	back_r = 56,
	zero_joint_pelvis_r = 51,
	biceps_twist_l = 57,
	biceps_twist_r = 58,
	thigh_twist_l = 59,
	thigh_twist_r = 60,
	pelvis = 0
};
std::string getEnumValue(Bones bone)
{
	switch (bone)
	{
	case hair1: return "hair1";
	case hair: return  "hair";
	case head: return "head";
	case neck: return "neck";
	case forearm_twist_l: return "forearm_twist_l";
	case weapon_l: return "weapon_l";
	case f_big3_l: return "f_big3_l";
	case f_big2_l: return "f_big2_l";
	case f_big1_l: return "f_big1_l";
	case f_main3_l: return "f_main3_l";
	case f_main2_l: return "f_main2_l";
	case f_main1_l: return "f_main1_l";
	case f_pointer3_l: return "f_pointer3_l";
	case f_pointer2_l: return "f_pointer2_l";
	case f_pointer1_l: return "f_pointer1_l";
	case hand_l: return "hand_l";
	case forearm_l: return "forearm_l";
	case arm_l: return "arm_l";
	case scapular_l: return "scapular_l";
	case clavicle_l: return "clavicle_l";
	case chest_l: return "chest_l";
	case zero_joint_hand_l: return "zero_joint_hand_l";
	case forearm_twist_r: return "forearm_twist_r";
	case weapon_r: return "weapons_r";
	case f_big3_r: return "f_big3_r";
	case f_big2_r: return "f_big2_r";
	case f_big1_r: return "f_big1_r";
	case f_main3_r: return "f_main3_r";
	case f_main2_r: return "f_main2_r";
	case f_main1_r: return "f_main1_r";
	case f_pointer3_r: return "f_pointer3_r";
	case f_pointer2_r: return "f_pointer2_r";
	case f_pointer1_r: return "f_pointer1_r";
	case hand_r: return "hand_r";
	case forearm_r: return "forearm_r";
	case arm_r: return "arm_r";
	case scapular_r: return "scapular_r";
	case clavicle_r: return "clavicle_r";
	case chest_r: return "chest_r";
	case zero_joint_hand_r: return "zero_joint_hand_r";
	case chest: return "chest";
	case stomach: return "stomach";
	case toe_l: return "toe_l";
	case foot_l: return "foot_l";
	case calf_l: return "calf_l";
	case thigh_l: return "thigh_l";
	case back_l: return "back_l";
	case zero_joint_pelvis_l: return "zero_joint_pelvis_l";
	case toe_r: return "toe_r";
	case foot_r: return "foot_r";
	case calf_r: return "calf_r";
	case thigh_r: return "thigh_r";
	case back_r: return "back_r";
	case zero_joint_pelvis_r: return "zero_joint_pelvis_r";
	case biceps_twist_l: return "biceps_twist_l";
	case biceps_twist_r: return "biceps_twist_r";
	case thigh_twist_l: return "thigh_twist_l";
	case thigh_twist_r: return "thigh_twist_r";
	case pelvis: return "pelvis";
	}
}