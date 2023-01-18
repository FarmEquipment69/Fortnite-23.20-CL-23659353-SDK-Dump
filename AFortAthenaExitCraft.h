// Class /Script/FortniteGame.FortAthenaExitCraft
// Size: 0x1b70
class AFortAthenaExitCraft : public AFortAthenaVehicle
{
	class UStaticMeshComponent* MeshComponent; // 0x1948 (0x8)
	class UStaticMeshComponent* OverlapMesh; // 0x1950 (0x8)
	class UFortAthenaExitCraftInfo* ExitCraftInfo; // 0x1958 (0x8)
	unsigned char unreflected_1960[0x18]; // 0x1960 (0x18) 
	struct FName CraftSpecialActorID; // 0x1978 (0x4)
	unsigned char unreflected_197c[0x4]; // 0x197c (0x4) 
	unsigned char bCorrectionMade; // 0x1980 (0x1)
	enum EExitCraftState CurrentState; // 0x1981 (0x1)
	unsigned char unreflected_1982[0x6]; // 0x1982 (0x6) 
	struct TArray<class AFortPlayerPawnAthena*> OverlappingPawns; // 0x1988 (0x10)
	class UClass* BalloonClass; // 0x1998 (0x8)
	class AFortAthenaExitCraftBalloon* BalloonActor; // 0x19a0 (0x8)
	class UCurveFloat* GettingIntoPostionCurveLocation; // 0x19a8 (0x8)
	class UCurveFloat* GettingIntoPostionCurveRotation; // 0x19b0 (0x8)
	float BuildingZOffset; // 0x19b8 (0x4)
	unsigned char unreflected_19bc[0x4]; // 0x19bc (0x4) 
	struct FGameplayTagContainer TagsToApplyOnAttached; // 0x19c0 (0x20)
	struct FText InteractText; // 0x19e0 (0x18)
	float SafetyTimerTime; // 0x19f8 (0x4)
	unsigned char unreflected_19fc[0x4]; // 0x19fc (0x4) 
	struct TArray<class UMaterialInterface*> VehicleSkins; // 0x1a00 (0x10)
	int VehicleSkinIndex; // 0x1a10 (0x4)
	unsigned char unreflected_1a14[0x4c]; // 0x1a14 (0x4c) 
	struct TArray<class AFortPlayerPawnAthena*> PlayersNeedingSeats; // 0x1a60 (0x10)
	unsigned char unreflected_1a70[0x18]; // 0x1a70 (0x18) 
	struct FLocationLerpData LocationLerpData; // 0x1a88 (0x60)
	unsigned char unreflected_1ae8[0x8]; // 0x1ae8 (0x8) 
	struct FRotationLerpData RotationLerpData; // 0x1af0 (0x80)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRep_VehicleSkinIndex (Underlying native function: OnRep_VehicleSkinIndex 0x82b3c80)
	void OnRepVehicleSkinIndex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRep_RotationLerpData (Underlying native function: OnRep_RotationLerpData 0x82b3c6c)
	void OnRepRotationLerpData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRep_QualifyingPlayers (Underlying native function: OnRep_QualifyingPlayers 0x26daa0c)
	void OnRepQualifyingPlayers(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRep_LocationLerpData (Underlying native function: OnRep_LocationLerpData 0x82b3bcc)
	void OnRepLocationLerpData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRep_CurrentState (Underlying native function: OnRep_CurrentState 0x82b3b14)
	void OnRepCurrentState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRep_BalloonActor (Underlying native function: OnRep_BalloonActor 0x82b3aac)
	void OnRepBalloonActor(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnRemakeMIDs (Has no native function)
	void OnRemakeMIDs(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnOverlapStart (Underlying native function: OnOverlapStart 0x82b38a0)
	void OnOverlapStart(class AActor*& TestActor); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnOverlapEnd (Underlying native function: OnOverlapEnd 0x82b37ec)
	void OnOverlapEnd(class AActor*& TestActor); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnNewState (Has no native function)
	void OnNewState(enum EExitCraftState& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnMoveStart (Has no native function)
	void OnMoveStart(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnMoveEnd (Has no native function)
	void OnMoveEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaExitCraft.OnDepartFinished (Underlying native function: OnDepartFinished 0x82b3468)
	void OnDepartFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaExitCraft.GetBalloonLocation (Has no native function)
	struct FVector GetBalloonLocation(); // (Event | Protected | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAthenaExitCraft.CheatDepart (Underlying native function: CheatDepart 0x26daa0c)
	void CheatDepart(); // (Final | Native | Public | BlueprintCallable)
};

