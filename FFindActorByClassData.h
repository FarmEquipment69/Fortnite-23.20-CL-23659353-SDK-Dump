// ScriptStruct /Script/FortniteGame.FindActorByClassData
// Size: 0x150
struct FFindActorByClassData
{
	unsigned char ClassFilter_0[0x8]; // 0x0 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> ObjectTypes; // 0x8 (0x10)
	struct FGameplayTagQuery TargetFilter; // 0x18 (0x48)
	struct FScalableFloat MaxToFind; // 0x60 (0x28)
	struct FScalableFloat MaxRadius; // 0x88 (0x28)
	struct FScalableFloat ShowToSquad; // 0xb0 (0x28)
	struct FScalableFloat ShowMarkerDetails; // 0xd8 (0x28)
	struct FScalableFloat Price; // 0x100 (0x28)
	struct FScalableFloat Rarity; // 0x128 (0x28)
};

