// Class /Script/FortniteGame.AthenaGadgetItemDefinition
// Size: 0xd40
class UAthenaGadgetItemDefinition : public UFortGadgetItemDefinition
{
	unsigned char unreflected_b40[0x10]; // 0xb40 (0x10) 
	unsigned char bCanBeDroppedWhenEquipmentChangeIsBlocked; // 0xb50 (0x1)
	unsigned char bAllowedFuelGadgetUI; // 0xb50 (0x1)
	unsigned char bShowCooldownUI; // 0xb50 (0x1)
	unsigned char bShowShortDescriptionInPickupDisplay; // 0xb50 (0x1)
	unsigned char bDisplayPlayerNameForInventoryActor; // 0xb50 (0x1)
	unsigned char bDisplayHealthForInventoryActor; // 0xb50 (0x1)
	unsigned char bDisplayShieldForInventoryActor; // 0xb50 (0x1)
	unsigned char unreflected_b51[0x3]; // 0xb51 (0x3) 
	struct FGameplayTag SpecialActorInventoryTag; // 0xb54 (0x4)
	struct FName InventorySpecialActorUniqueID; // 0xb58 (0x4)
	unsigned char unreflected_b5c[0x4]; // 0xb5c (0x4) 
	struct FSlateBrush InventoryMinimapIconBrush; // 0xb60 (0xc0)
	struct FVector2D InventoryMinimapIconScale; // 0xc20 (0x10)
	struct FSlateBrush InventoryCompassIconBrush; // 0xc30 (0xc0)
	struct FVector2D InventoryCompassIconScale; // 0xcf0 (0x10)
	struct FText InventoryActorDisplayName; // 0xd00 (0x18)
	struct TArray<struct FSpecialActorSingleStatData> SpecialActorInventoryStatList; // 0xd18 (0x10)
	class UClass* ContextOverrideWidget; // 0xd28 (0x8)
	struct FFortCreativeTagsHelper CreativeTagsHelper; // 0xd30 (0x10)
};

