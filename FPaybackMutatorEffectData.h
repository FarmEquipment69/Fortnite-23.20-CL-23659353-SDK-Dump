// ScriptStruct /Script/FortniteGame.PaybackMutatorEffectData
// Size: 0x30
struct FPaybackMutatorEffectData
{
	class AFortPlayerStateAthena* KillerPlayerState; // 0x8 (0x8)
	unsigned char VictimTeam; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<class AFortPlayerStateAthena*> VictimPlayerStates; // 0x18 (0x10)
	float StartTime; // 0x28 (0x4)
	float EndTime; // 0x2c (0x4)
};

