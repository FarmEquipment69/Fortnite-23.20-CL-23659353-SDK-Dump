// Class /Script/Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x2f0
class APrecomputedVisibilityOverrideVolume : public AVolume
{
	struct TArray<class AActor*> OverrideVisibleActors; // 0x2c0 (0x10)
	struct TArray<class AActor*> OverrideInvisibleActors; // 0x2d0 (0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x2e0 (0x10)
};

