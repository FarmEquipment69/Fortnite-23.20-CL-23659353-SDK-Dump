// ScriptStruct /Script/FortniteGame.FortTheaterRuntimeData
// Size: 0x640
struct FFortTheaterRuntimeData
{
	enum EFortTheaterType TheaterType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FGameplayTagContainer TheaterTags; // 0x8 (0x20)
	struct TArray<struct FEventDependentTag> EventDependentTheaterTags; // 0x28 (0x10)
	struct FFortRequirementsInfo TheaterVisibilityRequirements; // 0x38 (0x60)
	struct FFortRequirementsInfo Requirements; // 0x98 (0x60)
	enum ESubGame RequiredSubGameForVisibility; // 0xf8 (0x1)
	bool bOnlyMatchLinkedQuestsToTiles; // 0xf9 (0x1)
	unsigned char unreflected_fa[0x6]; // 0xfa (0x6) 
	class UClass* WorldMapPinClass; // 0x100 (0x8)
	class UTexture2D* TheaterImage; // 0x108 (0x8)
	struct FFortMultiSizeBrush TheaterImages; // 0x110 (0x480)
	struct FFortTheaterColorInfo TheaterColorInfo; // 0x590 (0x18)
	struct FName Socket; // 0x5a8 (0x4)
	unsigned char unreflected_5ac[0x4]; // 0x5ac (0x4) 
	struct FFortRequirementsInfo MissionAlertRequirements; // 0x5b0 (0x60)
	struct TArray<struct FFortMissionAlertRuntimeData*> MissionAlertCategoryRequirements; // 0x610 (0x10)
	struct TArray<struct FFortTheaterGameplayModifier> GameplayModifierList; // 0x620 (0x10)
	float HighestDifficulty; // 0x630 (0x4)
	unsigned char padding_634[0xc]; // 0x634 (0xc)
};

