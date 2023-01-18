// Class /Script/CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
// Size: 0xe0
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent
{
	class UFortItemDefinition* LastPickupItemDef; // 0xc0 (0x8)
	class UFortItemDefinition* LastFocusedItemDef; // 0xc8 (0x8)
	struct FName LastTargetFormulaName; // 0xd0 (0x4)
	float ContextualCraftingInteractDuration; // 0xd4 (0x4)
	struct TEnumAsByte<TInteractionType> CachedInteractionType; // 0xd8 (0x1)
	struct TEnumAsByte<EInteractionBeingAttempted> CachedInteractionBeingAttempted; // 0xd9 (0x1)
	unsigned char padding_da[0x6]; // 0xda (0x6)
};

