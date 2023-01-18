// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_HealingDone
// Size: 0x1f0
struct FFortObjectiveFilter_HealingDone : FFortObjectiveFilter_HealingBase
{
	bool bRequireHealingDoneToTeammate; // 0x180 (0x1)
	unsigned char unreflected_181[0x7]; // 0x181 (0x7) 
	struct FObjectiveSubjectTags SubjectHealed; // 0x188 (0x68)
};

