// ScriptStruct /Script/FortniteGame.FortVerbMessage_KillContribution
// Size: 0xc0
struct FFortVerbMessage_KillContribution : FVerbMessage
{
	bool bAuthorIsKiller; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FSubjectTagsPair KilledActor; // 0x70 (0x28)
	struct FSubjectTagsPair KillerTags; // 0x98 (0x28)
};

