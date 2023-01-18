// Class /Script/FortniteUI.BacchusHUDElement
// Size: 0x318
class UBacchusHUDElement : public UFortMobileHUDElement
{
	bool bHideWhenNotUsingTouch; // 0x2f8 (0x1)
	bool bUpdatesWithHUDState; // 0x2f9 (0x1)
	bool bAlwaysShow; // 0x2fa (0x1)
	enum EBacchusHUDStateType OnInBuildMode; // 0x2fb (0x1)
	enum EBacchusHUDStateType OnInCombatMode; // 0x2fc (0x1)
	enum EBacchusHUDStateType OnInEditMode; // 0x2fd (0x1)
	enum EBacchusHUDStateType OnInCreativeMode; // 0x2fe (0x1)
	enum EBacchusHUDStateType OnInBattleLabMode; // 0x2ff (0x1)
	enum EBacchusHUDStateType isFreeFalling; // 0x300 (0x1)
	enum EBacchusHUDStateType IsGliding; // 0x301 (0x1)
	enum EBacchusHUDStateType CanOpenChute; // 0x302 (0x1)
	enum EBacchusHUDStateType InLockedBus; // 0x303 (0x1)
	enum EBacchusHUDStateType InUnlockedBus; // 0x304 (0x1)
	enum EBacchusHUDStateType OnTargeting; // 0x305 (0x1)
	enum EBacchusHUDStateType OnUsingScopeTargeting; // 0x306 (0x1)
	enum EBacchusHUDStateType OnCanTarget; // 0x307 (0x1)
	enum EBacchusHUDStateType OnCanUseScopeTargeting; // 0x308 (0x1)
	enum EBacchusHUDStateType OnCrouching; // 0x309 (0x1)
	enum EBacchusHUDStateType OnCanUseSecondaryAbility; // 0x30a (0x1)
	enum EBacchusHUDStateType OnDBNO; // 0x30b (0x1)
	enum EBacchusHUDStateType OnCarryingDBNO; // 0x30c (0x1)
	enum EBacchusHUDStateType OnCarryingHeldObject; // 0x30d (0x1)
	enum EBacchusHUDStateType OnImprovedDBNO; // 0x30e (0x1)
	enum EBacchusHUDStateType OnControllingRCPawn; // 0x30f (0x1)
	enum EBacchusHUDStateType OnInVehicle; // 0x310 (0x1)
	enum EBacchusHUDStateType OnDrivingVehicle; // 0x311 (0x1)
	enum EBacchusHUDStateType OnZiplining; // 0x312 (0x1)
	unsigned char padding_313[0x5]; // 0x313 (0x5)

	/* Functions */

	// Function /Script/FortniteUI.BacchusHUDElement.ShowHighlight (Has no native function)
	void ShowHighlight(bool& Show); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusHUDElement.OnHUDStateUpdate (Underlying native function: OnHUDStateUpdate 0xa5a3c80)
	void OnHUDStateUpdate(struct FFortHUDState& NewState); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.BacchusHUDElement.HandleInputMethodChanged (Underlying native function: HandleInputMethodChanged 0xa5a31b4)
	void HandleInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Final | Native | Protected)
};

