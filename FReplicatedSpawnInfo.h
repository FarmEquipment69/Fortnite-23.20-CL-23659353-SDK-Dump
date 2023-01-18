// ScriptStruct /Script/PlayspaceSystem.ReplicatedSpawnInfo
// Size: 0x58
struct FReplicatedSpawnInfo
{
	struct FVector SpawnLocation; // 0x0 (0x18)
	struct FRotator SpawnRotation; // 0x18 (0x18)
	float ServerSpawnTime; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FVector LastLocation; // 0x38 (0x18)
	float MinTimeForCameraFadeTransition; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

