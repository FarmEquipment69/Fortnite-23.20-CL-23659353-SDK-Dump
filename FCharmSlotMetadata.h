// ScriptStruct /Script/FortniteGame.CharmSlotMetadata
// Size: 0x60
struct FCharmSlotMetadata
{
	struct TEnumAsByte<EFortCustomPartType> AttachToPart; // 0x0 (0x1)
	bool WeaponCharm; // 0x1 (0x1)
	bool BackPresentedCharm; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	struct FName AttachSocket; // 0x4 (0x4)
	struct FGameplayTagQuery MatchCriteria; // 0x8 (0x48)
	struct TArray<struct FCharmPreviewEntry> PreviewList; // 0x50 (0x10)
};

