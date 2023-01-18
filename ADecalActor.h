// Class /Script/Engine.DecalActor
// Size: 0x290
class ADecalActor : public AActor
{
	class UDecalComponent* Decal; // 0x288 (0x8)

	/* Functions */

	// Function /Script/Engine.DecalActor.SetDecalMaterial (Underlying native function: SetDecalMaterial 0x9d520ac)
	void SetDecalMaterial(class UMaterialInterface*& NewDecalMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DecalActor.GetDecalMaterial (Underlying native function: GetDecalMaterial 0x9d51df8)
	class UMaterialInterface* GetDecalMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DecalActor.CreateDynamicMaterialInstance (Underlying native function: CreateDynamicMaterialInstance 0x281fbe0)
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // (Native | Public | BlueprintCallable)
};

