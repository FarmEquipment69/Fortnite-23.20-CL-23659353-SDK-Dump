// ScriptStruct /Script/FortniteGame.BattlePassRewardInfo
// Size: 0x20
struct FBattlePassRewardInfo
{
	class UFortItemDefinition* ItemDef; // 0x0 (0x8)
	int Level; // 0x8 (0x4)
	bool bIsFree; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	int QuantityRewarded; // 0x10 (0x4)
	enum EBattlePassRewardSource UnlockableSource; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	class UFortItemDefinition* UnlockableSourceItemDef; // 0x18 (0x8)
};

