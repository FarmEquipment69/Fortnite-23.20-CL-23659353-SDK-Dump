// Class /Script/FortniteGame.FortAnimNotifyState_ToySpawn
// Size: 0x140
class UFortAnimNotifyState_ToySpawn : public UAnimNotifyState
{
	struct FName SocketName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FVector LocationOffset; // 0x38 (0x18)
	struct FRotator RotationOffset; // 0x50 (0x18)
	int PropId; // 0x68 (0x4)
	bool bRepositionOnSpawn; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	struct FTransform ComponentSpaceSpawnPoint; // 0x70 (0x60)
	bool bRepositionOnLaunch; // 0xd0 (0x1)
	unsigned char unreflected_d1[0xf]; // 0xd1 (0xf) 
	struct FTransform ComponentSpaceLaunchPoint; // 0xe0 (0x60)
};

