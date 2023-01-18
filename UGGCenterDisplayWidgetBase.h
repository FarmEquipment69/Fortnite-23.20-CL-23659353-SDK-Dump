// Class /Script/FortniteUI.GGCenterDisplayWidgetBase
// Size: 0x3a0
class UGGCenterDisplayWidgetBase : public UGGWidgetBase
{
	int NumberOfSlotsFlankingLocalPlayer; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct TArray<struct FGGCenterDisplayEntry> CenterDisplayEntries; // 0x340 (0x10)
	unsigned char padding_350[0x50]; // 0x350 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.GGCenterDisplayWidgetBase.UpdateDisplayWith (Has no native function)
	void UpdateDisplayWith(struct TArray<struct FGGCenterDisplayEntry>& Entries, bool& bUpdatingForLocalPlayer); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.GGCenterDisplayWidgetBase.OnOtherPlayerAwardedWeapon (Underlying native function: OnOtherPlayerAwardedWeapon 0xa57f684)
	void OnOtherPlayerAwardedWeapon(class AFortPlayerStateAthena*& OtherPlayer, class UFortWeaponItemDefinition*& NextWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteUI.GGCenterDisplayWidgetBase.OnLocalPlayerAwardedWeapon (Underlying native function: OnLocalPlayerAwardedWeapon 0xa57f24c)
	void OnLocalPlayerAwardedWeapon(class UFortWeaponItemDefinition*& NextWeapon); // (Final | Native | Protected)
};

