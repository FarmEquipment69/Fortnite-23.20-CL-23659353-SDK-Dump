// Class /Script/FortniteGame.FortPlaysetGrenadeItemDefinition
// Size: 0xe10
class UFortPlaysetGrenadeItemDefinition : public UFortWeaponRangedItemDefinition
{
	struct TWeakObjectPtr<class UFortPlaysetItemDefinition> PlaysetToSpawn; // 0xde0 (0x28)
	unsigned char padding_e08[0x8]; // 0xe08 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlaysetGrenadeItemDefinition.GetPlaysetToSpawn (Underlying native function: GetPlaysetToSpawn 0x8a7870c)
	class UFortPlaysetItemDefinition* GetPlaysetToSpawn(bool& bForceLoad); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

