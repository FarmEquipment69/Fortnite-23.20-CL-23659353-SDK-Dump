// Class /Script/FortniteGame.FortPlayerSaveComponent
// Size: 0x2c8
class UFortPlayerSaveComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x80]; // 0xa0 (0x80) 
	class UVkPersistenceManager* PersistenceManager; // 0x120 (0x8)
	unsigned char unreflected_128[0x118]; // 0x128 (0x118) 
	struct FFortInventory_SaveEntrySettings AutoSaveEntrySettings; // 0x240 (0x38)
	class AFortMinigame* CurrentMinigame; // 0x278 (0x8)
	struct FSaveRestrictions SaveRestrictions; // 0x280 (0x30)
	unsigned char unreflected_2b0[0x8]; // 0x2b0 (0x8) 
	struct TArray<struct FPendingToApplyData> PendingToApplyData; // 0x2b8 (0x10)
};

