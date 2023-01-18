// Class /Script/FortniteGame.FortMissionLarsVan
// Size: 0x320
class AFortMissionLarsVan : public AFortAircraft
{
	class USceneComponent* Root; // 0x2c8 (0x8)
	class UStaticMeshComponent* Van; // 0x2d0 (0x8)
	class UStaticMeshComponent* VanApparatus; // 0x2d8 (0x8)
	class UStaticMeshComponent* VanBalloon; // 0x2e0 (0x8)
	class UStaticMeshComponent* VanFlames; // 0x2e8 (0x8)
	class UStaticMeshComponent* Stool; // 0x2f0 (0x8)
	class USkeletalMeshComponent* Lars; // 0x2f8 (0x8)
	class UArrowComponent* Arrow; // 0x300 (0x8)
	class UInterpToMovementComponent* VanMovement; // 0x308 (0x8)
	struct TArray<class AFortPlayerController*> WaitingToJump; // 0x310 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionLarsVan.SetPlayerWaitingToJump (Underlying native function: SetPlayerWaitingToJump 0x8b2f818)
	void SetPlayerWaitingToJump(class AFortPlayerPawn*& Waiting); // (Final | Native | Public | BlueprintCallable)
};

