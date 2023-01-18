// ScriptStruct /Script/FortniteGame.FortVerbMessage_HealingDone
// Size: 0xd0
struct FFortVerbMessage_HealingDone : FFortVerbMessage_Healing
{
	bool bHealedTeammate; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FSubjectTagsPair SubjectHealed; // 0xa8 (0x28)
};

