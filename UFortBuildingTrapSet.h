// Class /Script/FortniteGame.FortBuildingTrapSet
// Size: 0x778
class UFortBuildingTrapSet : public UFortBuildingActorSet
{
	struct FFortGameplayAttributeData Durability; // 0x680 (0x28)
	struct FFortGameplayAttributeData MaxDurability; // 0x6a8 (0x28)
	struct FFortGameplayAttributeData DurabilityCostPerFire; // 0x6d0 (0x28)
	struct FFortGameplayAttributeData ArmTime; // 0x6f8 (0x28)
	struct FFortGameplayAttributeData ReloadTime; // 0x720 (0x28)
	unsigned char padding_748[0x30]; // 0x748 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingTrapSet.OnRep_Durability (Underlying native function: OnRep_Durability 0x85a54f8)
	void OnRepDurability(); // (Final | Native | Public)
};

