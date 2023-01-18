// ScriptStruct /Script/FortniteGame.FortAbilityTargetSelection
// Size: 0x128
struct FFortAbilityTargetSelection
{
	struct TEnumAsByte<EFortTargetSelectionShape> Shape; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString CustomShapeComponentName; // 0x8 (0x10)
	enum EFortTargetSelectionTestType TestType; // 0x18 (0x1)
	enum EFortAbilityTargetingSource PrimarySource; // 0x19 (0x1)
	enum EFortAbilityTargetingSource SecondarySource; // 0x1a (0x1)
	unsigned char unreflected_1b[0x5]; // 0x1b (0x5) 
	struct FScalableFloat Range; // 0x20 (0x28)
	struct FVector HalfExtents; // 0x48 (0x18)
	bool bAlignShapeEdgeToSourceLocation; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	struct FScalableFloat ConeYawAngle; // 0x68 (0x28)
	struct FScalableFloat ConePitchAngle; // 0x90 (0x28)
	struct FScalableFloat ConeMinRadius; // 0xb8 (0x28)
	struct FFortTargetFilter TargetFilter; // 0xe0 (0x38)
	bool bExcludeObstructedByWorld; // 0x118 (0x1)
	bool bShouldAttachedActorsObstructTarget; // 0x119 (0x1)
	bool bCreateHitResultWhenNoTargetsFound; // 0x11a (0x1)
	bool bUseProjectileRotationForDamageZones; // 0x11b (0x1)
	enum EFortAbilityTargetSelectionUsage TargetSelectionUsage; // 0x11c (0x1)
	unsigned char unreflected_11d[0x3]; // 0x11d (0x3) 
	int MaxTargets; // 0x120 (0x4)
	unsigned char padding_124[0x4]; // 0x124 (0x4)
};

