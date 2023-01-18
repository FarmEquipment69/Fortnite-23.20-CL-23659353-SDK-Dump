// Class /Script/FortniteUI.FortStandaloneFrontend
// Size: 0x5e0
class UFortStandaloneFrontend : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	bool bCosmeticRefreshOnClose; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x3]; // 0x3b9 (0x3) 
	float DelayCloseActionTimeSeconds; // 0x3bc (0x4)
	class UFortPocketLevel* PocketLevel; // 0x3c0 (0x8)
	class UPocketLevelInstance* PocketLevelInstance; // 0x3c8 (0x8)
	struct FVector CameraLevelLocation; // 0x3d0 (0x18)
	struct FDataTableRowHandle BackActionRowHandle; // 0x3e8 (0x10)
	class UCommonWidgetSwitcherLegacy* SwitcherTabContent; // 0x3f8 (0x8)
	class UWidget* ContentLoadingIndicator; // 0x400 (0x8)
	unsigned char unreflected_408[0x10]; // 0x408 (0x10) 
	bool bCloseOnDelayEnd; // 0x418 (0x1)
	unsigned char unreflected_419[0x7]; // 0x419 (0x7) 
	struct FFortAthenaLoadout InitialLoadoutData; // 0x420 (0x178)
	class UCommonButtonBase* ButtonCloseMobile; // 0x598 (0x8)
	struct FMulticastInlineDelegate OnMenuClosed; // 0x5a0 (0x10)
	unsigned char unreflected_5b0[0x10]; // 0x5b0 (0x10) 
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x5c0 (0x3)
	unsigned char padding_5c3[0x1d]; // 0x5c3 (0x1d)

	/* Functions */

	// Function /Script/FortniteUI.FortStandaloneFrontend.TriggerIncrementalGC (Underlying native function: TriggerIncrementalGC 0xa7027ec)
	static void TriggerIncrementalGC(); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandaloneFrontend.OnLoadingIndicatorShown (Has no native function)
	void OnLoadingIndicatorShown(bool& bShown); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStandaloneFrontend.OnCameraLevelLoaded (Has no native function)
	void OnCameraLevelLoaded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStandaloneFrontend.OnBeginLoadingCameraLevel (Has no native function)
	void OnBeginLoadingCameraLevel(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStandaloneFrontend.HandleCloseRefreshComplete (Underlying native function: HandleCloseRefreshComplete 0xa6feb18)
	void HandleCloseRefreshComplete(class AFortPlayerPawn*& FortPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortStandaloneFrontend.HandleCloseAction (Underlying native function: HandleCloseAction 0xa6feb04)
	void HandleCloseAction(); // (Final | 0x00000002 | Native | Protected | BlueprintCallable)
};

