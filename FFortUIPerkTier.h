// ScriptStruct /Script/FortniteUI.FortUIPerkTier
// Size: 0x18
struct FFortUIPerkTier
{
	class UFortHeroSpecialization* HeroSpecialization; // 0x0 (0x8)
	class UFortHero* CurrentHero; // 0x8 (0x8)
	enum EFortItemTier Tier; // 0x10 (0x1)
	bool bIsUpgrade; // 0x11 (0x1)
	bool bIsEvolution; // 0x12 (0x1)
	unsigned char padding_13[0x5]; // 0x13 (0x5)
};

