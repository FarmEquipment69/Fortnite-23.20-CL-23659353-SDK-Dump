// Class /Script/FortniteGame.FortCosmeticFloatSliderVariant
// Size: 0xd8
class UFortCosmeticFloatSliderVariant : public UFortCosmeticVariant
{
	float DefaultStartingValue; // 0x78 (0x4)
	float MinParamValue; // 0x7c (0x4)
	float MaxParamValue; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct TWeakObjectPtr<class UFortChallengeBundleItemDefinition> UnlockChallengeBundle; // 0x88 (0x28)
	struct FName MaterialParamName; // 0xb0 (0x4)
	struct FName ParticleParamName; // 0xb4 (0x4)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> MaterialsToAlter; // 0xb8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFXSystemAsset>> ParticleSystemsToAlter; // 0xc8 (0x10)
};

