// Class /Script/FortniteGame.FortCharacterCustomizationData
// Size: 0xf8
class UFortCharacterCustomizationData : public UPrimaryDataAsset
{
	struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>> CharacterPartOverrides; // 0x30 (0x10)
	struct TWeakObjectPtr<class UClass> AnimBPOverride; // 0x40 (0x28)
	struct TWeakObjectPtr<class UFortWeaponAnimSet> WeaponAnimSetOverride; // 0x68 (0x28)
	struct TWeakObjectPtr<class UFortAnimAssetLocomotion> LocomotionAnimAssetOverride; // 0x90 (0x28)
	struct TArray<struct TWeakObjectPtr<class UClass>> AnimLayersOverride; // 0xb8 (0x10)
	struct TWeakObjectPtr<class UFortFootstepAudioBank> FootstepBankOverride; // 0xc8 (0x28)
	int Priority; // 0xf0 (0x4)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)
};

