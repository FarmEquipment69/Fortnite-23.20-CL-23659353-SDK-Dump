// ScriptStruct /Script/FortniteGame.FortVerbMessage_HealingReceived
// Size: 0xd0
struct FFortVerbMessage_HealingReceived : FFortVerbMessage_Healing
{
	bool bHealedByTeammate; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FSubjectTagsPair HealSource; // 0xa8 (0x28)
};

