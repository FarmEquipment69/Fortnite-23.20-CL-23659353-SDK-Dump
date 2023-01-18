// ScriptStruct /Script/FortniteGame.FortObjectiveFilter_HealingReceived
// Size: 0x1f0
struct FFortObjectiveFilter_HealingReceived : FFortObjectiveFilter_HealingBase
{
	bool bRequireHealingReceivedFromTeammate; // 0x180 (0x1)
	unsigned char unreflected_181[0x7]; // 0x181 (0x7) 
	struct FObjectiveSubjectTags HealSource; // 0x188 (0x68)
};

