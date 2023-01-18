// ScriptStruct /Script/FortniteGame.FortBadgeScoringData
// Size: 0x18
struct FFortBadgeScoringData : FTableRowBase
{
	int ScoreAwarded; // 0x8 (0x4)
	int MissionPoints; // 0xc (0x4)
	enum EStatCategory ScoreCategory; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int ScoreThreshold; // 0x14 (0x4)
};

