// Class /Script/FortniteGame.FortPickupEffect
// Size: 0x2f8
class AFortPickupEffect : public AActor
{
	class UStaticMesh* StaticMesh; // 0x288 (0x8)
	class USkeletalMesh* SkeletalMesh; // 0x290 (0x8)
	class AFortPickup* ParentPickupActor; // 0x298 (0x8)
	struct TArray<class UFortAlterationItemDefinition*> ActiveAlterations; // 0x2a0 (0x10)
	class UFortWorldItemDefinition* ItemDefinition; // 0x2b0 (0x8)
	bool bDoNotShowSpawnParticles; // 0x2b8 (0x1)
	bool bDoNotTickSkeletalMeshComponents; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x6]; // 0x2ba (0x6) 
	struct FVector PickupColor; // 0x2c0 (0x18)
	struct FLinearColor BackpackWorldPosition; // 0x2d8 (0x10)
	unsigned char bOwnedByALocalPlayer; // 0x2e8 (0x1)
	unsigned char bOwnedByPlayer; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x3]; // 0x2e9 (0x3) 
	bool bRandomRotation; // 0x2ec (0x1)
	unsigned char unreflected_2ed[0x3]; // 0x2ed (0x3) 
	class USoundBase* PickupByNearbyPawnSound; // 0x2f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupEffect.OnTossed (Has no native function)
	void OnTossed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEffect.OnPickedUp (Has no native function)
	void OnPickedUp(class AFortPawn*& PickupTarget); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEffect.OnAttached (Has no native function)
	void OnAttached(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEffect.OnAboutToEnterBackpack (Has no native function)
	void OnAboutToEnterBackpack(class AFortPawn*& PickupTarget); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEffect.GetPickupDummyItem (Underlying native function: GetPickupDummyItem 0x8a78638)
	class UFortItem* GetPickupDummyItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupEffect.EnableBacchusHighlight (Has no native function)
	void EnableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEffect.DisableBacchusHighlight (Has no native function)
	void DisableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEffect.ApplyCosmeticOverridesToMaterial (Underlying native function: ApplyCosmeticOverridesToMaterial 0x8a77594)
	class UMaterialInstanceDynamic* ApplyCosmeticOverridesToMaterial(class UMeshComponent*& MeshComponent, int& MatIndex); // (Final | Native | Public | BlueprintCallable)
};

