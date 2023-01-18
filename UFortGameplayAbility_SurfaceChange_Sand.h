// Class /Script/FortniteGame.FortGameplayAbility_SurfaceChange_Sand
// Size: 0xbd8
class UFortGameplayAbility_SurfaceChange_Sand : public UFortGameplayAbility
{
	struct FActiveGameplayEffectHandle* SnareGEHandle; // 0xb20 (0x8)
	class UClass* SnareGameplayEffectClass; // 0xb28 (0x8)
	bool bIsPawnOnGround; // 0xb30 (0x1)
	unsigned char unreflected_b31[0x7]; // 0xb31 (0x7) 
	struct FScalableFloat RequiresSandEnabled; // 0xb38 (0x28)
	struct FGameplayTag SandEnabledTag; // 0xb60 (0x4)
	unsigned char unreflected_b64[0x4]; // 0xb64 (0x4) 
	struct FGameplayTagContainer TagsThatBlockSnare; // 0xb68 (0x20)
	struct FScalableFloat MinAccelerationToPreventSnareStack; // 0xb88 (0x28)
	struct FScalableFloat MaxWaterDepthToApplySnare; // 0xbb0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility_SurfaceChange_Sand.StartSnareMonitor (Has no native function)
	void StartSnareMonitor(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility_SurfaceChange_Sand.AddSnareStack (Underlying native function: AddSnareStack 0x813e764)
	void AddSnareStack(); // (Final | Native | Public | BlueprintCallable)
};

