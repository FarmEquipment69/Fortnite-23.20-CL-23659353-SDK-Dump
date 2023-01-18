// Class /Script/VariantManagerContent.LevelVariantSetsActor
// Size: 0x2f0
class ALevelVariantSetsActor : public AActor
{
	struct FSoftObjectPath LevelVariantSets; // 0x288 (0x18)
	unsigned char DirectorInstances_2a0[0x50]; // 0x2a0 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)

	/* Functions */

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName (Underlying native function: SwitchOnVariantByName 0x801268c)
	bool SwitchOnVariantByName(struct FString& VariantSetName, struct FString& VariantName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex (Underlying native function: SwitchOnVariantByIndex 0x8012578)
	bool SwitchOnVariantByIndex(int& VariantSetIndex, int& VariantIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets (Underlying native function: SetLevelVariantSets 0x8011c74)
	void SetLevelVariantSets(class ULevelVariantSets*& InVariantSets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets (Underlying native function: GetLevelVariantSets 0x80111ec)
	class ULevelVariantSets* GetLevelVariantSets(bool& bLoad); // (Final | Native | Public | BlueprintCallable)
};

