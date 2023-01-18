// ScriptStruct /Script/FortniteGame.FortTeamPerkLoadoutCondition
// Size: 0x68
struct FFortTeamPerkLoadoutCondition
{
	int NumTimesSatisfiable; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FGameplayTagQuery RequiredTagQuery; // 0x8 (0x48)
	unsigned char bConsiderMinimumTier; // 0x50 (0x1)
	unsigned char bConsiderMaximumTier; // 0x50 (0x1)
	unsigned char bConsiderMinimumLevel; // 0x50 (0x1)
	unsigned char bConsiderMaximumLevel; // 0x50 (0x1)
	unsigned char bConsiderMinimumRarity; // 0x50 (0x1)
	unsigned char bConsiderMaximumRarity; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	enum EFortItemTier MinimumHeroTier; // 0x54 (0x1)
	enum EFortItemTier MaximumHeroTier; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	int MinimumHeroLevel; // 0x58 (0x4)
	int MaximumHeroLevel; // 0x5c (0x4)
	enum EFortRarity MinimumHeroRarity; // 0x60 (0x1)
	enum EFortRarity MaximumHeroRarity; // 0x61 (0x1)
	unsigned char padding_62[0x6]; // 0x62 (0x6)
};

