// Class /Script/FortniteGame.FortItemCraftedParams
// Size: 0x40
class UFortItemCraftedParams : public UFortMissionEventParams
{
	class UFortSchematicItemDefinition* SchematicDefinition; // 0x28 (0x8)
	class AFortPlayerController* CraftedBy; // 0x30 (0x8)
	int AmountCrafted; // 0x38 (0x4)
	bool bItemWasQuickCrafted; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortItemCraftedParams.SetParams (Underlying native function: SetParams 0x8b2f18c)
	void SetParams(class UFortSchematicItemDefinition*& SchematicDefinition, class AFortPlayerController*& CraftedBy, int& AmountCrafted, bool& bItemWasQuickCrafted, class UFortItemCraftedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemCraftedParams.BreakParams (Underlying native function: BreakParams 0x8b295ac)
	void BreakParams(class UFortSchematicItemDefinition*& SchematicDefinition, class AFortPlayerController*& CraftedBy, int& AmountCrafted, bool& bItemWasQuickCrafted); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

