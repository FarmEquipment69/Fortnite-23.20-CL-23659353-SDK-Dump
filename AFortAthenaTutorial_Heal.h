// Class /Script/FortniteGame.FortAthenaTutorial_Heal
// Size: 0x348
class AFortAthenaTutorial_Heal : public AFortAthenaTutorialBase
{
	struct TArray<class UFortItemDefinition*> ItemsToCollect; // 0x2f0 (0x10)
	class AActor* LootPositionMarker; // 0x300 (0x8)
	class UFortItemDefinition* MedkitItem; // 0x308 (0x8)
	class UFortItemDefinition* ShieldPotionItem; // 0x310 (0x8)
	unsigned char padding_318[0x30]; // 0x318 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Heal.SpawnAmbushLoot (Has no native function)
	void SpawnAmbushLoot(); // (Event | Public | BlueprintEvent)
};

