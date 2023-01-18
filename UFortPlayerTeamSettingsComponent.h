// Class /Script/FortniteGame.FortPlayerTeamSettingsComponent
// Size: 0x308
class UFortPlayerTeamSettingsComponent : public UFortPlayerSettingsComponentBase
{
	unsigned char TeamIndex; // 0x278 (0x1)
	unsigned char unreflected_279[0x7]; // 0x279 (0x7) 
	struct FString TeamName; // 0x280 (0x10)
	struct FString TeamDescription; // 0x290 (0x10)
	struct FCreativeIconOption TeamIcon; // 0x2a0 (0x50)
	int TeamColorIndex; // 0x2f0 (0x4)
	bool bRunOutTimeToWin; // 0x2f4 (0x1)
	bool bUseTeamScore; // 0x2f5 (0x1)
	unsigned char unreflected_2f6[0x2]; // 0x2f6 (0x2) 
	struct FCreativeClassOption* DefaultClassIdentifier; // 0x2f8 (0x8)
	unsigned char DefaultClassSlot; // 0x300 (0x1)
	enum ECreativeRespawnWaveType RespawnWaveType; // 0x301 (0x1)
	unsigned char padding_302[0x6]; // 0x302 (0x6)
};

