// Class /Script/FortniteGame.FortPhysicsObjectImpactDamageData
// Size: 0x1c0
class UFortPhysicsObjectImpactDamageData : public UDataAsset
{
	bool bUseImpulseMagnitudeInsteadOfVelocity; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FImpulseDamageData> PlayerImpactDamageBuckets; // 0x38 (0x10)
	struct TArray<struct FImpulseDamageData> EnvironmentImpactDamageBuckets; // 0x48 (0x10)
	struct FScalableFloat BaseOnImpactDamage; // 0x58 (0x28)
	struct FScalableFloat BaseEnvironmentalOnImpactDamage; // 0x80 (0x28)
	struct FScalableFloat BaseVehicleOnImpactDamage; // 0xa8 (0x28)
	struct FScalableFloat BaseWildlifeOnImpactDamage; // 0xd0 (0x28)
	struct FScalableFloat DelayBeforeNextImpactDamageEvent; // 0xf8 (0x28)
	struct TMap<struct FGameplayTag, struct FScalableFloat> SourceSurfaceTypeToDamageModifier; // 0x120 (0x50)
	struct TMap<struct FGameplayTag, struct FScalableFloat> SourceSurfaceTypeToSpeedReductionPercentage; // 0x170 (0x50)
};

