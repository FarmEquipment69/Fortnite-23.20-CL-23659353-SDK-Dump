// ScriptStruct /Script/Synthesis.SourceEffectMotionFilterModulationSettings
// Size: 0x40
struct FSourceEffectMotionFilterModulationSettings
{
	enum ESourceEffectMotionFilterModSource ModulationSource; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector2D ModulationInputRange; // 0x8 (0x10)
	struct FVector2D ModulationOutputMinimumRange; // 0x18 (0x10)
	struct FVector2D ModulationOutputMaximumRange; // 0x28 (0x10)
	float UpdateEaseMS; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

