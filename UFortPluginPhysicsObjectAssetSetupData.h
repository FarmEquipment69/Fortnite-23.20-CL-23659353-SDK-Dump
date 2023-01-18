// Class /Script/FortniteGame.FortPluginPhysicsObjectAssetSetupData
// Size: 0x210
class UFortPluginPhysicsObjectAssetSetupData : public UDataAsset
{
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UFortPhysicsObjectPreset>> AssetSetupTagToPreset; // 0x30 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UFortPhysicsObjectCollisionEffectsData>> AssetSetupTagToEffectData; // 0x80 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UPhysicalMaterial>> AssetSetupTagToPhysMat; // 0xd0 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UFortPhysicsObjectNavigationData>> AssetSetupTagToNavigationData; // 0x120 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UFortPhysicsObjectBuoyancyData>> AssetSetupTagToBuoyancyData; // 0x170 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UFortPhysicsObjectImpactDamageData>> AssetSetupTagToImpactDamageData; // 0x1c0 (0x50)
};

