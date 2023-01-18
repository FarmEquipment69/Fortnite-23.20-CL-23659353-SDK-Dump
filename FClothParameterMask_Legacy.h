// ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Size: 0x28
struct FClothParameterMask_Legacy
{
	struct FName MaskName; // 0x0 (0x4)
	enum EWeightMapTargetCommon CurrentTarget; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float MaxValue; // 0x8 (0x4)
	float MinValue; // 0xc (0x4)
	struct TArray<float> Values; // 0x10 (0x10)
	bool bEnabled; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

