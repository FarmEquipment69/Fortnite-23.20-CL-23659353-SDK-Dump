// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_SquadMemberDealtDamage
// Size: 0x228
struct FFortObjectiveFilter_SquadMemberDealtDamage : FObjectiveFilter
{
	struct FObjectiveSubjectTags SquadMember; // 0xd8 (0x68)
	struct FObjectiveSubjectTags DamagedTargetInfo; // 0x140 (0x68)
	struct FObjectiveSubjectTags DamageSourceInfo; // 0x1a8 (0x68)
	bool bIncrementByDamageAmount; // 0x210 (0x1)
	unsigned char unreflected_211[0x3]; // 0x211 (0x3) 
	struct FInt32Range DamageRange; // 0x214 (0x10)
	unsigned char padding_224[0x4]; // 0x224 (0x4)
};

