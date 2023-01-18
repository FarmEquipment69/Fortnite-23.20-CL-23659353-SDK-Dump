// ScriptStruct /Script/PlayspaceSystem.PlayspaceSpawningInfo
// Size: 0x98
struct FPlayspaceSpawningInfo
{
	struct FUniqueNetIdRepl UserId; // 0x0 (0x30)
	struct TWeakObjectPtr<class APlayspace> RequestingPlayspace; // 0x30 (0x8)
	class AActor* SpawnLocationActor; // 0x38 (0x8)
	struct FVector SpawnLocation; // 0x40 (0x18)
	struct FRotator SpawnRotation; // 0x58 (0x18)
	float SpawnTimeServer; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FVector LastLocation; // 0x78 (0x18)
	float MinTimeForCameraFadeTransition; // 0x90 (0x4)
	unsigned char padding_94[0x4]; // 0x94 (0x4)
};

