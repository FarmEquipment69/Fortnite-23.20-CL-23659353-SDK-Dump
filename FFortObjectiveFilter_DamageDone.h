// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_DamageDone
// Size: 0x248
struct FFortObjectiveFilter_DamageDone : FObjectiveFilter
{
	struct FDoubleRange Distance; // 0xd8 (0x20)
	struct FObjectiveSubjectTags DamageSource; // 0xf8 (0x68)
	struct FObjectiveSubjectTags DamagedActor; // 0x160 (0x68)
	struct FObjectiveSubjectTags DamageType; // 0x1c8 (0x68)
	bool bAllowSelfInflictedDamage; // 0x230 (0x1)
	bool bIncrementByDamageAmount; // 0x231 (0x1)
	unsigned char unreflected_232[0x2]; // 0x232 (0x2) 
	struct FInt32Range DamageRange; // 0x234 (0x10)
	unsigned char padding_244[0x4]; // 0x244 (0x4)
};

