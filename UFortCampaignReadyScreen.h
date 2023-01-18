// Class /Script/FortniteUI.FortCampaignReadyScreen
// Size: 0x3d8
class UFortCampaignReadyScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UClass* CampaignPurchaseScreenClass; // 0x3b0 (0x8)
	class UClass* LoadingContentModalClass; // 0x3b8 (0x8)
	class UClass* SettingsScreenClass; // 0x3c0 (0x8)
	class UDynamicEntryBox* LinesEntryBox; // 0x3c8 (0x8)
	unsigned char padding_3d0[0x8]; // 0x3d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignReadyScreen.ShowSettingsScreen (Underlying native function: ShowSettingsScreen 0xa91b288)
	void ShowSettingsScreen(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignReadyScreen.ShowPurchaseScreen (Underlying native function: ShowPurchaseScreen 0xa91b274)
	void ShowPurchaseScreen(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignReadyScreen.LeavePartyAndPlayTutorial (Underlying native function: LeavePartyAndPlayTutorial 0xa91907c)
	void LeavePartyAndPlayTutorial(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignReadyScreen.InstallSaveTheWorldContent (Underlying native function: InstallSaveTheWorldContent 0xa9189d8)
	void InstallSaveTheWorldContent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignReadyScreen.ConfigureButtons (Has no native function)
	void ConfigureButtons(enum EActivityCheckSolution& Solution); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignReadyScreen.CloseDialog (Underlying native function: CloseDialog 0x6a4a708)
	void CloseDialog(); // (Final | Native | Protected | BlueprintCallable)
};

