// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_DynamicRollPlayerComponent
// Size: 0x198
class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent
{
	class UClass* AssociatedManagerClass; // 0xa0 (0x8)
	struct FScalableFloat Enabled; // 0xa8 (0x28)
	class UFortGamestateComponent_DynamicRollTableManager* TableManager; // 0xd0 (0x8)
	unsigned char unreflected_d8[0x64]; // 0xd8 (0x64) 
	struct FRandomStream* SeededRNG; // 0x13c (0x8)
	unsigned char padding_144[0x54]; // 0x144 (0x54)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_DynamicRollPlayerComponent.AuthorityRollChoices (Underlying native function: AuthorityRollChoices 0x7290864)
	struct TArray<struct FFortDynamicRollResult*> AuthorityRollChoices(int& NumChoices, struct TArray<class UFortItemDefinition*>& IgnoreItems); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

