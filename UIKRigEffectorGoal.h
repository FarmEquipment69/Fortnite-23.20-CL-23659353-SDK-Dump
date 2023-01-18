// Class /Script/IKRig.IKRigEffectorGoal
// Size: 0x100
class UIKRigEffectorGoal : public UObject
{
	struct FName GoalName; // 0x28 (0x4)
	struct FName BoneName; // 0x2c (0x4)
	float PositionAlpha; // 0x30 (0x4)
	float RotationAlpha; // 0x34 (0x4)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform CurrentTransform; // 0x40 (0x60)
	struct FTransform InitialTransform; // 0xa0 (0x60)
};

