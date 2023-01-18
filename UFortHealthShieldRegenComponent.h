// Class /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent
// Size: 0x1a0
class UFortHealthShieldRegenComponent : public UActorComponent
{
	unsigned char unreflected_1a0[0x1a0]; 

	/* Functions */

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates (Underlying native function: ClearHealthShieldRegen_ShieldListenerDelegates 0x744bd58)
	static void ClearHealthShieldRegenShieldListenerDelegates(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates (Underlying native function: ClearHealthShieldRegen_HealthListenerDelegates 0x744bafc)
	static void ClearHealthShieldRegenHealthListenerDelegates(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates (Underlying native function: AssignHealthShieldRegen_ShieldListenerDelegates 0x744b39c)
	static void AssignHealthShieldRegenShieldListenerDelegates(class UGameplayAbility*& OwningAbility, struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates (Underlying native function: AssignHealthShieldRegen_HealthListenerDelegates 0x744ae4c)
	static void AssignHealthShieldRegenHealthListenerDelegates(class UGameplayAbility*& OwningAbility, struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen (Underlying native function: AllowHealthShieldRegen 0x744ae30)
	static bool AllowHealthShieldRegen(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

