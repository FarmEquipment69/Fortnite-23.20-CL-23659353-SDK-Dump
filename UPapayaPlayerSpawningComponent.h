// Class /Script/FortniteGame.PapayaPlayerSpawningComponent
// Size: 0xe0
class UPapayaPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{
	unsigned char unreflected_b0[0x8]; // 0xb0 (0x8) 
	struct TArray<class AFortPlayerStartWarmup*> BestSpawnPoints; // 0xb8 (0x10)
	struct TArray<class AFortPlayerStartWarmup*> HighPrioritySpawnPoints; // 0xc8 (0x10)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

