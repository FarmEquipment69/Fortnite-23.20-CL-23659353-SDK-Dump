// Class /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
// Size: 0x108
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{
	struct FScalableFloat RelevancyDeathTimeLength; // 0xa0 (0x28)
	bool bSetLifespanOnLastRelevancyDeath; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float OwnerMaxHealthCached; // 0xcc (0x4)
	struct TArray<class UDamageRecordEntry*> ReplicatedDamageRecords; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnSpecialRelevancyDeath; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnSpecialRelevancyDamage; // 0xf0 (0x10)
	class AFortAthenaMutator_SpecialRelevancy* CachedMutator; // 0x100 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled (Has no native function)
	void OnKilled(class AFortPlayerState*& KillingPlayerState, int& RelevancyGroupIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged (Has no native function)
	void OnDamaged(class AFortPlayerState*& DamagingPlayerState, int& RelevancyGroupIndex, float& DealtDamage, float& ActualDealtDamage, float& TotalDamage, float& DealtDamagePercent, float& ActualDealtDamagePercent, float& TotalDamagePercent, float& MaxHealth, bool& bKilled); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex (Underlying native function: GetHealthPercentFromRelevancyIndex 0x76c2b4c)
	float GetHealthPercentFromRelevancyIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent (Underlying native function: GetHealthPercent 0x76c2a04)
	float GetHealthPercent(class AActor*& RelevancyActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex (Underlying native function: GetHealthFromRelevancyIndex 0x76c2abc)
	float GetHealthFromRelevancyIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth (Underlying native function: GetHealth 0x76c2a04)
	float GetHealth(class AActor*& RelevancyActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent (Underlying native function: ClientGetHealthPercent 0x76c0730)
	float ClientGetHealthPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth (Underlying native function: ClientGetHealth 0x76c0708)
	float ClientGetHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

