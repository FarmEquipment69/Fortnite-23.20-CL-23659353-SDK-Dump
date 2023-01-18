// Class /Script/FortniteGame.BuildingLayoutRequirement
// Size: 0xe50
class ABuildingLayoutRequirement : public ABuildingPlayerPrimitivePreview
{
	struct FMulticastInlineDelegate OnLayoutSatisfied; // 0xdf0 (0x10)
	struct FMulticastInlineDelegate OnLayoutUnSatisfied; // 0xe00 (0x10)
	class UClass* LayoutRequirementSMActorClass; // 0xe10 (0x8)
	bool bIgnoreResourceTypeRequirements; // 0xe18 (0x1)
	bool bMakeSatisfyingActorIndestructibleWhileRequirementExists; // 0xe19 (0x1)
	bool bNeedToInitializeRequirementStatus; // 0xe1a (0x1)
	bool bRequirementSatisfied; // 0xe1b (0x1)
	enum ELayoutRequirementStatus RequirementStatus; // 0xe1c (0x1)
	struct TEnumAsByte<EFortResourceType> OverrideResourceType; // 0xe1d (0x1)
	bool bAllowAnyPattern; // 0xe1e (0x1)
	bool bAllowOccupantPatternEditing; // 0xe1f (0x1)
	struct TWeakObjectPtr<class UMaterialInterface> LayoutDisplayMaterial; // 0xe20 (0x28)
	class UMaterialInstanceDynamic* LayoutDisplayMID; // 0xe48 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingLayoutRequirement.SupportsEditingOfOccupant (Underlying native function: SupportsEditingOfOccupant 0x860dc30)
	bool SupportsEditingOfOccupant(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.SetRequirementVisible (Underlying native function: SetRequirementVisible 0x860d84c)
	void SetRequirementVisible(bool& bVisible); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.SetRequiredResourceType (Underlying native function: SetRequiredResourceType 0x860d7c0)
	void SetRequiredResourceType(struct TEnumAsByte<EFortResourceType>& DesiredResourceType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.OnRequirementSatisfyingActorDied (Underlying native function: OnRequirementSatisfyingActorDied 0x860c224)
	void OnRequirementSatisfyingActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Native | Public | HasDefaults)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.OnRep_RequirementStatus (Underlying native function: OnRep_RequirementStatus 0x85e0120)
	void OnRepRequirementStatus(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.DeactivateRequirement (Underlying native function: DeactivateRequirement 0x8607d04)
	void DeactivateRequirement(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.ActivateRequirement (Underlying native function: ActivateRequirement 0x8606ce8)
	void ActivateRequirement(bool& bMakeVisible); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

