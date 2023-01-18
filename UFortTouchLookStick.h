// Class /Script/FortniteUI.FortTouchLookStick
// Size: 0x370
class UFortTouchLookStick : public UBacchusHUDElement
{
	class USizeBox* MainSizeBox; // 0x318 (0x8)
	struct TWeakObjectPtr<class UImage> FireImageRef; // 0x320 (0x28)
	struct FVector2D FireImageAbsoluteOffset; // 0x348 (0x10)
	class UBacchusActionButton* ButtonDBNOCarryThrow; // 0x358 (0x8)
	unsigned char padding_360[0x10]; // 0x360 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortTouchLookStick.SetTouchStickPositionLocal (Underlying native function: SetTouchStickPositionLocal 0xa72744c)
	void SetTouchStickPositionLocal(struct FVector2D& TouchPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchLookStick.SetTouchStickPositionAbsolute (Underlying native function: SetTouchStickPositionAbsolute 0xa7273c4)
	void SetTouchStickPositionAbsolute(struct FVector2D& TouchPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchLookStick.SetSize (Underlying native function: SetSize 0xa7272b8)
	void SetSize(float& NewSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchLookStick.SetFiringState (Underlying native function: SetFiringState 0x8524cc8)
	void SetFiringState(bool& IsFiring); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTouchLookStick.OnFireFromIndexStopped (Underlying native function: OnFireFromIndexStopped 0xa7255f8)
	void OnFireFromIndexStopped(int& StopFireIndex); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortTouchLookStick.IsFireButtonUnderTouch (Underlying native function: IsFireButtonUnderTouch 0xa724ff8)
	bool IsFireButtonUnderTouch(struct FVector2D& TouchPosition); // (Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTouchLookStick.GetSize (Underlying native function: GetSize 0xa724b2c)
	float GetSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTouchLookStick.GetShowAllTimeTime (Underlying native function: GetShowAllTimeTime 0xa724b14)
	bool GetShowAllTimeTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

