// Class /Script/GameplayTags.GameplayTagsSettings
// Size: 0xb8
class UGameplayTagsSettings : public UGameplayTagsList
{
	bool ImportTagsFromConfig; // 0x48 (0x1)
	bool WarnOnInvalidTags; // 0x49 (0x1)
	bool ClearInvalidTags; // 0x4a (0x1)
	bool AllowEditorTagUnloading; // 0x4b (0x1)
	bool AllowGameTagUnloading; // 0x4c (0x1)
	bool FastReplication; // 0x4d (0x1)
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	struct FString InvalidTagCharacters; // 0x50 (0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x60 (0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x70 (0x10)
	struct TArray<struct FGameplayTagRedirect*> GameplayTagRedirects; // 0x80 (0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90 (0x10)
	int NumBitsForContainerSize; // 0xa0 (0x4)
	int NetIndexFirstBitSegment; // 0xa4 (0x4)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8 (0x10)
};

