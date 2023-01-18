// ScriptStruct /Script/Engine.RawDistributionVector
// Size: 0x60
struct FRawDistributionVector : FRawDistribution
{
	float MinValue; // 0x20 (0x4)
	float MaxValue; // 0x24 (0x4)
	struct FVector MinValueVec; // 0x28 (0x18)
	struct FVector MaxValueVec; // 0x40 (0x18)
	class UDistributionVector* Distribution; // 0x58 (0x8)
};

