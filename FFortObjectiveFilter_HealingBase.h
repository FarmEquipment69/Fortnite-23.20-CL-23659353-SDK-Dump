// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_HealingBase
// Size: 0x180
struct FFortObjectiveFilter_HealingBase : FObjectiveFilter
{
	enum EFortHealingIncrementType IncrementBy; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x7]; // 0xd9 (0x7) 
	struct FObjectiveSubjectTags HealingType; // 0xe0 (0x68)
	bool bRequireHealedToFull; // 0x148 (0x1)
	bool bRequireSelfHealing; // 0x149 (0x1)
	unsigned char unreflected_14a[0x2]; // 0x14a (0x2) 
	struct FFloatRange HealingAmount; // 0x14c (0x10)
	struct FFloatRange HealthOverHealed; // 0x15c (0x10)
	struct FFloatRange PercentHealed; // 0x16c (0x10)
	unsigned char padding_17c[0x4]; // 0x17c (0x4)
};

