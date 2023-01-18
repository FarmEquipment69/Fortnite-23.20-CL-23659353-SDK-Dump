// Class /Script/FortniteGame.BuildingPhoenixItemCollectorActor
// Size: 0xc30
class ABuildingPhoenixItemCollectorActor : public ABuildingItemCollectorActor
{
	struct TArray<class UFortItemDefinition*> ResourceWhitelist; // 0xbf8 (0x10)
	int VendingTier; // 0xc08 (0x4)
	unsigned char unreflected_c0c[0x4]; // 0xc0c (0x4) 
	struct FMulticastInlineDelegate OnOutputItemChanged; // 0xc10 (0x10)
	struct TArray<struct FRecipe> OutputItemRecipes; // 0xc20 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPhoenixItemCollectorActor.GetOutputRewardRarity (Underlying native function: GetOutputRewardRarity 0x860945c)
	enum EFortRarity GetOutputRewardRarity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingPhoenixItemCollectorActor.GetOutputRewardLevel (Underlying native function: GetOutputRewardLevel 0x8609410)
	int GetOutputRewardLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingPhoenixItemCollectorActor.GetActiveOutputRecipe (Underlying native function: GetActiveOutputRecipe 0x8608478)
	bool GetActiveOutputRecipe(struct FRecipe& OutRecipe); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

