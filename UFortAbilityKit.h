// Class /Script/FortniteGame.FortAbilityKit
// Size: 0x2e0
class UFortAbilityKit : public UFortAbilitySet
{
	unsigned char unreflected_b8[0x8]; // 0xb8 (0x8) 
	struct FText DisplayName; // 0xc0 (0x18)
	struct TArray<struct FText> Description; // 0xd8 (0x10)
	struct FText TooltipDescription; // 0xe8 (0x18)
	struct FSlateBrush IconBrush; // 0x100 (0xc0)
	struct FSlateBrush PrimaryTraitIconBrushOverride; // 0x1c0 (0xc0)
	struct TArray<struct TWeakObjectPtr<class UFortGadgetItemDefinition>> Gadgets; // 0x280 (0x10)
	struct TArray<struct FAbilityKitItem> Items; // 0x290 (0x10)
	struct TArray<class UFortSchematicItemDefinition*> AddedSchematics; // 0x2a0 (0x10)
	struct TArray<class UFortSchematicItemDefinition*> RemovedSchematics; // 0x2b0 (0x10)
	class UClass* ToolTip; // 0x2c0 (0x8)
	class UClass* SummaryTooltip; // 0x2c8 (0x8)
	class UFortTooltipDisplayStatsList* StatList; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x8]; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityKit.GetDescription (Underlying native function: GetDescription 0x8ecf624)
	struct TArray<struct FText> GetDescription(class UObject*& WorldContextObject, bool& bFindSummaryTooltip); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAbilityKit.BP_GetGadgets (Underlying native function: BP_GetGadgets 0x8ecdf88)
	void BPGetGadgets(struct TArray<class UFortGadgetItemDefinition*>& GadgetItemDefinitions); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

