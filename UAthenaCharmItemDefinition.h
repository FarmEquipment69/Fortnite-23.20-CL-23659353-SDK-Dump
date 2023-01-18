// Class /Script/FortniteGame.AthenaCharmItemDefinition
// Size: 0x888
class UAthenaCharmItemDefinition : public UAthenaCosmeticItemDefinition
{
	struct TWeakObjectPtr<class UClass> CharmModifierBlueprint; // 0x7b0 (0x28)
	struct TWeakObjectPtr<class UClass> CharmPrefabClass; // 0x7d8 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> SkeletalMesh; // 0x800 (0x28)
	struct TWeakObjectPtr<class UClass> AnimClass; // 0x828 (0x28)
	struct TWeakObjectPtr<class UClass> WeaponAnimClass; // 0x850 (0x28)
	struct TArray<struct FCharmSoundAssetEntry> CharmSounds; // 0x878 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaCharmItemDefinition.GetOverrideWeaponAnimSetPtr (Underlying native function: GetOverrideWeaponAnimSetPtr 0x873dad4)
	struct TWeakObjectPtr<class UClass> GetOverrideWeaponAnimSetPtr(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCharmItemDefinition.GetOverrideSkelMeshPtr (Underlying native function: GetOverrideSkelMeshPtr 0x873d99c)
	struct TWeakObjectPtr<class USkeletalMesh> GetOverrideSkelMeshPtr(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCharmItemDefinition.GetOverrideAnimSetPtrForCharmSlot (Underlying native function: GetOverrideAnimSetPtrForCharmSlot 0x873d8ac)
	struct TWeakObjectPtr<class UClass> GetOverrideAnimSetPtrForCharmSlot(int& CharmSlotIn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCharmItemDefinition.GetOverrideAnimSetPtr (Underlying native function: GetOverrideAnimSetPtr 0x873d774)
	struct TWeakObjectPtr<class UClass> GetOverrideAnimSetPtr(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaCharmItemDefinition.GetCharmPrefabClass (Underlying native function: GetCharmPrefabClass 0x873d2b0)
	class UClass* GetCharmPrefabClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

