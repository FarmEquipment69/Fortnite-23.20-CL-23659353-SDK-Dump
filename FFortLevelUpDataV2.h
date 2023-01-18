// ScriptStruct /Script/FortniteGame.FortLevelUpDataV2
// Size: 0x38
struct FFortLevelUpDataV2 : FTableRowBase
{
	int Xp; // 0x8 (0x4)
	int DifficultyLevel; // 0xc (0x4)
	float XPDisplayMultiplier; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FFortRewardQuantityPair> Rewards; // 0x18 (0x10)
	int RestXPCap; // 0x28 (0x4)
	int RestXPRechargeRate; // 0x2c (0x4)
	int BoostXPPerConsumable; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

