// Class /Script/ShielderGameplayRuntime.ShielderCollisionHelperComponent
// Size: 0x128
class UShielderCollisionHelperComponent : public UGameFrameworkComponent
{
	class ABuildingGameplayActor* ShielderBGA; // 0xa0 (0x8)
	struct FVector StaticOffset; // 0xa8 (0x18)
	struct FVector AimOffset; // 0xc0 (0x18)
	struct FVector AimOffset2D; // 0xd8 (0x18)
	float PitchMultiplier; // 0xf0 (0x4)
	float PitchMin; // 0xf4 (0x4)
	float PitchMax; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct FScalableFloat ShouldUpdateShielderSkelMesh; // 0x100 (0x28)
};

