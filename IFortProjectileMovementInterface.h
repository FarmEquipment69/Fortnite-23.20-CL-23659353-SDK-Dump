// Class /Script/FortniteGame.FortProjectileMovementInterface
// Size: 0x28
class IFortProjectileMovementInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingTurnSpeedMin (Underlying native function: SetHomingTurnSpeedMin 0x89ba8bc)
	void SetHomingTurnSpeedMin(class AActor*& SelfActor, float& NewTurnSpeedMin); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingTurnSpeedMax (Underlying native function: SetHomingTurnSpeedMax 0x89ba7f0)
	void SetHomingTurnSpeedMax(class AActor*& SelfActor, float& NewTurnSpeedMin); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingTimeUntilMaxTurnSpeed (Underlying native function: SetHomingTimeUntilMaxTurnSpeed 0x89ba724)
	void SetHomingTimeUntilMaxTurnSpeed(class AActor*& SelfActor, float& NewTimeUntilMax); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingTargetPosition (Underlying native function: SetHomingTargetPosition 0x89ba658)
	void SetHomingTargetPosition(class AActor*& SelfActor, struct FVector& HomingTargetPosition); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingTargetOffset (Underlying native function: SetHomingTargetOffset 0x89ba58c)
	void SetHomingTargetOffset(class AActor*& SelfActor, struct FVector& NewHomingOffset); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingTarget (Underlying native function: SetHomingTarget 0x89ba4c8)
	void SetHomingTarget(class AActor*& SelfActor, class AActor*& HomingTarget); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingStyle (Underlying native function: SetHomingStyle 0x89ba3cc)
	void SetHomingStyle(class AActor*& SelfActor, enum EFortHomingStyle& NewHomingStyle, bool& ResetHomingTurnSpeedTimer); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingLockTargetDistanceThreshold (Underlying native function: SetHomingLockTargetDistanceThreshold 0x89ba300)
	void SetHomingLockTargetDistanceThreshold(class AActor*& SelfActor, float& NewDistanceThreshold); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingLaserTargetDistance (Underlying native function: SetHomingLaserTargetDistance 0x89ba234)
	void SetHomingLaserTargetDistance(class AActor*& SelfActor, float& NewDistance); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetHomingData (Underlying native function: SetHomingData 0x89ba110)
	void SetHomingData(class AActor*& SelfActor, struct FProjectileHomingData& NewHomingData); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetDesiredDirection (Underlying native function: SetDesiredDirection 0x89ba044)
	void SetDesiredDirection(class AActor*& SelfActor, struct FVector& Direction); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.SetAccelerationMagnitude (Underlying native function: SetAccelerationMagnitude 0x89b9f78)
	void SetAccelerationMagnitude(class AActor*& SelfActor, float& InAccelerationMagnitude); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.OnReachedLockTargetDistanceThreshold (Has no native function)
	void OnReachedLockTargetDistanceThreshold(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.OnHomingPassedTarget (Has no native function)
	void OnHomingPassedTarget(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.IsProjectileBeingKilled (Underlying native function: IsProjectileBeingKilled 0x80945b0)
	bool IsProjectileBeingKilled(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.GetInstigatorPlayerController (Underlying native function: GetInstigatorPlayerController 0x8093894)
	class AFortPlayerController* GetInstigatorPlayerController(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.GetFortProjectileMovementComponent (Underlying native function: GetFortProjectileMovementComponent 0x85a3484)
	class UFortProjectileMovementComponent* GetFortProjectileMovementComponent(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortProjectileMovementInterface.GetCurrentLocation (Underlying native function: GetCurrentLocation 0x89b89e4)
	struct FVector GetCurrentLocation(); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

