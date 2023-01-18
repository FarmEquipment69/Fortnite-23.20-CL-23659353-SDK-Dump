// ScriptStruct /Script/Engine.RawDistributionFloat
// Size: 0x30
struct FRawDistributionFloat : FRawDistribution
{
	float MinValue; // 0x20 (0x4)
	float MaxValue; // 0x24 (0x4)
	class UDistributionFloat* Distribution; // 0x28 (0x8)
};

