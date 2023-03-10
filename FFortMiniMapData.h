// ScriptStruct /Script/FortniteGame.FortMiniMapData
// Size: 0xc8
struct FFortMiniMapData
{
	class UObject* MiniMapIcon; // 0x0 (0x8)
	struct FVector2D IconScale; // 0x8 (0x10)
	unsigned char bUseIconSize; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FVector2D IconMaterialSize; // 0x20 (0x10)
	unsigned char bIsVisible; // 0x30 (0x1)
	unsigned char bIsVisibleOnMiniMap; // 0x30 (0x1)
	unsigned char bIsVisibleOnMap; // 0x30 (0x1)
	unsigned char bIsVisibilityBasedOnTeam; // 0x30 (0x1)
	unsigned char bShowVerticalOffset; // 0x30 (0x1)
	unsigned char bShowFarOffIndicator; // 0x30 (0x1)
	unsigned char bDisplayIconEvenOnFogOfWar; // 0x30 (0x1)
	unsigned char bAllowLocalOverrides; // 0x30 (0x1)
	unsigned char bUseTeamAffiliationColors; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	struct TEnumAsByte<EFortMinimapLayer> DrawLayer; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct FLinearColor Color; // 0x38 (0x10)
	struct FLinearColor FriendColor; // 0x48 (0x10)
	struct FLinearColor EnemyColor; // 0x58 (0x10)
	struct FLinearColor NeutralColor; // 0x68 (0x10)
	struct FLinearColor PulseColor; // 0x78 (0x10)
	float ColorPulsesPerSecond; // 0x88 (0x4)
	float SizePulsesPerSecond; // 0x8c (0x4)
	float ViewableDistance; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FVector LocationOffset; // 0x98 (0x18)
	int Priority; // 0xb0 (0x4)
	unsigned char Team; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct TArray<struct FFortMiniMapIconMaterialParameterData> MiniMapIconMaterialParameterDataList; // 0xb8 (0x10)
};

