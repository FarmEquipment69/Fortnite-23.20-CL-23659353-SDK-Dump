// Class /Script/FortniteUI.AthenaCollectionLeaderboardEntry
// Size: 0x2f0
class UAthenaCollectionLeaderboardEntry : public UAthenaCollectionOverlayEntry
{
	struct FText ValueTextFormat; // 0x2b0 (0x18)
	int ValueMinimumFractionalDigits; // 0x2c8 (0x4)
	int ValueMaximumFractionalDigits; // 0x2cc (0x4)
	bool bValueIsFloat; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x7]; // 0x2d1 (0x7) 
	class UCommonTextBlock* TextPlacement; // 0x2d8 (0x8)
	class UCommonRichTextBlock* RichTextValue; // 0x2e0 (0x8)
	class UFortSocialAvatarIcon* AvatarIcon; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionLeaderboardEntry.BP_OnValueSet (Has no native function)
	void BPOnValueSet(float& Value); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionLeaderboardEntry.BP_OnPlacementSet (Has no native function)
	void BPOnPlacementSet(int& Placement); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionLeaderboardEntry.BP_OnLeaderboardEntryReset (Has no native function)
	void BPOnLeaderboardEntryReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionLeaderboardEntry.BP_OnLeaderboardEntryInitialized (Has no native function)
	void BPOnLeaderboardEntryInitialized(bool& bIsLocalPlayer); // (Event | Protected | BlueprintEvent)
};

