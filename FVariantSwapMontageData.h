// ScriptStruct /Script/FortniteGame.VariantSwapMontageData
// Size: 0x30
struct FVariantSwapMontageData
{
	struct FName MontageSectionName; // 0x0 (0x4)
	enum EMontageSelectionPredicateType EvaluationMode; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FGameplayTag VariantMetaTagRequired; // 0x8 (0x4)
	bool bRequireCharacterPart; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct TArray<struct FVariantSwapMontagePartRequirement> PartRequirements; // 0x10 (0x10)
	struct TArray<struct FVariantSwapMontageActiveSwapsRequirement> SwapRequirements; // 0x20 (0x10)
};

