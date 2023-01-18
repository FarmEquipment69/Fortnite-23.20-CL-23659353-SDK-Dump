// Class /Script/FortniteGame.LevelRecordSpawner
// Size: 0x3a0
class ULevelRecordSpawner : public UObject
{
	unsigned char unreflected_28[0x70]; // 0x28 (0x70) 
	struct TMap<struct FGuid, class AActor*> AdditionalGuidToActorTableForReferenceFixup; // 0x98 (0x50)
	unsigned char unreflected_e8[0x1d8]; // 0xe8 (0x1d8) 
	struct TArray<class UObject*> LoadedDependencies; // 0x2c0 (0x10)
	unsigned char unreflected_2d0[0x50]; // 0x2d0 (0x50) 
	struct TMap<struct FGuid, class AActor*> SpawnedActors; // 0x320 (0x50)
	unsigned char padding_370[0x30]; // 0x370 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.LevelRecordSpawner.FailsafeTimerExpired (Underlying native function: FailsafeTimerExpired 0x8ab4530)
	bool FailsafeTimerExpired(float& dts); // (Final | Native | Private)
};

