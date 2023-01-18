// Class /Script/FortniteGame.FortPhysicsObjectAssetSetupData
// Size: 0x290
class UFortPhysicsObjectAssetSetupData : public UDataAsset
{
	class UFortPhysicsObjectPreset* DefaultPhysicsPreset; // 0x30 (0x8)
	class UFortPhysicsObjectCollisionEffectsData* DefaultEffectsData; // 0x38 (0x8)
	class UPhysicalMaterial* DefaultPhysicalMaterial; // 0x40 (0x8)
	class UFortPhysicsObjectBuoyancyData* DefaultBuoyancyData; // 0x48 (0x8)
	class UFortPhysicsObjectImpactDamageData* DefaultImpactDamageData; // 0x50 (0x8)
	class UFortPhysicsObjectNavigationData* DefaultNavigationData; // 0x58 (0x8)
	struct TMap<struct FGameplayTag, class UFortPhysicsObjectPreset*> AssetSetupTagToPreset; // 0x60 (0x50)
	struct TMap<struct FGameplayTag, class UFortPhysicsObjectCollisionEffectsData*> AssetSetupTagToEffectData; // 0xb0 (0x50)
	struct TMap<struct FGameplayTag, class UPhysicalMaterial*> AssetSetupTagToPhysMat; // 0x100 (0x50)
	struct TMap<struct FGameplayTag, class UFortPhysicsObjectNavigationData*> AssetSetupTagToNavigationData; // 0x150 (0x50)
	struct TMap<struct FGameplayTag, class UFortPhysicsObjectBuoyancyData*> AssetSetupTagToBuoyancyData; // 0x1a0 (0x50)
	struct TMap<struct FGameplayTag, class UFortPhysicsObjectImpactDamageData*> AssetSetupTagToImpactDamageData; // 0x1f0 (0x50)
	struct TMap<enum EFortPhysicsSimSize, float> SimSizeBuckets; // 0x240 (0x50)
};

