// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x90
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
	struct FMulticastInlineDelegate OnSync; // 0x78 (0x10)
	unsigned char padding_88[0x8]; // 0x88 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync (Underlying native function: WaitNetSync 0x6aee9b4)
	static class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility*& OwningAbility, enum EAbilityTaskNetSyncType& SyncType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback (Underlying native function: OnSignalCallback 0x6ae7bfc)
	void OnSignalCallback(); // (Final | Native | Public)
};

