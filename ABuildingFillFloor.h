// Class /Script/FortniteGame.BuildingFillFloor
// Size: 0xb38
class ABuildingFillFloor : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x18]; // 0x9d8 (0x18) 
	struct FScalableFloat ZKillOffset; // 0x9f0 (0x28)
	struct FScalableFloat ZMovementToleranceOffset; // 0xa18 (0x28)
	int StepIndex; // 0xa40 (0x4)
	float FloorZ; // 0xa44 (0x4)
	unsigned char unreflected_a48[0x8]; // 0xa48 (0x8) 
	float InitialDelay; // 0xa50 (0x4)
	unsigned char unreflected_a54[0x4]; // 0xa54 (0x4) 
	struct FFillFloorPositionData FloorPositionData; // 0xa58 (0x80)
	int NumStepsToUse; // 0xad8 (0x4)
	unsigned char unreflected_adc[0x4]; // 0xadc (0x4) 
	struct TArray<float> EventHeights; // 0xae0 (0x10)
	struct FScalableFloat MovementTimerUpdatePeriod; // 0xaf0 (0x28)
	unsigned char unreflected_b18[0x4]; // 0xb18 (0x4) 
	float FloorMovementSpeed; // 0xb1c (0x4)
	unsigned char unreflected_b20[0x10]; // 0xb20 (0x10) 
	bool bIsMoving; // 0xb30 (0x1)
	unsigned char padding_b31[0x7]; // 0xb31 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingFillFloor.StopMovement (Underlying native function: StopMovement 0x85e1234)
	void StopMovement(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFillFloor.StartMovement (Underlying native function: StartMovement 0x8288dc4)
	void StartMovement(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingFillFloor.OnStopMoving (Has no native function)
	void OnStopMoving(int& CurrentStep); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingFillFloor.OnStartMoving (Has no native function)
	void OnStartMoving(int& CurrentStep); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingFillFloor.OnRep_StepIndex (Underlying native function: OnRep_StepIndex 0x85e0180)
	void OnRepStepIndex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFillFloor.OnRep_IsMoving (Underlying native function: OnRep_IsMoving 0x85dff78)
	void OnRepIsMoving(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFillFloor.OnRep_FloorZ (Underlying native function: OnRep_FloorZ 0x85dfe64)
	void OnRepFloorZ(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingFillFloor.OnLavaOverlap (Underlying native function: OnLavaOverlap 0x71a663c)
	void OnLavaOverlap(class AFortPlayerPawn*& Pawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFillFloor.OnHeightEvent (Has no native function)
	void OnHeightEvent(float& Height, int& HeightEventIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingFillFloor.InterpToStopCallback (Underlying native function: InterpToStopCallback 0x85def34)
	void InterpToStopCallback(struct FHitResult& ImpactResult, float& Time); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingFillFloor.GetFloorPositionFromStep (Underlying native function: GetFloorPositionFromStep 0x85de768)
	bool GetFloorPositionFromStep(int& Step, float& MoveTime, float& Height, float& PostMoveDelay); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

