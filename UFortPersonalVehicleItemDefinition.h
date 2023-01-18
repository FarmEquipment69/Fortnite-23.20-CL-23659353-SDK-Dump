// Class /Script/FortniteGame.FortPersonalVehicleItemDefinition
// Size: 0x4d0
class UFortPersonalVehicleItemDefinition : public UFortAccountItemDefinition
{
	struct TWeakObjectPtr<class UClass> PersonalVehicleAbility; // 0x420 (0x28)
	float MountTime; // 0x448 (0x4)
	unsigned char unreflected_44c[0x4]; // 0x44c (0x4) 
	struct TWeakObjectPtr<class USkeletalMesh> SkeletalMesh; // 0x450 (0x28)
	class UClass* AnimClass; // 0x478 (0x8)
	struct TWeakObjectPtr<class USoundBase> ActivateSound; // 0x480 (0x28)
	struct TWeakObjectPtr<class USoundBase> DeactivateSound; // 0x4a8 (0x28)
};

