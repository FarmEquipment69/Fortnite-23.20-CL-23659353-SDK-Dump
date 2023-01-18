// Class /Script/FortniteGame.AthenaPetItemDefinition
// Size: 0x838
class UAthenaPetItemDefinition : public UAthenaCosmeticItemDefinition
{
	enum EAthenaPetAttachRule PetAttachRule; // 0x7b0 (0x1)
	unsigned char unreflected_7b1[0x7]; // 0x7b1 (0x7) 
	struct FVector PetAttachOffset; // 0x7b8 (0x18)
	struct FName PetAttachSocket; // 0x7d0 (0x4)
	unsigned char unreflected_7d4[0x4]; // 0x7d4 (0x4) 
	struct TArray<class UFortPetStimuliBank*> StimuliBanks; // 0x7d8 (0x10)
	struct TWeakObjectPtr<class UClass> PetPrefabClass; // 0x7e8 (0x28)
	struct TWeakObjectPtr<class UFortTaggedSoundBank> PetSoundBank; // 0x810 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.AthenaPetItemDefinition.GetPetPrefabClass (Underlying native function: GetPetPrefabClass 0x8760e5c)
	class UClass* GetPetPrefabClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

