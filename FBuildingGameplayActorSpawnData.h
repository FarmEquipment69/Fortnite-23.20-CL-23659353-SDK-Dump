// ScriptStruct /Script/FortniteGame.BuildingGameplayActorSpawnData
// Size: 0x14
struct FBuildingGameplayActorSpawnData
{
	int BGAIndex; // 0x0 (0x4)
	int NumSpawnedBGAs; // 0x4 (0x4)
	int NumBGAsToSpawn; // 0x8 (0x4)
	float NextSpawnTime; // 0xc (0x4)
	enum EBuildingGameplayActorAircraftSpawnSide LastSpawnSide; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

