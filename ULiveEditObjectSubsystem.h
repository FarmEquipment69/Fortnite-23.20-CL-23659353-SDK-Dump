// Class /Script/LiveEditObject.LiveEditObjectSubsystem
// Size: 0x128
class ULiveEditObjectSubsystem : public UEngineSubsystem
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	int MaxBytesQueuedForReplication; // 0x38 (0x4)
	int NumPackageMapBunchesToDelayTickFor; // 0x3c (0x4)
	struct TArray<class ULiveEditObjectSubsystemState*> NetDriverStates; // 0x40 (0x10)
	unsigned char padding_50[0xd8]; // 0x50 (0xd8)
};

