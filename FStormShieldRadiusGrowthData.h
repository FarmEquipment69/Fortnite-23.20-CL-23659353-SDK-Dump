// ScriptStruct /Script/FortniteGame.StormShieldRadiusGrowthData
// Size: 0x18
struct FStormShieldRadiusGrowthData
{
	float TargetRadius; // 0x0 (0x4)
	float StartingRadius; // 0x4 (0x4)
	float GrowthRate; // 0x8 (0x4)
	float SafeAreaStartRadiusChangeTime; // 0xc (0x4)
	float SafeAreaFinishRadiusChangeTime; // 0x10 (0x4)
	enum EMissionStormShieldState State; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

