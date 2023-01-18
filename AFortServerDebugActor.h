// Class /Script/FortniteGame.FortServerDebugActor
// Size: 0x350
class AFortServerDebugActor : public AActor
{
	uint64_t ServerMemSharedInKb; // 0x288 (0x8)
	uint64_t ServerMemUniqueInKb; // 0x290 (0x8)
	uint64_t ServerMemVirtualInKb; // 0x298 (0x8)
	uint64_t ServerMemPhysicalInKb; // 0x2a0 (0x8)
	int64_t SharedDeltaInLastMinute; // 0x2a8 (0x8)
	int64_t SharedDeltaSinceProcessStart; // 0x2b0 (0x8)
	int64_t SharedDeltaSinceDebugStart; // 0x2b8 (0x8)
	int64_t UniqueDeltaInLastMinute; // 0x2c0 (0x8)
	int64_t UniqueDeltaSinceProcessStart; // 0x2c8 (0x8)
	int64_t UniqueDeltaSinceDebugStart; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x78]; // 0x2d8 (0x78)
};

