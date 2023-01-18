// Class /Script/FortniteGame.FortTransformGeneratorSweepFromOffset
// Size: 0x50
class UFortTransformGeneratorSweepFromOffset : public UFortTransformGenerator
{
	struct FVector RayOriginOffsetFromOriginal; // 0x28 (0x18)
	float SweepRadius; // 0x40 (0x4)
	struct TEnumAsByte<ECollisionChannel> TraceChannel; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	float MaximumAllowedAdjustment; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

