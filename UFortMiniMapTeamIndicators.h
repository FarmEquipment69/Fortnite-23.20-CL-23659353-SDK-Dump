// Class /Script/FortniteGame.FortMiniMapTeamIndicators
// Size: 0x750
class UFortMiniMapTeamIndicators : public UFortMiniMapIndicator
{
	class AFortPlayerController* PlayerController; // 0x140 (0x8)
	bool bSpectating; // 0x148 (0x1)
	unsigned char unreflected_149[0x7]; // 0x149 (0x7) 
	class AFortPlayerControllerSpectating* SpectatorPC; // 0x150 (0x8)
	class UAthenaIndicatorPlayersCache* IndicatedPlayersCache; // 0x158 (0x8)
	float PlatformScale; // 0x160 (0x4)
	unsigned char unreflected_164[0xc]; // 0x164 (0xc) 
	struct FSlateBrush SquadPlayerBrush; // 0x170 (0xc0)
	struct FSlateBrush TeamPlayerBrush; // 0x230 (0xc0)
	struct FSlateBrush EnemyPlayerBrush; // 0x2f0 (0xc0)
	struct FSlateBrush SpectatedPlayerBrush; // 0x3b0 (0xc0)
	struct FSlateBrush SpectatedPlayerVehicleBrush; // 0x470 (0xc0)
	struct FSlateBrush MiniMapIconBrushDBNO; // 0x530 (0xc0)
	struct FLinearColor MinimapIconColorSelf; // 0x5f0 (0x10)
	struct FLinearColor MinimapIconColorTeammate; // 0x600 (0x10)
	struct FLinearColor MinimapIconColorEnemy; // 0x610 (0x10)
	struct TArray<struct FLinearColor> MinimapIconColorEnemyMultiTeam; // 0x620 (0x10)
	struct FSlateBrush PlayerNameBackgroundBrush; // 0x630 (0xc0)
	struct FSlateFontInfo PlayerNameFontInfo; // 0x6f0 (0x58)
	unsigned char padding_748[0x8]; // 0x748 (0x8)
};

