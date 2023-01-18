// ScriptStruct /Script/FortniteGame.GiveInventoryItemParams
// Size: 0x20
struct FGiveInventoryItemParams
{
	bool bNotifyPlayer; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int ItemLevel; // 0x4 (0x4)
	int PickupInstigatorHandle; // 0x8 (0x4)
	bool bUseItemPickupAnalyticEvent; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct TArray<struct FGiveInventoryItemParams_StateValue*> StateValues; // 0x10 (0x10)
};

