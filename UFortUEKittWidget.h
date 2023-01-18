// Class /Script/FortniteUI.FortUEKittWidget
// Size: 0x4a0
class UFortUEKittWidget : public UCommonActivatableWidget
{
	class UUEKittTexture* DisplayTexture; // 0x3a8 (0x8)
	bool bDisableWorldRendering; // 0x3b0 (0x1)
	bool bAddAccountIdToUrl; // 0x3b1 (0x1)
	bool bDelayedClose; // 0x3b2 (0x1)
	unsigned char unreflected_3b3[0x1]; // 0x3b3 (0x1) 
	float CloseDelay; // 0x3b4 (0x4)
	bool bSendKeyOnOpenClose; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x3]; // 0x3b9 (0x3) 
	struct FName OpenCloseKey; // 0x3bc (0x4)
	bool bEnableDynamicResolution; // 0x3c0 (0x1)
	unsigned char unreflected_3c1[0x17]; // 0x3c1 (0x17) 
	class UCommonButtonLegacy* ButtonMatchmakingMode; // 0x3d8 (0x8)
	class UFortLocalPlayer* LocalPlayer; // 0x3e0 (0x8)
	class UFortGameInstance* GameInstance; // 0x3e8 (0x8)
	class AFortPlayerController* PlayerController; // 0x3f0 (0x8)
	struct FString KittURL; // 0x3f8 (0x10)
	unsigned char padding_408[0x98]; // 0x408 (0x98)

	/* Functions */

	// Function /Script/FortniteUI.FortUEKittWidget.Setup (Underlying native function: Setup 0x70dc11c)
	void Setup(class UCommonButtonLegacy*& InButton, bool& bInAddToViewport); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUEKittWidget.Open (Underlying native function: Open 0x26daa0c)
	void Open(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUEKittWidget.GetSetupDone (Underlying native function: GetSetupDone 0x2d0124c)
	bool GetSetupDone(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUEKittWidget.Close (Underlying native function: Close 0x26daa0c)
	void Close(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUEKittWidget.CheckEnabledForPlayer (Underlying native function: CheckEnabledForPlayer 0xa7233a0)
	bool CheckEnabledForPlayer(class UWidget*& ParentWidget); // (Final | Native | Public | BlueprintCallable)
};

