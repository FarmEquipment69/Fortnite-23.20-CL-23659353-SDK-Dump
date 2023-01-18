// Class /Script/FortniteUI.BacchusAvailablePickupsDisplay
// Size: 0x348
class UBacchusAvailablePickupsDisplay : public UBacchusHUDElement
{
	class UClass* ListCollapsedButtonStyle; // 0x318 (0x8)
	class UClass* ListVisibleButtonStyle; // 0x320 (0x8)
	class UCommonButtonLegacy* ButtonToggleVisibility; // 0x328 (0x8)
	class UFortDynamicEntryBox* EntryBoxPickupButtons; // 0x330 (0x8)
	struct TArray<struct TWeakObjectPtr<class AFortPickup>> CurrentPickupArray; // 0x338 (0x10)
};

