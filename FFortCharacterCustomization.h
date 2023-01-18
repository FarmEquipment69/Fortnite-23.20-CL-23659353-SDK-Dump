// ScriptStruct /Script/FortniteGame.FortCharacterCustomization
// Size: 0x48
struct FFortCharacterCustomization
{
	struct TArray<class UCustomCharacterPart*> CharacterPartOverrides; // 0x8 (0x10)
	class UClass* AnimBPClassOverride; // 0x18 (0x8)
	class UFortWeaponAnimSet* WeaponAnimSetOverride; // 0x20 (0x8)
	class UFortAnimAssetLocomotion* LocomotionAnimAssetOverride; // 0x28 (0x8)
	struct TArray<class UClass*> AnimLayersOverride; // 0x30 (0x10)
	class UFortFootstepAudioBank* FootstepBankOverride; // 0x40 (0x8)
};

