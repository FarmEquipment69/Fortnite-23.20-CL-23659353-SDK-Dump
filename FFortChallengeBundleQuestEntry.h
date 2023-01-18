// ScriptStruct /Script/FortniteGame.FortChallengeBundleQuestEntry
// Size: 0x88
struct FFortChallengeBundleQuestEntry
{
	struct TWeakObjectPtr<class UFortQuestItemDefinition> QuestDefinition; // 0x0 (0x28)
	enum EChallengeBundleQuestUnlockType QuestUnlockType; // 0x28 (0x1)
	bool bIsPrerequisite; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	int UnlockValue; // 0x2c (0x4)
	struct FChallengeGiftBoxData RewardGiftBox; // 0x30 (0x38)
	struct FFortItemQuantityPair MenuOverrideRewardPreview; // 0x68 (0xc)
	int QuestChainLength; // 0x74 (0x4)
	enum EChallengeBundleQuestExpireType QuestExpireType; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	int ExpireValue; // 0x7c (0x4)
	bool bAutoPinOnCreation; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

