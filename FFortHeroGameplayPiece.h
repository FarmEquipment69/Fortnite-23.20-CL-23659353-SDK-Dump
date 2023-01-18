// ScriptStruct /Script/FortniteGame.FortHeroGameplayPiece
// Size: 0x98
struct FFortHeroGameplayPiece
{
	struct TWeakObjectPtr<class UFortAbilityKit> GrantedAbilityKit; // 0x0 (0x28)
	struct FGameplayTagQuery RequiredCommanderTagQuery; // 0x28 (0x48)
	struct FText CommanderRequirementsText; // 0x70 (0x18)
	bool bUseGlobalDefaultMinima; // 0x88 (0x1)
	enum EFortItemTier MinimumHeroTier; // 0x89 (0x1)
	unsigned char unreflected_8a[0x2]; // 0x8a (0x2) 
	int MinimumHeroLevel; // 0x8c (0x4)
	enum EFortRarity MinimumHeroRarity; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

