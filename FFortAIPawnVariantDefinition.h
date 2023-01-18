// ScriptStruct /Script/FortniteAI.FortAIPawnVariantDefinition
// Size: 0x68
struct FFortAIPawnVariantDefinition
{
	class UClass* PawnClass; // 0x0 (0x8)
	struct FCurveTableRowHandle VariantWeightCurve; // 0x8 (0x10)
	float CurrentWeight; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagQuery RequiredTagsQuery; // 0x20 (0x48)
};

