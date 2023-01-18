// ScriptStruct /Script/FortniteUI.FortCountdownSounds
// Size: 0x20
struct FFortCountdownSounds
{
	class USoundBase* sound; // 0x0 (0x8)
	int StartTime; // 0x8 (0x4)
	int StopTime; // 0xc (0x4)
	float FadeOutTime; // 0x10 (0x4)
	bool bPlayed; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	class UAudioComponent* PlayInstance; // 0x18 (0x8)
};

