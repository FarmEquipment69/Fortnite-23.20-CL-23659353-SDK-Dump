// Class /Script/FortniteGame.FortGameplayAbility_SpyTech_GrantItemMulti
// Size: 0xc68
class UFortGameplayAbility_SpyTech_GrantItemMulti : public UFortGameplayAbility_SpyTech_GrantItem
{
	struct TWeakObjectPtr<class UDataTable> GrantableItemListTable; // 0xc10 (0x28)
	struct FScalableFloat ActivationUpdateTime; // 0xc38 (0x28)
	struct FTimerHandle* ActivationUpdateTimeHandle; // 0xc60 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_SpyTech_GrantItemMulti.GrantItems (Underlying native function: GrantItems 0x8122b3c)
	void GrantItems(); // (Final | Native | Protected)
};

