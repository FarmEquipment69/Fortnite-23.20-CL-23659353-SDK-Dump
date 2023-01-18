// Class /Script/FortniteGame.InfiltrationCarryObjectComponent
// Size: 0xd0
class UInfiltrationCarryObjectComponent : public UActorComponent
{
	struct TWeakObjectPtr<class AInfiltrationCarryObjectSpawnPoint> ParentSpawnPoint; // 0xa0 (0x8)
	struct TWeakObjectPtr<class AFortAthenaMutator_Infiltration> CachedMutator; // 0xa8 (0x8)
	unsigned char unreflected_b0[0x18]; // 0xb0 (0x18) 
	bool bIsInteractable; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.InfiltrationCarryObjectComponent.GetDefendingTeam (Underlying native function: GetDefendingTeam 0x845dac4)
	unsigned char GetDefendingTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.InfiltrationCarryObjectComponent.GetAttackingTeam (Underlying native function: GetAttackingTeam 0x845d99c)
	unsigned char GetAttackingTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

