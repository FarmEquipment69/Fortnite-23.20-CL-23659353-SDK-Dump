// Class /Script/FortniteGame.FortAthenaRiftPortal
// Size: 0xa68
class AFortAthenaRiftPortal : public ABuildingGameplayActorConsumable
{
	unsigned char unreflected_a48[0x8]; // 0xa48 (0x8) 
	struct FGameplayTag IgnoreActorTag; // 0xa50 (0x4)
	unsigned char unreflected_a54[0x4]; // 0xa54 (0x4) 
	struct TArray<class AActor*> IgnoredActors; // 0xa58 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaRiftPortal.TeleportVehicleFacing (Underlying native function: TeleportVehicleFacing 0x82e539c)
	void TeleportVehicleFacing(class AActor*& Vehicle, struct FVector& TeleportLocation, struct FRotator& Rot); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaRiftPortal.TeleportVehicle (Underlying native function: TeleportVehicle 0x82e4e08)
	void TeleportVehicle(class AActor*& Vehicle, struct FVector& TeleportLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaRiftPortal.OverlappingOnBeginPlay (Has no native function)
	void OverlappingOnBeginPlay(class AActor*& Actor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaRiftPortal.NotifyTeleportedVehicle (Underlying native function: NotifyTeleportedVehicle 0x82e3e0c)
	void NotifyTeleportedVehicle(class AActor*& VehicleActor); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaRiftPortal.IsIgnoredActor (Underlying native function: IsIgnoredActor 0x82e3a84)
	bool IsIgnoredActor(class AActor*& QueryActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaRiftPortal.AddIgnoredActor (Underlying native function: AddIgnoredActor 0x82e1fe0)
	void AddIgnoredActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)
};

