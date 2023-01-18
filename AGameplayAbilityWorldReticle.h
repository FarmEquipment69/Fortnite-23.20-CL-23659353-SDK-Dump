// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x2b8
class AGameplayAbilityWorldReticle : public AActor
{
	struct FWorldReticleParameters Parameters; // 0x288 (0x18)
	bool bFaceOwnerFlat; // 0x2a0 (0x1)
	bool bSnapToTargetedActor; // 0x2a1 (0x1)
	bool bIsTargetValid; // 0x2a2 (0x1)
	bool bIsTargetAnActor; // 0x2a3 (0x1)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	class APlayerController* PrimaryPC; // 0x2a8 (0x8)
	class AActor* TargetingActor; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector (Has no native function)
	void SetReticleMaterialParamVector(struct FName& ParamName, struct FVector& Value); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat (Has no native function)
	void SetReticleMaterialParamFloat(struct FName& ParamName, float& Value); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged (Has no native function)
	void OnValidTargetChanged(bool& bNewValue); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor (Has no native function)
	void OnTargetingAnActor(bool& bNewValue); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized (Has no native function)
	void OnParametersInitialized(); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource (Underlying native function: FaceTowardSource 0x6ae0574)
	void FaceTowardSource(bool& bFaceIn2D); // (Final | Native | Public | BlueprintCallable)
};

