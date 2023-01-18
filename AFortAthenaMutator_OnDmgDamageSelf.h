// Class /Script/FortniteGame.FortAthenaMutator_OnDmgDamageSelf
// Size: 0x360
class AFortAthenaMutator_OnDmgDamageSelf : public AFortAthenaMutator
{
	float DamageToDeal; // 0x330 (0x4)
	bool bRequiresNonZeroDamage; // 0x334 (0x1)
	unsigned char unreflected_335[0x3]; // 0x335 (0x3) 
	int TargetQueryIndex; // 0x338 (0x4)
	int WeaponQueryIndex; // 0x33c (0x4)
	struct TArray<struct FGameplayTagQuery> TargetQueries; // 0x340 (0x10)
	struct TArray<struct FGameplayTagQuery> WeaponQueries; // 0x350 (0x10)
};

