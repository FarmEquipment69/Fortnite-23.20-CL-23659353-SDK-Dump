// Class /Script/FortniteGame.FortAthenaMutator_ButterflyEvent
// Size: 0x410
class AFortAthenaMutator_ButterflyEvent : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnPawnBroadcast; // 0x330 (0x10)
	unsigned char unreflected_340[0x20]; // 0x340 (0x20) 
	float PawnGatherFrequency; // 0x360 (0x4)
	unsigned char unreflected_364[0xc]; // 0x364 (0xc) 
	struct FScalableFloat PawnSpawnLocationX; // 0x370 (0x28)
	struct FScalableFloat PawnSpawnLocationY; // 0x398 (0x28)
	struct FScalableFloat PawnSpawnMinDistance; // 0x3c0 (0x28)
	struct FScalableFloat PawnSpawnMaxDistance; // 0x3e8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_ButterflyEvent.UpdatePawnBroadcasting (Underlying native function: UpdatePawnBroadcasting 0x848a650)
	void UpdatePawnBroadcasting(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_ButterflyEvent.StopGatheringPawns (Underlying native function: StopGatheringPawns 0x848a63c)
	void StopGatheringPawns(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_ButterflyEvent.StartGatheringPawns (Underlying native function: StartGatheringPawns 0x848a628)
	void StartGatheringPawns(); // (Final | Native | Public | BlueprintCallable)
};

