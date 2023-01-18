// Class /Script/FortniteAI.FortBotStructureBuilder
// Size: 0x2c0
class AFortBotStructureBuilder : public AActor
{
	class UFortBuildingInstructions* BuildingInstructions; // 0x288 (0x8)
	struct TArray<class ABuildingActor*> BuiltActors; // 0x290 (0x10)
	class AActor* CachedGoal; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x18]; // 0x2a8 (0x18)

	/* Functions */

	// Function /Script/FortniteAI.FortBotStructureBuilder.RunDeconstructor (Underlying native function: RunDeconstructor 0xa3317a0)
	void RunDeconstructor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotStructureBuilder.OnBuildingDied (Underlying native function: OnBuildingDied 0xa331344)
	void OnBuildingDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteAI.FortBotStructureBuilder.BuildAll (Underlying native function: BuildAll 0xa3309fc)
	void BuildAll(); // (Final | Native | Public | BlueprintCallable)
};

