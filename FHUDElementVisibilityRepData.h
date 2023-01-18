// ScriptStruct /Script/FortniteGame.HUDElementVisibilityRepData
// Size: 0x78
struct FHUDElementVisibilityRepData
{
	struct FGameplayTagContainer HiddenHUDElements; // 0x0 (0x20)
	struct FGameplayTagContainer ShownHUDElements; // 0x20 (0x20)
	struct TArray<enum EFortHUDElementVisibiltyOption> WorldResourceVisibilities; // 0x40 (0x10)
	struct TArray<enum EFortHUDElementVisibiltyOption> GamePhaseStateVisibilities; // 0x50 (0x10)
	enum EFortReticleVisibiltyOption ReticleVisibilityOption; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	int ModSourceID; // 0x64 (0x4)
	int TeamSpecifier; // 0x68 (0x4)
	int ClassSpecifier; // 0x6c (0x4)
	bool bInvertTeamSelection; // 0x70 (0x1)
	bool bInvertClassSelection; // 0x71 (0x1)
	unsigned char padding_72[0x6]; // 0x72 (0x6)
};

