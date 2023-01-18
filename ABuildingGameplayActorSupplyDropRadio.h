// Class /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
// Size: 0xbb8
class ABuildingGameplayActorSupplyDropRadio : public ABuildingGameplayActor
{
	float MinimumMovingSpeedThresholdSq; // 0x9d8 (0x4)
	float BalloonClosedGroundedFallSpeed; // 0x9dc (0x4)
	bool bAutoOpen; // 0x9e0 (0x1)
	unsigned char unreflected_9e1[0x7]; // 0x9e1 (0x7) 
	struct FGameplayTagContainer ForceOpenActorTags; // 0x9e8 (0x20)
	struct FGameplayTagQuery IgnoreMovingCollisionWithActorTagQuery; // 0xa08 (0x48)
	float InterpRateToBalloonOpenedFallSpeed; // 0xa50 (0x4)
	float DistanceFromOriginalSpawnLocForBalloonOpen; // 0xa54 (0x4)
	enum ESupplyDropRadioBalloonState BalloonState; // 0xa58 (0x1)
	unsigned char unreflected_a59[0x7]; // 0xa59 (0x7) 
	struct FHitResult WaterHitResult; // 0xa60 (0xe0)
	bool bMoving; // 0xb40 (0x1)
	unsigned char unreflected_b41[0x3]; // 0xb41 (0x3) 
	float FallSpeed; // 0xb44 (0x4)
	float BalloonOpenedFallSpeed; // 0xb48 (0x4)
	float GravityMultiplier; // 0xb4c (0x4)
	struct FVector ServerLocation; // 0xb50 (0x18)
	float ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xb68 (0x4)
	float ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xb6c (0x4)
	struct FVector Velocity; // 0xb70 (0x18)
	struct FVector PreviousFrameVelocity; // 0xb88 (0x18)
	struct FVector OriginalServerSpawnLocation; // 0xba0 (0x18)

	/* Functions */

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo (Has no native function)
	void UpdateGroundInfo(bool& bValidBlock, struct FHitResult& MovementHitResult); // (BlueprintAuthorityOnly | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier (Underlying native function: SetGravityMultiplier 0x71a7128)
	void SetGravityMultiplier(float& InGravityMultiplier); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState (Underlying native function: SetBalloonState 0x72ab98c)
	void SetBalloonState(enum ESupplyDropRadioBalloonState& InBalloonState); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop (Has no native function)
	void OpenSupplyDrop(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen (Has no native function)
	void OnRepDistanceFromOriginalSpawnLocForBalloonOpen(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState (Has no native function)
	void OnRepBalloonState(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving (Underlying native function: IsMoving 0x7309ec8)
	bool IsMoving(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded (Has no native function)
	bool IsGrounded(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay (Underlying native function: HandleMoveIgnoredActorEndPlay 0x5337060)
	void HandleMoveIgnoredActorEndPlay(class AActor*& EndPlayActor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Protected)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent (Has no native function)
	class UBoxComponent* GetRootCollisionComponent(); // (Event | Protected | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent (Underlying native function: GetHighestAttachParent 0x7309e34)
	class AActor* GetHighestAttachParent(class AActor*& InActor); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ (Underlying native function: GetGravityZ 0x2d8fd94)
	float GetGravityZ(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState (Underlying native function: GetBalloonState 0x2fc7548)
	enum ESupplyDropRadioBalloonState GetBalloonState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

