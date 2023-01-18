// Class /Script/FortniteGame.PropertyOverrideDataReplChunkActor
// Size: 0x3a8
class APropertyOverrideDataReplChunkActor : public AInfo
{
	unsigned char ChunkIndex; // 0x288 (0x1)
	unsigned char unreflected_289[0x7]; // 0x289 (0x7) 
	struct FPropertyOverrideDataReplChunk PartialReplOverrides; // 0x290 (0x118)

	/* Functions */

	// Function /Script/FortniteGame.PropertyOverrideDataReplChunkActor.OnRep_PartialReplOverrides (Underlying native function: OnRep_PartialReplOverrides 0x89b9b40)
	void OnRepPartialReplOverrides(); // (Final | Native | Public)

	// Function /Script/FortniteGame.PropertyOverrideDataReplChunkActor.OnRep_ChunkIndex (Underlying native function: OnRep_ChunkIndex 0x89b9a94)
	void OnRepChunkIndex(); // (Final | Native | Public)
};

