// ScriptStruct /Script/FortniteGame.FortPlayspaceMatchmakingSettings
// Size: 0x28
struct FFortPlayspaceMatchmakingSettings
{
	enum EFortPlayspaceMatchmakingRules MatchmakingRule; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FName> SpecificPlaylists; // 0x8 (0x10)
	struct TArray<struct FName> ExcludedPlaylists; // 0x18 (0x10)
};

