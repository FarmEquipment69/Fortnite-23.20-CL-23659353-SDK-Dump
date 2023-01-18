// ScriptStruct /Script/Water.UnderwaterPostProcessSettings
// Size: 0x700
struct FUnderwaterPostProcessSettings
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Priority; // 0x4 (0x4)
	float BlendRadius; // 0x8 (0x4)
	float BlendWeight; // 0xc (0x4)
	struct FPostProcessSettings PostProcessSettings; // 0x10 (0x6e0)
	class UMaterialInterface* UnderwaterPostProcessMaterial; // 0x6f0 (0x8)
	unsigned char padding_6f8[0x8]; // 0x6f8 (0x8)
};

