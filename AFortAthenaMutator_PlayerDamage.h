// Class /Script/FortniteGame.FortAthenaMutator_PlayerDamage
// Size: 0x3f0
class AFortAthenaMutator_PlayerDamage : public AFortAthenaMutator
{
	bool bIsUsingHitResult; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct FGameplayTagQuery DamageTagQuery; // 0x338 (0x48)
	float DamageMultiplier; // 0x380 (0x4)
	unsigned char unreflected_384[0x4]; // 0x384 (0x4) 
	struct TArray<struct FBonePlayerDamageMultiplier> BoneDamageMultipliers; // 0x388 (0x10)
	enum EPlayerDamageHeightRatioDetectionType DetectionType; // 0x398 (0x1)
	unsigned char unreflected_399[0x7]; // 0x399 (0x7) 
	struct FScalableFloat HeightRatio; // 0x3a0 (0x28)
	struct FScalableFloat HeightRatioDamageMultiplier; // 0x3c8 (0x28)
};

