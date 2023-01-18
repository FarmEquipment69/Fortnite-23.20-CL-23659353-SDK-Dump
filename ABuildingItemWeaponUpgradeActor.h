// Class /Script/FortniteGame.BuildingItemWeaponUpgradeActor
// Size: 0x1000
class ABuildingItemWeaponUpgradeActor : public ABuildingItemCollectorActor
{
	bool bAllowSecondInteraction; // 0xc00 (0x1)
	unsigned char unreflected_c01[0x7]; // 0xc01 (0x7) 
	class UFortResourceItemDefinition* WoodItem; // 0xc08 (0x8)
	class UFortResourceItemDefinition* MetalItem; // 0xc10 (0x8)
	class UFortResourceItemDefinition* BrickItem; // 0xc18 (0x8)
	struct FScalableFloat WoodCostCurve; // 0xc20 (0x28)
	struct FScalableFloat MetalCostCurve; // 0xc48 (0x28)
	struct FScalableFloat BrickCostCurve; // 0xc70 (0x28)
	struct FScalableFloat HorizontalWoodCostCurve; // 0xc98 (0x28)
	struct FScalableFloat HorizontalMetalCostCurve; // 0xcc0 (0x28)
	struct FScalableFloat HorizontalBrickCostCurve; // 0xce8 (0x28)
	struct FText WeaponCannotBeUpgradedText; // 0xd10 (0x18)
	struct FText NotEnoughRessourcesText; // 0xd28 (0x18)
	enum EFortWeaponUpgradeInteractionResult UpgradeInteractionResult; // 0xd40 (0x1)
	enum EFortWeaponUpgradeInteractionResult HorizontalUpgradeInteractionResult; // 0xd41 (0x1)
	unsigned char unreflected_d42[0x6]; // 0xd42 (0x6) 
	class UWeaponUpgradeRequiredResources* RequiredResources; // 0xd48 (0x8)
	class UWeaponUpgradeRequiredResources* RequiredHorizontalResources; // 0xd50 (0x8)
	class UFortWeaponItemDefinition* CurrentWeaponDefinition; // 0xd58 (0x8)
	unsigned char unreflected_d60[0x1a8]; // 0xd60 (0x1a8) 
	struct TArray<struct FPlayerWeaponUpgradeHoldData> PlayerToUpgradeWeaponData; // 0xf08 (0x10)
	enum EFortRarity UpgradedWeaponRarity; // 0xf18 (0x1)
	unsigned char unreflected_f19[0x7]; // 0xf19 (0x7) 
	struct FScalableFloat InteractionTimeUncommon; // 0xf20 (0x28)
	struct FScalableFloat InteractionTimeRare; // 0xf48 (0x28)
	struct FScalableFloat InteractionTimeVeryRare; // 0xf70 (0x28)
	struct FScalableFloat InteractionTimeSuperRare; // 0xf98 (0x28)
	struct FScalableFloat InteractionTimeMythic; // 0xfc0 (0x28)
	struct TEnumAsByte<EBuildingAttachmentType> BuildingAttachmentType; // 0xfe8 (0x1)
	bool bBlocksAttachmentPlacement; // 0xfe9 (0x1)
	unsigned char unreflected_fea[0x6]; // 0xfea (0x6) 
	class ABuildingActor* BuildingActorAttachedTo; // 0xff0 (0x8)
	unsigned char padding_ff8[0x8]; // 0xff8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingItemWeaponUpgradeActor.OnRep_AllowSecondInteraction (Underlying native function: OnRep_AllowSecondInteraction 0x860bfbc)
	void OnRepAllowSecondInteraction(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingItemWeaponUpgradeActor.FloorDestroyed (Underlying native function: FloorDestroyed 0x8607fc0)
	void FloorDestroyed(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.BuildingItemWeaponUpgradeActor.BlueprintOnInteractInterrupted (Has no native function)
	void BlueprintOnInteractInterrupted(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)
};

