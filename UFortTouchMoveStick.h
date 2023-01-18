// Class /Script/FortniteUI.FortTouchMoveStick
// Size: 0x350
class UFortTouchMoveStick : public UBacchusHUDElement
{
	bool bIsTouched; // 0x318 (0x1)
	unsigned char bMoveStickIsLocked; // 0x319 (0x1)
	bool bAlwaysShowWhenTouched; // 0x31a (0x1)
	unsigned char unreflected_31b[0x1]; // 0x31b (0x1) 
	float TouchStartTime; // 0x31c (0x4)
	float LastTouchTime; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct FVector2D TouchStartPos; // 0x328 (0x10)
	struct FVector2D MoveStickPos; // 0x338 (0x10)
	struct FGameplayTag AlwaysShowPropertyTag; // 0x348 (0x4)
	unsigned char padding_34c[0x4]; // 0x34c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortTouchMoveStick.SetStickPositionBP (Has no native function)
	void SetStickPositionBP(struct FVector2D& NewPosition); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchMoveStick.SetStickPosition (Underlying native function: SetStickPosition 0xa72733c)
	void SetStickPosition(struct FVector2D& NewPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchMoveStick.SetMovementLockStatus (Underlying native function: SetMovementLockStatus 0x73f3f74)
	void SetMovementLockStatus(bool& MovementIsLocked); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchMoveStick.IsTouched (Underlying native function: IsTouched 0xa72513c)
	bool IsTouched(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTouchMoveStick.IsLocked (Underlying native function: IsLocked 0xa725120)
	bool IsLocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTouchMoveStick.HandleTouchStarted (Underlying native function: HandleTouchStarted 0x8d3c318)
	void HandleTouchStarted(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchMoveStick.HandleTouchEnded (Underlying native function: HandleTouchEnded 0x8d3da58)
	void HandleTouchEnded(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchMoveStick.GetStickPosition (Underlying native function: GetStickPosition 0xa724be8)
	struct FVector2D GetStickPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTouchMoveStick.GetHalfHeight (Underlying native function: GetHalfHeight 0xa723b5c)
	float GetHalfHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

