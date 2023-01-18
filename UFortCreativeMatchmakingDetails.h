// Class /Script/FortniteUI.FortCreativeMatchmakingDetails
// Size: 0x3f0
class UFortCreativeMatchmakingDetails : public UCommonActivatableWidget
{
	class UCommonButtonBase* ButtonConfirm; // 0x3a8 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x3b0 (0x8)
	struct TArray<class UCommonTextBlock*> TextBullets; // 0x3b8 (0x10)
	class UCommonTextBlock* TextIslandName; // 0x3c8 (0x8)
	class UCommonTextBlock* TextLinkCode; // 0x3d0 (0x8)
	class UCommonTextBlock* TextCreator; // 0x3d8 (0x8)
	class UCommonTextBlock* TextPlayerCount; // 0x3e0 (0x8)
	class UCommonTextBlock* TextIslandDescription; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.SetupInfo (Underlying native function: SetupInfo 0xa6939fc)
	void SetupInfo(struct FCreativeLoadedLinkData& LinkData); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.Open (Underlying native function: Open 0xa693340)
	void Open(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.Close (Underlying native function: Close 0x6a4a708)
	void Close(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.BP_SetupInfo (Has no native function)
	void BPSetupInfo(struct FCreativeLoadedLinkData& LinkData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.BP_Open (Has no native function)
	void BPOpen(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.BP_InitialSetup (Has no native function)
	void BPInitialSetup(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.BP_Confirm (Has no native function)
	void BPConfirm(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeMatchmakingDetails.BP_Cancel (Has no native function)
	void BPCancel(); // (Event | Protected | BlueprintEvent)
};

