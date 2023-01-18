// ScriptStruct /Script/FortniteGame.FortRespawnData
// Size: 0x40
struct FFortRespawnData
{
	bool bRespawnDataAvailable; // 0x0 (0x1)
	bool bClientIsReady; // 0x1 (0x1)
	bool bServerIsReady; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FVector RespawnLocation; // 0x8 (0x18)
	struct FRotator RespawnRotation; // 0x20 (0x18)
	float RespawnCameraDistance; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

