// Class /Script/FortniteGame.AthenaQuestCategoryGlobalData
// Size: 0x78
class UAthenaQuestCategoryGlobalData : public UDataAsset
{
	class UQuestCategoryData* FallbackQuestCategory; // 0x30 (0x8)
	struct TArray<enum EFortQuestSubtype> ExcludedQuestSubTypes; // 0x38 (0x10)
	struct TWeakObjectPtr<class UObject> DefaultCategoryDisplayAsset; // 0x48 (0x28)
	int HighPrioritySortThresholdHrs; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

