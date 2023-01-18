// ScriptStruct /Script/FortniteGame.CrucibleSegmentData
// Size: 0x14
struct FCrucibleSegmentData
{
	bool bRegistered; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int NumAI; // 0x4 (0x4)
	int NumTargets; // 0x8 (0x4)
	float MissedTargetPenalty; // 0xc (0x4)
	enum EFortCrucibleStatType BackendStatType; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

