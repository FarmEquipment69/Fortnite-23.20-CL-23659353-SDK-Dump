// ScriptStruct /Script/FortniteGame.FortExpeditionResultNotification
// Size: 0x18
struct FFortExpeditionResultNotification
{
	bool bExpeditionSucceeded; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FMcpLootEntry> ExpeditionRewards; // 0x8 (0x10)
};

