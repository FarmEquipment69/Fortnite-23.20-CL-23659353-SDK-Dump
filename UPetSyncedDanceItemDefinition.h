// Class /Script/FortniteGame.PetSyncedDanceItemDefinition
// Size: 0xa30
class UPetSyncedDanceItemDefinition : public UAthenaDanceItemDefinition
{
	struct TWeakObjectPtr<class UAnimMontage> DefaultPetAnimation; // 0xa08 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.PetSyncedDanceItemDefinition.GetPetAnimation (Underlying native function: GetPetAnimation 0x8a92cd8)
	struct TWeakObjectPtr<class UAnimMontage> GetPetAnimation(class UAthenaPetItemDefinition*& PetItemDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

