// Class /Script/Engine.InputComponent
// Size: 0x128
class UInputComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x70]; // 0xa0 (0x70) 
	struct TArray<struct FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x110 (0x10)
	unsigned char padding_120[0x8]; // 0x120 (0x8)

	/* Functions */

	// Function /Script/Engine.InputComponent.WasControllerKeyJustReleased (Underlying native function: WasControllerKeyJustReleased 0x9cf7728)
	bool WasControllerKeyJustReleased(struct FKey& Key); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.WasControllerKeyJustPressed (Underlying native function: WasControllerKeyJustPressed 0x9cf7728)
	bool WasControllerKeyJustPressed(struct FKey& Key); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.OnInputOwnerEndPlayed (Underlying native function: OnInputOwnerEndPlayed 0x2485920)
	void OnInputOwnerEndPlayed(class AActor*& InOwner, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)

	// Function /Script/Engine.InputComponent.IsControllerKeyDown (Underlying native function: IsControllerKeyDown 0x9cf7728)
	bool IsControllerKeyDown(struct FKey& Key); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.GetTouchState (Underlying native function: GetTouchState 0x9cf7500)
	void GetTouchState(int& FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.GetControllerVectorKeyState (Underlying native function: GetControllerVectorKeyState 0x9cf7200)
	struct FVector GetControllerVectorKeyState(struct FKey& Key); // (Final | Native | Private | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.GetControllerMouseDelta (Underlying native function: GetControllerMouseDelta 0x9cf7154)
	void GetControllerMouseDelta(float& DeltaX, float& DeltaY); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.GetControllerKeyTimeDown (Underlying native function: GetControllerKeyTimeDown 0x9cf6f8c)
	float GetControllerKeyTimeDown(struct FKey& Key); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.GetControllerAnalogStickState (Underlying native function: GetControllerAnalogStickState 0x9cf706c)
	void GetControllerAnalogStickState(struct TEnumAsByte<EControllerAnalogStick>& WhichStick, float& StickX, float& StickY); // (Final | Native | Private | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InputComponent.GetControllerAnalogKeyState (Underlying native function: GetControllerAnalogKeyState 0x9cf6f8c)
	float GetControllerAnalogKeyState(struct FKey& Key); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

