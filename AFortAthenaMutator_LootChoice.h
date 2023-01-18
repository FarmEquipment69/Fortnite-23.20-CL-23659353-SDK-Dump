// Class /Script/FortniteGame.FortAthenaMutator_LootChoice
// Size: 0x350
class AFortAthenaMutator_LootChoice : public AFortAthenaMutator
{
	enum ECustomLootSelection LootSelection; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct TArray<struct FCustomLootOverrideData> LootOverrideDataList; // 0x338 (0x10)
	bool bUsingExperimentalTables; // 0x348 (0x1)
	unsigned char padding_349[0x7]; // 0x349 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_LootChoice.SetLootSelection (Underlying native function: SetLootSelection 0x84a9618)
	void SetLootSelection(enum ECustomLootSelection& NewSelection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_LootChoice.GetLootSelection (Underlying native function: GetLootSelection 0x84a5c04)
	enum ECustomLootSelection GetLootSelection(); // (Final | Native | Public | BlueprintCallable)
};

