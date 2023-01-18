// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_DamageTaken
// Size: 0x1e0
struct FFortObjectiveFilter_DamageTaken : FObjectiveFilter
{
	struct FDoubleRange Distance; // 0xd8 (0x20)
	struct FObjectiveSubjectTags DamageSource; // 0xf8 (0x68)
	struct FObjectiveSubjectTags DamageType; // 0x160 (0x68)
	bool bAllowSelfInflictedDamage; // 0x1c8 (0x1)
	bool bIncrementByDamageAmount; // 0x1c9 (0x1)
	unsigned char unreflected_1ca[0x2]; // 0x1ca (0x2) 
	struct FInt32Range DamageRange; // 0x1cc (0x10)
	unsigned char padding_1dc[0x4]; // 0x1dc (0x4)
};

