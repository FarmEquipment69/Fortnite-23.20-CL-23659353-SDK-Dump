// ScriptStruct /Script/FortniteGame.AthenaRewardItemReference
// Size: 0xa0
struct FAthenaRewardItemReference
{
	struct TWeakObjectPtr<class UFortItemDefinition> ItemDefinition; // 0x0 (0x28)
	struct FString TemplateId; // 0x28 (0x10)
	int Quantity; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FChallengeGiftBoxData RewardGiftBox; // 0x40 (0x38)
	bool IsChaseReward; // 0x78 (0x1)
	enum EAthenaRewardItemType RewardType; // 0x79 (0x1)
	enum EAthenaRewardVisualImportanceType RewardVisualImportanceType; // 0x7a (0x1)
	unsigned char unreflected_7b[0x5]; // 0x7b (0x5) 
	struct TArray<struct FAdditionalVariantSet> PreviewVariantSets; // 0x80 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> AdditionalPreviewVariants; // 0x90 (0x10)
};

