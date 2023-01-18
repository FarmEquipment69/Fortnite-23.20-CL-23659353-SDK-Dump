// Class /Script/Engine.PlayerInput
// Size: 0x498
class UPlayerInput : public UObject
{
	unsigned char unreflected_28[0x178]; // 0x28 (0x178) 
	struct TArray<struct FKeyBind> DebugExecBindings; // 0x1a0 (0x10)
	unsigned char unreflected_1b0[0x30]; // 0x1b0 (0x30) 
	struct TArray<struct FName> InvertedAxis; // 0x1e0 (0x10)
	unsigned char padding_1f0[0x2a8]; // 0x1f0 (0x2a8)

	/* Functions */

	// Function /Script/Engine.PlayerInput.SetMouseSensitivity (Underlying native function: SetMouseSensitivity 0x9fc7268)
	void SetMouseSensitivity(float& Sensitivity); // (Final | Exec | Native | Public)

	// Function /Script/Engine.PlayerInput.SetBind (Underlying native function: SetBind 0x9fc7070)
	void SetBind(struct FName& BindName, struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/Engine.PlayerInput.InvertAxisKey (Underlying native function: InvertAxisKey 0x9fc3fc8)
	void InvertAxisKey(struct FKey& AxisKey); // (Final | Exec | Native | Public)

	// Function /Script/Engine.PlayerInput.InvertAxis (Underlying native function: InvertAxis 0x9fc3f48)
	void InvertAxis(struct FName& AxisName); // (Final | Exec | Native | Public)

	// Function /Script/Engine.PlayerInput.GetOuterAPlayerController (Underlying native function: GetOuterAPlayerController 0x9fc3f08)
	class APlayerController* GetOuterAPlayerController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerInput.ClearSmoothing (Underlying native function: ClearSmoothing 0x9fc3b24)
	void ClearSmoothing(); // (Final | Exec | Native | Public)
};

