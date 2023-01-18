// Class /Script/Engine.WorldPartitionRuntimeCell
// Size: 0xe8
class UWorldPartitionRuntimeCell : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	bool bIsAlwaysLoaded; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FName> DataLayers; // 0x38 (0x10)
	struct FBox ContentBounds; // 0x48 (0x38)
	struct FWorldPartitionRuntimeCellDebugInfo DebugInfo; // 0x80 (0x30)
	int Priority; // 0xb0 (0x4)
	bool bClientOnlyVisible; // 0xb4 (0x1)
	bool bIsHLOD; // 0xb5 (0x1)
	bool bBlockOnSlowLoading; // 0xb6 (0x1)
	unsigned char unreflected_b7[0x1]; // 0xb7 (0x1) 
	struct FGuid ContentBundleID; // 0xb8 (0x10)
	unsigned char padding_c8[0x20]; // 0xc8 (0x20)
};

