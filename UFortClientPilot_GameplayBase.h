// Class /Script/FortniteGame.FortClientPilot_GameplayBase
// Size: 0x300
class UFortClientPilot_GameplayBase : public UFortClientPilot_Base
{
	float LastRandomTurnTime; // 0x15c (0x4)
	float LastPickLootTime; // 0x160 (0x4)
	float LastPickEnemyTime; // 0x164 (0x4)
	float LastEnemyKilledTime; // 0x168 (0x4)
	float LastBuildingKilledTime; // 0x16c (0x4)
	float LastGoodInteraction; // 0x170 (0x4)
	float LastCheckGoodTarget; // 0x174 (0x4)
	float LastPickEditTime; // 0x178 (0x4)
	unsigned char unreflected_17c[0xcc]; // 0x17c (0xcc) 
	struct FVector ViewLocation; // 0x248 (0x18)
	class AFortPlayerPawn* MyPawn; // 0x260 (0x8)
	struct TArray<class UFortWorldItem*> ItemsToCheckForMaxStackSize; // 0x268 (0x10)
	unsigned char unreflected_278[0x68]; // 0x278 (0x68) 
	struct TArray<class UFortClientPilot_BuildingScript*> BuildingScripts; // 0x2e0 (0x10)
	unsigned char unreflected_2f0[0x8]; // 0x2f0 (0x8) 
	struct FTimerHandle* MissionEndTimerHandle; // 0x2f8 (0x8)
};

