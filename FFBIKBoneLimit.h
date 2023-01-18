// ScriptStruct /Script/FullBodyIK.FBIKBoneLimit
// Size: 0x20
struct FFBIKBoneLimit
{
	enum EFBIKBoneLimitType LimitTypeX; // 0x0 (0x1)
	enum EFBIKBoneLimitType LimitTypeY; // 0x1 (0x1)
	enum EFBIKBoneLimitType LimitTypeZ; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FVector Limit; // 0x8 (0x18)
};

