// Class /Script/FortniteGame.FortEventQuestMapDataAsset
// Size: 0xc8
class UFortEventQuestMapDataAsset : public UFortQuestMapDataAsset
{
	struct FText EventCalloutTitle; // 0x40 (0x18)
	struct FText EventCalloutDescription; // 0x58 (0x18)
	class UMaterialInterface* EventCalloutImage; // 0x70 (0x8)
	class USoundBase* EventCalloutOverrideSound; // 0x78 (0x8)
	struct FSlateColor EventArrowColor; // 0x80 (0x14)
	struct FSlateColor EventArrowShadowColor; // 0x94 (0x14)
	struct FString EventCalloutQuestFlag; // 0xa8 (0x10)
	class UFortQuestItemDefinition* RequiredCompletedQuest; // 0xb8 (0x8)
	bool bOnlyDisplayIfRequiredCompletedQuest; // 0xc0 (0x1)
	unsigned char padding_c1[0x7]; // 0xc1 (0x7)
};

