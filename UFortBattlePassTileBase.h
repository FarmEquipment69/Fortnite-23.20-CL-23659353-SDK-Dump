// Class /Script/BattlePassBase.FortBattlePassTileBase
// Size: 0x1540
class UFortBattlePassTileBase : public UFortHoldableButton
{
	enum ERewardPageType RewardPageType; // 0x1480 (0x1)
	unsigned char unreflected_1481[0x7]; // 0x1481 (0x7) 
	class USizeBox* SizeBoxContent; // 0x1488 (0x8)
	struct TMap<struct FName, struct FLinearColor> TileColors; // 0x1490 (0x50)
	struct FLinearColor OverlayDimColor; // 0x14e0 (0x10)
	struct FVector2D TileDesiredCellSpan; // 0x14f0 (0x10)
	float UnitHeight; // 0x1500 (0x4)
	float UnitWidth; // 0x1504 (0x4)
	unsigned char padding_1508[0x38]; // 0x1508 (0x38)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetState (Underlying native function: SetState 0x7270e98)
	void SetState(enum BattlePassTileAvailabilityStates& NewState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetSize (Underlying native function: SetSize 0x7270dc8)
	void SetSize(enum EPageItemTileSize& TileSize, struct FVector2D& CellSpacing); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnStateChanged (Has no native function)
	void OnStateChanged(enum BattlePassTileAvailabilityStates& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSizeChanged (Has no native function)
	void OnSizeChanged(struct FVector2D& NewSize); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetTileColors (Has no native function)
	void OnSetTileColors(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass (Has no native function)
	void OnSetRequiresBattlePass(bool& bRequiresBP); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnRevealed (Has no native function)
	void OnRevealed(); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnPeeked (Has no native function)
	void OnPeeked(); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsOwned (Underlying native function: IsOwned 0x7270cdc)
	bool IsOwned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsLocked (Underlying native function: IsLocked 0x7270cc0)
	bool IsLocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsAvailable (Underlying native function: IsAvailable 0x7270ca4)
	bool IsAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassTileBase.GetState (Underlying native function: GetState 0x7270758)
	enum BattlePassTileAvailabilityStates GetState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

