// Class /Script/FortniteUI.FortTouchControlRegion
// Size: 0x3a0
class UFortTouchControlRegion : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	struct FTimerHandle* AutorunLockDelayHandle; // 0x2a0 (0x8)
	class UFortTouchMoveStick* RegisteredTouchMoveStick; // 0x2a8 (0x8)
	class UFortTouchLookStick* RegisteredTouchLookStick; // 0x2b0 (0x8)
	class UFortAutorunLockZone* RegisteredAutoRunLockTarget; // 0x2b8 (0x8)
	struct FVector2D LastMovePlayerRegionTouchOrigin; // 0x2c0 (0x10)
	struct FVector2D MovePlayerRegionTouchEndPos; // 0x2d0 (0x10)
	struct FVector2D MoveVector; // 0x2e0 (0x10)
	unsigned char bLastLookTouchWasTap; // 0x2f0 (0x1)
	unsigned char bIsLockedOn; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x3]; // 0x2f1 (0x3) 
	float MoveStickLastTouchTime; // 0x2f4 (0x4)
	struct FVector2D MovePlayerRegionLastTouchPos; // 0x2f8 (0x10)
	struct FVector2D RotateCameraRegionLastTouchPos; // 0x308 (0x10)
	struct FVector2D RotateCameraPlayerRegionLastTouchDiff; // 0x318 (0x10)
	float RotateCameraLastTouchTime; // 0x328 (0x4)
	unsigned char unreflected_32c[0x14]; // 0x32c (0x14) 
	class UCurveFloat* RotateInertiaCurve; // 0x340 (0x8)
	struct FVector2D RotateStickPosition; // 0x348 (0x10)
	struct FVector2D LockOnStickOrigin; // 0x358 (0x10)
	struct FVector2D LockOnStickCurrentPos; // 0x368 (0x10)
	unsigned char padding_378[0x28]; // 0x378 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortTouchControlRegion.UpdateLockOnStickPosition (Underlying native function: UpdateLockOnStickPosition 0xa7028e0)
	void UpdateLockOnStickPosition(struct FVector2D& LocalPos); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchControlRegion.UpdateLockOnStickOrigin (Underlying native function: UpdateLockOnStickOrigin 0xa702814)
	void UpdateLockOnStickOrigin(struct FVector2D& LocalPos, bool& IsTouchStartEvent); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchControlRegion.SetMoveStickPos (Underlying native function: SetMoveStickPos 0xa70207c)
	void SetMoveStickPos(struct FVector2D& NewMoveStickPos); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchControlRegion.SetLockOnStickPosition (Underlying native function: SetLockOnStickPosition 0xa701e38)
	void SetLockOnStickPosition(struct FVector2D& LocalPos); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchControlRegion.SetFeedbackPosition (Underlying native function: SetFeedbackPosition 0xa7018c4)
	void SetFeedbackPosition(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.RotatePlayerRegionTick (Underlying native function: RotatePlayerRegionTick 0xa701494)
	void RotatePlayerRegionTick(struct FGeometry& InGeometry, float& DeltaTime); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.ResetTouchState (Underlying native function: ResetTouchState 0xa701480)
	void ResetTouchState(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRotatePlayerRegionTouchStarted (Underlying native function: OnRotatePlayerRegionTouchStarted 0xa7009ec)
	void OnRotatePlayerRegionTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRotatePlayerRegionTouchMoved (Underlying native function: OnRotatePlayerRegionTouchMoved 0xa70081c)
	void OnRotatePlayerRegionTouchMoved(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent, struct FVector2D& MoveDelta); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRotatePlayerRegionTouchLost (Underlying native function: OnRotatePlayerRegionTouchLost 0x87b3f74)
	void OnRotatePlayerRegionTouchLost(int& PointerIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRotatePlayerRegionTouchEnded (Underlying native function: OnRotatePlayerRegionTouchEnded 0xa7006a0)
	void OnRotatePlayerRegionTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRegionTouchStarted (Has no native function)
	void OnRegionTouchStarted(enum EFortTouchControlRegion& Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRegionTouchMoved (Has no native function)
	void OnRegionTouchMoved(enum EFortTouchControlRegion& Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent, struct FVector2D& MoveDelta); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnRegionTouchEnded (Has no native function)
	void OnRegionTouchEnded(enum EFortTouchControlRegion& Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnMovePlayerRegionTouchStarted (Underlying native function: OnMovePlayerRegionTouchStarted 0xa700524)
	void OnMovePlayerRegionTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnMovePlayerRegionTouchMoved (Underlying native function: OnMovePlayerRegionTouchMoved 0xa7003a8)
	void OnMovePlayerRegionTouchMoved(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnMovePlayerRegionTouchLost (Underlying native function: OnMovePlayerRegionTouchLost 0xa57f144)
	void OnMovePlayerRegionTouchLost(int& PointerIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnMovePlayerRegionTouchEnded (Underlying native function: OnMovePlayerRegionTouchEnded 0xa70022c)
	void OnMovePlayerRegionTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnCursorModeChanged (Underlying native function: OnCursorModeChanged 0xa6fff98)
	void OnCursorModeChanged(bool& bCursorModeEnabled, struct FName& ActionName, class UUserWidget*& CustomWidget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnBuildModeChanged (Underlying native function: OnBuildModeChanged 0x71a6cc4)
	void OnBuildModeChanged(bool& bBuildModeEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnAdditionalTouchStarted (Underlying native function: OnAdditionalTouchStarted 0xa6ffd9c)
	void OnAdditionalTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnAdditionalTouchLost (Underlying native function: OnAdditionalTouchLost 0x871af18)
	void OnAdditionalTouchLost(int& PointerIndex); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.OnAdditionalTouchEnded (Underlying native function: OnAdditionalTouchEnded 0xa6ffc20)
	void OnAdditionalTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.MovePlayerRegionTick (Underlying native function: MovePlayerRegionTick 0xa6ffac0)
	void MovePlayerRegionTick(struct FGeometry& InGeometry, float& DeltaTime); // (Native | Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchControlRegion.GetTouchStickRange (Underlying native function: GetTouchStickRange 0xa6fe940)
	float GetTouchStickRange(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

