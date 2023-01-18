// Class /Script/FortniteUI.RespawnPerkUnlockCountWidgetBase
// Size: 0x348
class URespawnPerkUnlockCountWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_SpyRumble* CachedMutator; // 0x328 (0x8)
	class UCommonTextBlock* TextBlockRequiredKills; // 0x330 (0x8)
	unsigned char padding_338[0x10]; // 0x338 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.RespawnPerkUnlockCountWidgetBase.UpdateScore (Underlying native function: UpdateScore 0xa580764)
	void UpdateScore(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.RespawnPerkUnlockCountWidgetBase.OnNewTechAvailable (Has no native function)
	void OnNewTechAvailable(int& NewCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnPerkUnlockCountWidgetBase.HandleRequiredKillsForPerkUnlockChanged (Underlying native function: HandleRequiredKillsForPerkUnlockChanged 0xa57e228)
	void HandleRequiredKillsForPerkUnlockChanged(int& KillCount); // (Final | Native | Protected)
};

