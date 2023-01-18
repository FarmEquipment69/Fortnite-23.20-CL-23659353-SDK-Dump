// Class /Script/VariantManagerContent.LevelVariantSets
// Size: 0x90
class ULevelVariantSets : public UObject
{
	unsigned char DirectorClass_28[0x8]; // 0x28 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	struct TArray<class UVariantSet*> VariantSets; // 0x30 (0x10)
	unsigned char padding_40[0x50]; // 0x40 (0x50)

	/* Functions */

	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName (Underlying native function: GetVariantSetByName 0x8011700)
	class UVariantSet* GetVariantSetByName(struct FString& VariantSetName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet (Underlying native function: GetVariantSet 0x8011660)
	class UVariantSet* GetVariantSet(int& VariantSetIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets (Underlying native function: GetNumVariantSets 0x6d2c944)
	int GetNumVariantSets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

