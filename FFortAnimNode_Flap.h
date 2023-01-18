// ScriptStruct /Script/FortniteGame.FortAnimNode_Flap
// Size: 0xf0
struct FFortAnimNode_Flap : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FSourceDriver> SourceDrives; // 0xc8 (0x10)
	struct FBoneReference TargetBone; // 0xd8 (0xc)
	struct TEnumAsByte<EComponentType> TargetComponent; // 0xe4 (0x1)
	enum ESourceSelectionMode SelectionMode; // 0xe5 (0x1)
	bool bUseClamp; // 0xe6 (0x1)
	unsigned char unreflected_e7[0x1]; // 0xe7 (0x1) 
	float TargetClampMin; // 0xe8 (0x4)
	float TargetClampMax; // 0xec (0x4)
};

