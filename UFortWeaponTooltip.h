// Class /Script/FortniteGame.FortWeaponTooltip
// Size: 0x100
class UFortWeaponTooltip : public UFortWorldItemTooltip
{
	struct TWeakObjectPtr<class UFortWorldItem> CachedWeapon; // 0x50 (0x8)
	unsigned char unreflected_58[0xa0]; // 0x58 (0xa0) 
	struct TWeakObjectPtr<class UFortAbilitySystemComponent> CachedAbilitySystemComponent; // 0xf8 (0x8)
};

