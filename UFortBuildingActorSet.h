// Class /Script/FortniteGame.FortBuildingActorSet
// Size: 0x680
class UFortBuildingActorSet : public UFortHealthSet
{
	struct FFortGameplayAttributeData BuildTime; // 0x630 (0x28)
	struct FFortGameplayAttributeData RepairTime; // 0x658 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingActorSet.OnRep_RepairTime (Underlying native function: OnRep_RepairTime 0x85a79b4)
	void OnRepRepairTime(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortBuildingActorSet.OnRep_BuildTime (Underlying native function: OnRep_BuildTime 0x85a4508)
	void OnRepBuildTime(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

