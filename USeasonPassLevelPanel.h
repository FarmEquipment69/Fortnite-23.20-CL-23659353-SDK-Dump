// Class /Script/FortniteUI.SeasonPassLevelPanel
// Size: 0x4f8
class USeasonPassLevelPanel : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	class UFortSeasonPassLevelInfo* LevelInfo; // 0x4f0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SeasonPassLevelPanel.Setup (Underlying native function: Setup 0xa8aa830)
	void Setup(class UFortSeasonPassLevelInfo*& Info); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.SeasonPassLevelPanel.OnSetup (Has no native function)
	void OnSetup(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelPanel.OnLockedStatusChanged (Has no native function)
	void OnLockedStatusChanged(bool& FreeUnlocked, bool& PaidUnlocked); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelPanel.GetLevelInfo (Underlying native function: GetLevelInfo 0x8725998)
	class UFortSeasonPassLevelInfo* GetLevelInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

