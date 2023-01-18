// Class /Script/FortniteGame.FortDefenderItem
// Size: 0x148
class UFortDefenderItem : public UFortCharacter
{
	struct TArray<struct FString> alterations; // 0x120 (0x10)
	struct TArray<class UFortAlterationItemDefinition*> AlterationInstances; // 0x130 (0x10)
	unsigned char padding_140[0x8]; // 0x140 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortDefenderItem.GetDefenderSubtype (Underlying native function: GetDefenderSubtype 0x8efbb48)
	enum EFortDefenderSubtype GetDefenderSubtype(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

