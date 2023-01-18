// ScriptStruct /Script/IKRig.IKRigGoal
// Size: 0x90
struct FIKRigGoal
{
	struct FName Name; // 0x0 (0x4)
	enum EIKRigGoalTransformSource TransformSource; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FBoneReference SourceBone; // 0x8 (0xc)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector Position; // 0x18 (0x18)
	struct FRotator Rotation; // 0x30 (0x18)
	float PositionAlpha; // 0x48 (0x4)
	float RotationAlpha; // 0x4c (0x4)
	enum EIKRigGoalSpace PositionSpace; // 0x50 (0x1)
	enum EIKRigGoalSpace RotationSpace; // 0x51 (0x1)
	unsigned char unreflected_52[0x6]; // 0x52 (0x6) 
	struct FVector FinalBlendedPosition; // 0x58 (0x18)
	struct FQuat FinalBlendedRotation; // 0x70 (0x20)
};

