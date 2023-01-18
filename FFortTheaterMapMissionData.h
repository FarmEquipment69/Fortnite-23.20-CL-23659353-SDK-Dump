// ScriptStruct /Script/FortniteGame.FortTheaterMapMissionData
// Size: 0x30
struct FFortTheaterMapMissionData
{
	struct TArray<struct FFortTheaterMissionWeight> MissionWeights; // 0x0 (0x10)
	struct TArray<struct FFortTheaterDifficultyWeight> DifficultyWeights; // 0x10 (0x10)
	int NumMissionsAvailable; // 0x20 (0x4)
	int NumMissionsToChange; // 0x24 (0x4)
	float MissionChangeFrequency; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

