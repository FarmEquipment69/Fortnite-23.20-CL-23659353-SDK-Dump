// Class /Script/FortniteGame.FortPlayerPerksItemDefinition
// Size: 0x450
class UFortPlayerPerksItemDefinition : public UFortAccountItemDefinition
{
	struct FGameplayTag SecondaryXpSource; // 0x420 (0x4)
	unsigned char unreflected_424[0x4]; // 0x424 (0x4) 
	class UDataTable* XpCurve; // 0x428 (0x8)
	struct TArray<struct FPlayerPerkLevel> PlayerPerkLevels; // 0x430 (0x10)
	struct TArray<struct FTechCurrentLevelCap> LevelCaps; // 0x440 (0x10)
};

