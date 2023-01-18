// Class /Script/FortniteGame.FortAthenaMutator_EnvironmentalDamage
// Size: 0x388
class AFortAthenaMutator_EnvironmentalDamage : public AFortAthenaMutator
{
	struct FGameplayTagQuery DamageTagQuery; // 0x330 (0x48)
	float DamageMultiplier; // 0x378 (0x4)
	bool bExcludeActorsAddedToVolume; // 0x37c (0x1)
	unsigned char unreflected_37d[0x3]; // 0x37d (0x3) 
	float WorldActivationTime; // 0x380 (0x4)
	enum EBuildingDamageTeamFilter TeamDamageFilter; // 0x384 (0x1)
	enum EEnvironmentDamageFilter EnvironmentDamageFilter; // 0x385 (0x1)
	unsigned char padding_386[0x2]; // 0x386 (0x2)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_EnvironmentalDamage.GetValueFromDamageFilter (Underlying native function: GetValueFromDamageFilter 0x84a674c)
	float GetValueFromDamageFilter(enum EEnvironmentDamageFilter& DamageFilter); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_EnvironmentalDamage.GetDamageFilterFromValue (Underlying native function: GetDamageFilterFromValue 0x84a59f8)
	enum EEnvironmentDamageFilter GetDamageFilterFromValue(float& Value); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

