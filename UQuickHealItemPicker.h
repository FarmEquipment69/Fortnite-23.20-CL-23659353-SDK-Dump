// Class /Script/FortniteGame.QuickHealItemPicker
// Size: 0x78
class UQuickHealItemPicker : public UObject
{
	struct TArray<struct FQuickHealPriority> QuickHealPriorities; // 0x28 (0x10)
	struct FGameplayTag HealingItemComparisonTag; // 0x38 (0x4)
	struct FGameplayTag ShieldItemComparisonTag; // 0x3c (0x4)
	struct FGameplayTagContainer SpecialActionTags; // 0x40 (0x20)
	unsigned char padding_60[0x18]; // 0x60 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.QuickHealItemPicker.HandlePlayerHealthOrShieldChanged (Underlying native function: HandlePlayerHealthOrShieldChanged 0x8a47278)
	void HandlePlayerHealthOrShieldChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.QuickHealItemPicker.HandleOnSafeZoneOccupancyChanged (Underlying native function: HandleOnSafeZoneOccupancyChanged 0x8a471c0)
	void HandleOnSafeZoneOccupancyChanged(class AFortPlayerPawn*& PlayerPawn, bool& bIsInSafeZone); // (Final | Native | Private)

	// Function /Script/FortniteGame.QuickHealItemPicker.HandleLocalPlayerDBNOStateChanged (Underlying native function: HandleLocalPlayerDBNOStateChanged 0x8a471c0)
	void HandleLocalPlayerDBNOStateChanged(class AFortPawn*& Pawn, bool& bNewDBNOState); // (Final | Native | Private)
};

