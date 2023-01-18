// Class /Script/FortniteUI.AthenaCollectionPlayerProgress
// Size: 0x2b0
class UAthenaCollectionPlayerProgress : public UCommonUserWidget
{
	class UCommonTextBlock* TextPlayerName; // 0x290 (0x8)
	class UCommonTextBlock* TextProgress; // 0x298 (0x8)
	class UFortSocialAvatarIcon* AvatarIcon; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgress.IsLocalPlayer (Underlying native function: IsLocalPlayer 0xa4e2360)
	bool IsLocalPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgress.GetNumCollected (Underlying native function: GetNumCollected 0x899c008)
	int GetNumCollected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgress.BP_OnShowPlayerInfoSet (Has no native function)
	void BPOnShowPlayerInfoSet(bool& bShowPlayerInfo); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionPlayerProgress.BP_OnPlayerProgressInitialized (Has no native function)
	void BPOnPlayerProgressInitialized(bool& bIsLocalPlayer, int& NumCollected, int& NumToCollect); // (Event | Protected | BlueprintEvent)
};

