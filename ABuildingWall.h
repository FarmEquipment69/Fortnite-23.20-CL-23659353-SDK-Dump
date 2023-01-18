// Class /Script/FortniteGame.BuildingWall
// Size: 0x1028
class ABuildingWall : public ABuildingSMActor
{
	unsigned char unreflected_dd0[0x20]; // 0xdd0 (0x20) 
	struct TWeakObjectPtr<class UClass> DoorObstacleClass; // 0xdf0 (0x28)
	struct FClimbLinkData ClimbLink; // 0xe18 (0x40)
	struct FVector DoorScale; // 0xe58 (0x18)
	struct FVector DoorOffset; // 0xe70 (0x18)
	struct FVector SlidingDoorOffset; // 0xe88 (0x18)
	struct FRotator DoorTargetRotationOffset; // 0xea0 (0x18)
	struct FRotator SlidingDoorTargetRotationOffset; // 0xeb8 (0x18)
	struct FRotator DoorRotationOffset; // 0xed0 (0x18)
	struct FRotator SlidingDoorRotationOffset; // 0xee8 (0x18)
	struct FVector AutomaticSlidingDoorBoxExtent; // 0xf00 (0x18)
	struct FVector AutomaticSlidingDoorBoxOffset; // 0xf18 (0x18)
	struct FVector SlamOpenDoorBoxExtent; // 0xf30 (0x18)
	float SlidingTranslation; // 0xf48 (0x4)
	float SlidingOpenTime; // 0xf4c (0x4)
	unsigned char unreflected_f50[0x8]; // 0xf50 (0x8) 
	class USoundBase* DoorOpeningSound; // 0xf58 (0x8)
	class USoundBase* DoorSlammedOpenSound; // 0xf60 (0x8)
	class USoundBase* DoorClosingSound; // 0xf68 (0x8)
	class UMaterialInterface* DoorAnimatingMaterial; // 0xf70 (0x8)
	class UFortSoundIndicatorComponent* DoorSoundIndicatorComponent; // 0xf78 (0x8)
	class UStaticMesh* DoorMesh; // 0xf80 (0x8)
	class UStaticMesh* DoubleDoorMesh; // 0xf88 (0x8)
	class UFortBuildingWallDoorComponent* DoorComponent; // 0xf90 (0x8)
	class UFortBuildingWallDoorComponent* SlidingDoorComponent; // 0xf98 (0x8)
	class UStaticMeshComponent* DoubleDoorComponent; // 0xfa0 (0x8)
	class UBoxComponent* DoorBoxComponent; // 0xfa8 (0x8)
	struct FVector DoorLinkOffset; // 0xfb0 (0x18)
	class UFortDoorLinkComponent* DoorSmartLinkComp; // 0xfc8 (0x8)
	class UStaticMeshComponent* DoorBlueprintMeshComp; // 0xfd0 (0x8)
	class UStaticMeshComponent* SlidingDoorBlueprintMeshComp; // 0xfd8 (0x8)
	class UStaticMeshComponent* DoubleDoorBlueprintMeshComp; // 0xfe0 (0x8)
	unsigned char unreflected_fe8[0x18]; // 0xfe8 (0x18) 
	struct FBuildingActorNavArea AreaPatternOverride; // 0x1000 (0x4)
	float AreaWidthOverride; // 0x1004 (0x4)
	unsigned char unreflected_1008[0x4]; // 0x1008 (0x4) 
	struct TEnumAsByte<EBuildingWallArea> AreaShapeType; // 0x100c (0x1)
	enum EDoorOpenStyle DoorOpenStyle; // 0x100d (0x1)
	unsigned char bSwingingDoor; // 0x100e (0x1)
	unsigned char bSlidingDoor; // 0x100e (0x1)
	unsigned char bAutomaticSlidingDoor; // 0x100e (0x1)
	unsigned char bDoubleDoor; // 0x100e (0x1)
	unsigned char bCreateDoorLink; // 0x100e (0x1)
	unsigned char bDoorOpen; // 0x100e (0x1)
	unsigned char bLocalDoorOpen; // 0x100e (0x1)
	unsigned char bDoorCollisionDisabled; // 0x100e (0x1)
	unsigned char bLocalDoorCollisionDisabled; // 0x100f (0x1)
	unsigned char bOverrideAreaWidth; // 0x100f (0x1)
	unsigned char bCreateClimbLink; // 0x100f (0x1)
	unsigned char bProhibitPassOverLowEndOfTriangleWall; // 0x100f (0x1)
	unsigned char bFastOpenRequested; // 0x100f (0x1)
	unsigned char padding_1010[0x18]; // 0x1010 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.BuildingWall.VerifyDoorOpenMatchesServer (Underlying native function: VerifyDoorOpenMatchesServer 0x862f420)
	void VerifyDoorOpenMatchesServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.VerifyDoorCollisionMatchesServer (Underlying native function: VerifyDoorCollisionMatchesServer 0x862f40c)
	void VerifyDoorCollisionMatchesServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnRep_bDoorOpen (Underlying native function: OnRep_bDoorOpen 0x27c7820)
	void OnRepbDoorOpen(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnRep_bDoorCollisionDisabled (Underlying native function: OnRep_bDoorCollisionDisabled 0x85e0120)
	void OnRepbDoorCollisionDisabled(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnNearDoorTriggerUnTouched (Underlying native function: OnNearDoorTriggerUnTouched 0x862dbe0)
	void OnNearDoorTriggerUnTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingWall.OnNearDoorTriggerTouched (Underlying native function: OnNearDoorTriggerTouched 0x862d9e0)
	void OnNearDoorTriggerTouched(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingWall.IsLocked (Underlying native function: IsLocked 0x862d004)
	bool IsLocked(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.IsDoorOpen (Underlying native function: IsDoorOpen 0x862cfe8)
	bool IsDoorOpen(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.IsDoorComponent (Underlying native function: IsDoorComponent 0x862cf58)
	bool IsDoorComponent(class UStaticMeshComponent*& MeshComponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.BuildingWall.HasSwingingDoor (Underlying native function: HasSwingingDoor 0x862cbe0)
	bool HasSwingingDoor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.HasSlidingDoor (Underlying native function: HasSlidingDoor 0x862cbac)
	bool HasSlidingDoor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.HasBashableDoor (Underlying native function: HasBashableDoor 0x862cb64)
	bool HasBashableDoor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingWall.GetDoorComponent (Underlying native function: GetDoorComponent 0x862c5e8)
	class UFortBuildingWallDoorComponent* GetDoorComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

