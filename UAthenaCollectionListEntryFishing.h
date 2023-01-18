// Class /Script/FortniteUI.AthenaCollectionListEntryFishing
// Size: 0x14d0
class UAthenaCollectionListEntryFishing : public UAthenaCollectionListEntry
{
	struct FName ParamNameItemIcon; // 0x14b8 (0x4)
	struct FName ParamNameIsDiscovered; // 0x14bc (0x4)
	struct FName ParamNameItemSize; // 0x14c0 (0x4)
	struct FName ParamNameHas2Stars; // 0x14c4 (0x4)
	struct FName ParamNameHas3Stars; // 0x14c8 (0x4)
	unsigned char padding_14cc[0x4]; // 0x14cc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionListEntryFishing.BP_OnStarRatingSet (Has no native function)
	void BPOnStarRatingSet(int& StarRating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionListEntryFishing.BP_OnNormalizedLengthSet (Has no native function)
	void BPOnNormalizedLengthSet(float& NormalizedLength, float& NormalizedMinLength, float& NormalizedMaxLength); // (Event | Protected | BlueprintEvent)
};

