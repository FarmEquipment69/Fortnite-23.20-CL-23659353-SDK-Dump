// ScriptStruct /Script/FortniteGame.HeistExitCraftData
// Size: 0x30
struct FHeistExitCraftData
{
	class AFortAthenaExitCraftSpawner* ExitCraftSpawner; // 0x0 (0x8)
	class AFortAthenaExitCraft* SpawnedExitCraft; // 0x8 (0x8)
	enum EHeistExitCraftState ExitCraftState; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<class AFortPlayerPawnAthena*> DepartedPawns; // 0x18 (0x10)
	float SpawnTime; // 0x28 (0x4)
	bool bIsUsed; // 0x2c (0x1)
	bool bHasDeparted; // 0x2d (0x1)
	unsigned char padding_2e[0x2]; // 0x2e (0x2)
};

