// Class /Script/Engine.WorldPartitionHLOD
// Size: 0x2c0
class AWorldPartitionHLOD : public AActor
{
	uint32_t LODLevel; // 0x288 (0x4)
	bool bRequireWarmup; // 0x28c (0x1)
	unsigned char unreflected_28d[0x3]; // 0x28d (0x3) 
	struct TWeakObjectPtr<class UWorldPartitionRuntimeCell> SourceCell; // 0x290 (0x28)
	struct FName SourceCellName; // 0x2b8 (0x4)
	unsigned char padding_2bc[0x4]; // 0x2bc (0x4)
};

