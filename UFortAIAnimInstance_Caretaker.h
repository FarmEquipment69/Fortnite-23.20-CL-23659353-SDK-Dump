// Class /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker
// Size: 0x5c0
class UFortAIAnimInstance_Caretaker : public UFortAIAnimInstance
{
	bool bIsMoving; // 0x570 (0x1)
	unsigned char unreflected_571[0x3]; // 0x571 (0x3) 
	float WalkPlayRate; // 0x574 (0x4)
	float AimOffsetCurve; // 0x578 (0x4)
	bool bFootPhaseStopLeftPlant; // 0x57c (0x1)
	bool bFootPhaseStopLeftPass; // 0x57d (0x1)
	bool bFootPhaseStopRightPlant; // 0x57e (0x1)
	bool bFootPhaseStopRightPass; // 0x57f (0x1)
	float BreathingCurve; // 0x580 (0x4)
	float MovingTreshold; // 0x584 (0x4)
	struct FName CurveNameAimOffsetCurve; // 0x588 (0x4)
	struct FName CurveNameFootPhase; // 0x58c (0x4)
	struct FName CurveNameBreathingCurve; // 0x590 (0x4)
	struct FName SocketNameFXChest; // 0x594 (0x4)
	struct FName ParamNameChestSocketLocation; // 0x598 (0x4)
	struct FName ParamNameChestSocketVector; // 0x59c (0x4)
	float FirstFootPhaseMin; // 0x5a0 (0x4)
	float SecondFootPhaseMin; // 0x5a4 (0x4)
	float ThirdFootPhaseMin; // 0x5a8 (0x4)
	float FourthFootPhaseMin; // 0x5ac (0x4)
	float FootPhaseMax; // 0x5b0 (0x4)
	unsigned char unreflected_5b4[0x4]; // 0x5b4 (0x4) 
	class UFortAnimWorldStriderComponent* WorldStriderComponent; // 0x5b8 (0x8)

	/* Functions */

	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters (Underlying native function: SetDelayedMaterialParameters 0x72a7e38)
	void SetDelayedMaterialParameters(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent (Underlying native function: GetWorldStriderComponent 0x72a7ad4)
	class UFortAnimWorldStriderComponent* GetWorldStriderComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue (Underlying native function: GetWalkSpeedWarpingValue 0x72a7aa8)
	float GetWalkSpeedWarpingValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue (Underlying native function: GetWalkPlayRateValue 0x72a7a88)
	float GetWalkPlayRateValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition (Underlying native function: GetStartAnimPosition 0x72a7a5c)
	float GetStartAnimPosition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

