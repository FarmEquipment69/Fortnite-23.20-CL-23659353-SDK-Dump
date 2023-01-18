// ScriptStruct /Script/FortniteGame.FortChallengeBundleScheduleEntry
// Size: 0x68
struct FFortChallengeBundleScheduleEntry
{
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> ChallengeBundle; // 0x0 (0x28)
	enum EChallengeScheduleUnlockType UnlockType; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	int UnlockValue; // 0x2c (0x4)
	struct FChallengeGiftBoxData GiftBox; // 0x30 (0x38)
};

