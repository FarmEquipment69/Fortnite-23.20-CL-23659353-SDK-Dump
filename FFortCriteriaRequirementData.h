// ScriptStruct /Script/FortniteGame.FortCriteriaRequirementData
// Size: 0x18
struct FFortCriteriaRequirementData : FTableRowBase
{
	struct FGameplayTag RequiredTag; // 0x8 (0x4)
	bool bGlobalMod; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float ModValue; // 0x10 (0x4)
	bool bRequireRarity; // 0x14 (0x1)
	enum EFortRarity RequiredRarity; // 0x15 (0x1)
	unsigned char padding_16[0x2]; // 0x16 (0x2)
};

