// Class /Script/FortniteGame.FortGameplayAbility_LeadingTeam
// Size: 0xbb0
class UFortGameplayAbility_LeadingTeam : public UFortGameplayAbility
{
	struct FScalableFloat MinLeadToApplyAbilities; // 0xb20 (0x28)
	struct FScalableFloat MaxLeadToRemoveAbilities; // 0xb48 (0x28)
	class UFortAbilitySet* LeaderAbilitySetToApply; // 0xb70 (0x8)
	struct FScalableFloat bApplyAbilitiesOnLand; // 0xb78 (0x28)
	unsigned char padding_ba0[0x10]; // 0xba0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_LeadingTeam.ApplyLeaderAbilitySet (Underlying native function: ApplyLeaderAbilitySet 0x811f0b0)
	void ApplyLeaderAbilitySet(); // (Final | Native | Private)
};

