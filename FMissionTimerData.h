// ScriptStruct /Script/FortniteGame.MissionTimerData
// Size: 0x30
struct FMissionTimerData
{
	bool bTimerIsPaused; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float OriginalTimePeriod; // 0x4 (0x4)
	float ReplicatedRemainingTime; // 0x8 (0x4)
	float TimeAddedOrRemoved; // 0xc (0x4)
	float LastTimeAddedOrRemoved; // 0x10 (0x4)
	float ClientRemainingTime; // 0x14 (0x4)
	unsigned char padding_18[0x18]; // 0x18 (0x18)
};

