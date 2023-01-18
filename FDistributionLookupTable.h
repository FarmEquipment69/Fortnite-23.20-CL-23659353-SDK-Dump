// ScriptStruct /Script/Engine.DistributionLookupTable
// Size: 0x20
struct FDistributionLookupTable
{
	float TimeScale; // 0x0 (0x4)
	float TimeBias; // 0x4 (0x4)
	struct TArray<float> Values; // 0x8 (0x10)
	unsigned char Op; // 0x18 (0x1)
	unsigned char EntryCount; // 0x19 (0x1)
	unsigned char EntryStride; // 0x1a (0x1)
	unsigned char SubEntryStride; // 0x1b (0x1)
	unsigned char LockFlag; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

