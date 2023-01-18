// Class /Script/FortniteGame.FortCreativeTimerObjective
// Size: 0xf08
class AFortCreativeTimerObjective : public ABuildingProp
{
	unsigned char unreflected_ee8[0x8]; // 0xee8 (0x8) 
	struct FTimerObjectiveHUDData* HUDData; // 0xef0 (0x8)
	class AFortVolume* Volume; // 0xef8 (0x8)
	bool MaintainInteractionWhileLookingAround; // 0xf00 (0x1)
	unsigned char padding_f01[0x7]; // 0xf01 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTimerObjective.SetHUDData (Underlying native function: SetHUDData 0x87d2400)
	void SetHUDData(struct FTimerObjectiveHUDData*& NewHUDData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.OnGameStateSet (Underlying native function: OnGameStateSet 0x87d1c8c)
	void OnGameStateSet(class AFortGameState*& GameState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BroadcastUpdateToHUD (Underlying native function: BroadcastUpdateToHUD 0x87cda28)
	void BroadcastUpdateToHUD(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BP_IsHUDVisible (Has no native function)
	bool BPIsHUDVisible(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BP_GetLabelText (Has no native function)
	struct FText BPGetLabelText(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BP_GetDisplayTextStyle (Has no native function)
	struct FName BPGetDisplayTextStyle(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.AddTimerObjectiveToVolume (Underlying native function: AddTimerObjectiveToVolume 0x87cd63c)
	void AddTimerObjectiveToVolume(); // (Final | Native | Protected)
};

