// Class /Script/FortniteGame.FortItemWrapMappingData
// Size: 0xc0
class UFortItemWrapMappingData : public UDataAsset
{
	struct TArray<struct FItemWrapSlotMetadata> SlotMetadata; // 0x30 (0x10)
	struct TWeakObjectPtr<class UMaterialInterface> MasterVehicleMaterial; // 0x40 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> MasterWeaponMaterial; // 0x68 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> MasterCharacterMaterial; // 0x90 (0x28)
	struct FGameplayTag DoNotApplyWrapsTag; // 0xb8 (0x4)
	unsigned char padding_bc[0x4]; // 0xbc (0x4)
};

