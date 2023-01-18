// Class /Script/FortniteGame.FortControllerEffect_SpawnAI
// Size: 0x70
class UFortControllerEffect_SpawnAI : public UFortControllerEffect
{
	class UClass* AISpawnerData; // 0x28 (0x8)
	struct FVector LocalSpaceSpawnOffset; // 0x30 (0x18)
	bool bLocalSpaceOffsetIgnorePitchAndRoll; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FRotator AdditionalRelativeRotationOffset; // 0x50 (0x18)
	float SpawnDelay; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

