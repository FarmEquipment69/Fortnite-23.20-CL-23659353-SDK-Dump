// ScriptStruct /Script/FortniteUI.FortFocusedBuildingInfo
// Size: 0x48
struct FFortFocusedBuildingInfo
{
	bool bIsInteractable; // 0x0 (0x1)
	bool bCanBePlayerEdited; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FVector IndicatorRelativeLocation; // 0x8 (0x18)
	enum EFortBuildingHealthDisplayRule HealthDisplayRule; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float MaxHealth; // 0x24 (0x4)
	bool bIsAnyTrapAttached; // 0x28 (0x1)
	bool bIsTrapAttachedFacingPlayer; // 0x29 (0x1)
	bool bIsPreviewTrapAttached; // 0x2a (0x1)
	unsigned char unreflected_2b[0x1]; // 0x2b (0x1) 
	float AttachedTrapMaxDurability; // 0x2c (0x4)
	enum EFortBuildingInteraction InteractionType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int InteractionCost; // 0x34 (0x4)
	struct TEnumAsByte<EFortResourceType> BuildingMaterial; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FName QuickEditClass; // 0x3c (0x4)
	bool bIsPlayerBuilt; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

