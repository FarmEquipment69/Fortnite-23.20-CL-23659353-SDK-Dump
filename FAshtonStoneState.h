// ScriptStruct /Script/FortniteGame.AshtonStoneState
// Size: 0x14
struct FAshtonStoneState
{
	enum EAshtonStoneType StoneType; // 0x0 (0x1)
	enum EAshtonStoneStateType StoneState; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FGameplayTag GameplayTag; // 0x4 (0x4)
	float SpawnTime; // 0x8 (0x4)
	bool bHasEverSpawned; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	int SpawnDataIdx; // 0x10 (0x4)
};

