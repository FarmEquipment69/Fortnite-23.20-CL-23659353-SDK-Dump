// ScriptStruct /Script/FullBodyIK.FBIKConstraintOption
// Size: 0xa0
struct FFBIKConstraintOption
{
	struct FRigElementKey* Item; // 0x0 (0x8)
	bool bEnabled; // 0x8 (0x1)
	bool bUseStiffness; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	struct FVector LinearStiffness; // 0x10 (0x18)
	struct FVector AngularStiffness; // 0x28 (0x18)
	bool bUseAngularLimit; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FFBIKBoneLimit AngularLimit; // 0x48 (0x20)
	bool bUsePoleVector; // 0x68 (0x1)
	enum EPoleVectorOption PoleVectorOption; // 0x69 (0x1)
	unsigned char unreflected_6a[0x6]; // 0x6a (0x6) 
	struct FVector PoleVector; // 0x70 (0x18)
	struct FRotator OffsetRotation; // 0x88 (0x18)
};

