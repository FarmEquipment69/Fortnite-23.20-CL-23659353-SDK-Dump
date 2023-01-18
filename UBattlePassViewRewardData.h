// Class /Script/FortniteUI.BattlePassViewRewardData
// Size: 0x48
class UBattlePassViewRewardData : public UObject
{
	class UFortItem* Reward; // 0x28 (0x8)
	bool bIsFreeItem; // 0x30 (0x1)
	bool bIsOwned; // 0x31 (0x1)
	enum EBattlePassRewardSource UnlockableSource; // 0x32 (0x1)
	unsigned char unreflected_33[0x5]; // 0x33 (0x5) 
	class UFortItemDefinition* UnlockableSourceItemDef; // 0x38 (0x8)
	int ItemLevel; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

