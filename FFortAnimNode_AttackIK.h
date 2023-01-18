// ScriptStruct /Script/FortniteGame.FortAnimNode_AttackIK
// Size: 0x130
struct FFortAnimNode_AttackIK : FAnimNode_SkeletalControlBase
{
	unsigned char unreflected_c8[0x28]; // 0xc8 (0x28) 
	struct FBoneReference IKHandRootBone; // 0xf0 (0xc)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct TArray<struct FAttackIKHandsDefinition> HandsDefinitions; // 0x100 (0x10)
	struct TEnumAsByte<ECollisionChannel> HandTraceChannel; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	float MaxCastLength; // 0x114 (0x4)
	unsigned char padding_118[0x18]; // 0x118 (0x18)
};

