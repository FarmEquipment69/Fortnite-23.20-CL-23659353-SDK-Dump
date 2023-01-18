// Class /Script/FortniteGame.FortWindManager
// Size: 0x518
class AFortWindManager : public AActor
{
	unsigned char unreflected_288[0xc]; // 0x288 (0xc) 
	bool bAllowWindImpulses; // 0x294 (0x1)
	bool bAllowResponderAudio; // 0x295 (0x1)
	unsigned char unreflected_296[0x2]; // 0x296 (0x2) 
	float SectionWidth; // 0x298 (0x4)
	float MinimumSectionBlendTime; // 0x29c (0x4)
	struct TWeakObjectPtr<class UMaterialInterface> MaterialDefiningParametersToInterpolate; // 0x2a0 (0x28)
	struct FName WindVectorParameterName; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct TArray<struct FName> WindOffsetMaterialParameterNames; // 0x2d0 (0x10)
	struct TArray<struct FName> WindSpeedMaterialParameterNames; // 0x2e0 (0x10)
	struct TArray<struct FName> WindMaterialScalarParameterNamesToInterpolate; // 0x2f0 (0x10)
	struct TArray<struct FName> WindMaterialVectorParameterNamesToInterpolate; // 0x300 (0x10)
	struct TArray<struct FFortWindImpulseRadius> WindImpulses; // 0x310 (0x10)
	struct TArray<struct FFortWindImpulseCylinderDelta> WindImpulseCylinderDeltas; // 0x320 (0x10)
	struct TArray<struct FFortWindImpulseCylinder> WindImpulseCylinders; // 0x330 (0x10)
	struct TArray<struct FFortWindResponder> WindResponders; // 0x340 (0x10)
	unsigned char unreflected_350[0x8]; // 0x350 (0x8) 
	struct TArray<int> NearbyCacheIndicesForAudio; // 0x358 (0x10)
	struct TArray<int> NearbyCacheIndicesForUpdates; // 0x368 (0x10)
	int NextNearbyIndexToUpdate; // 0x378 (0x4)
	unsigned char unreflected_37c[0x1c]; // 0x37c (0x1c) 
	struct FFortWindResponder ActiveAudioWindResponder; // 0x398 (0xb0)
	struct TMap<class ABuildingSMActor*, class UAudioComponent*> WindActorToWindResponderAudioMap; // 0x448 (0x50)
	struct FName AudioWindSpeedParameterName; // 0x498 (0x4)
	float AudioWindInterpSpeed; // 0x49c (0x4)
	float AudioWindMaxResponderDistance; // 0x4a0 (0x4)
	float UpdateWindMaxResponderDistance; // 0x4a4 (0x4)
	float ViewerMovementDistanceForRefresh; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x4]; // 0x4ac (0x4) 
	struct TArray<class UAudioComponent*> WindAudioComponentPool; // 0x4b0 (0x10)
	unsigned char padding_4c0[0x58]; // 0x4c0 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortWindManager.SetWindImpulseCylinderMagnitude (Underlying native function: SetWindImpulseCylinderMagnitude 0x887e898)
	bool SetWindImpulseCylinderMagnitude(struct FFortWindImpulseHandle& ImpulseHandle, float& NewMagnitude, float& BlendTime); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWindManager.SetWindImpulse (Underlying native function: SetWindImpulse 0x887e78c)
	bool SetWindImpulse(struct FFortWindImpulseHandle& ImpulseHandle, struct FFortWindImpulseRadius& WindImpulse); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWindManager.RemoveWindParticleSystemComponent (Has no native function)
	void RemoveWindParticleSystemComponent(class UParticleSystemComponent*& ParticleSystemComponent); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.RemoveWindImpulse (Underlying native function: RemoveWindImpulse 0x887e5c4)
	void RemoveWindImpulse(struct FFortWindImpulseHandle& ImpulseHandle, float& BlendTime); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWindManager.OnWorldReady (Has no native function)
	void OnWorldReady(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.OnWindImpulseCylinderDeltaComplete (Has no native function)
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.OnWindImpulseCylinderDeath (Has no native function)
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.OnWindImpulseCylinderCreation (Has no native function)
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.OnWindAudioBecameInactive (Has no native function)
	void OnWindAudioBecameInactive(class UAudioComponent*& WindAudioComp); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.OnWindAudioBecameActive (Has no native function)
	void OnWindAudioBecameActive(class UAudioComponent*& WindAudioComp); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.MakeWindImpulseRadius (Underlying native function: MakeWindImpulseRadius 0x887e308)
	static struct FFortWindImpulseRadius MakeWindImpulseRadius(struct FVector& ImpulseLocation, float& ImpulseRadius, float& ImpulseMagnitude, float& ImpulseBlendTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWindManager.MakeWindImpulseCylinder (Underlying native function: MakeWindImpulseCylinder 0x887e020)
	static struct FFortWindImpulseCylinder MakeWindImpulseCylinder(struct FVector& ImpulseLocation, float& ImpulseInnerRadius, float& ImpulseOuterRadius, float& ImpulseMagnitude, struct FVector& ImpulseDirection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWindManager.HasWindImpulse (Underlying native function: HasWindImpulse 0x887d754)
	bool HasWindImpulse(struct FFortWindImpulseHandle& WindImpulseHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWindManager.GetWindManager (Underlying native function: GetWindManager 0x887d224)
	static class AFortWindManager* GetWindManager(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWindManager.GetGlobalWindIntensityAndDirection (Underlying native function: GetGlobalWindIntensityAndDirection 0x887d040)
	void GetGlobalWindIntensityAndDirection(float& WindIntensity, struct FVector& WindDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortWindManager.GetCurrentWindImpulseCylinderDelta (Underlying native function: GetCurrentWindImpulseCylinderDelta 0x887cee8)
	bool GetCurrentWindImpulseCylinderDelta(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWindManager.BreakWindImpulseRadius (Underlying native function: BreakWindImpulseRadius 0x887c4e8)
	static void BreakWindImpulseRadius(struct FFortWindImpulseRadius& InWindImpulseRadius, struct FVector& ImpulseLocation, float& ImpulseRadius, float& ImpulseMagnitude, float& ImpulseBlendTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWindManager.BreakWindImpulseCylinderDelta (Underlying native function: BreakWindImpulseCylinderDelta 0x887bdbc)
	static void BreakWindImpulseCylinderDelta(struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta, struct FVector& WindDeltaCenter, bool& bWindImpulseInitialized, bool& bWindRipplesOutward, float& WindDeltaSectionWidth, float& WindDeltaInnerSectionRadius, float& WindDeltaOuterSectionRadius, float& WindDeltaMaximumRadius, float& WindDeltaDesiredOverallBlendTime, float& WindDeltaSectionBlendTime, float& WindDeltaSectionCurrentBlendTime, float& WindDeltaPreviousMagnitude, float& WindDeltaSectionCurrentMagnitude, float& WindDeltaDesiredMagnitude, struct FBox& WindDeltaOuterWorldBounds, struct FBox& WindDeltaInnerWorldBounds, struct FBox& WindImpulseBounds, struct FFortWindImpulseHandle& WindImpulseHandleToModify); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWindManager.BreakWindImpulseCylinderAdvanced (Underlying native function: BreakWindImpulseCylinderAdvanced 0x887ba14)
	static void BreakWindImpulseCylinderAdvanced(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FVector& WindLocation, float& WindInnerRadius, float& WindOuterRadius, struct FVector& WindWorldDirection, float& WindMagnitude, struct FBox& WindWorldBounds, bool& bIsWindChanging, bool& bIsWindChangePending); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWindManager.BreakWindImpulseCylinder (Underlying native function: BreakWindImpulseCylinder 0x887b7b4)
	static void BreakWindImpulseCylinder(struct FFortWindImpulseCylinder& InWindImpulseCylinder, struct FVector& ImpulseLocation, float& ImpulseInnerRadius, float& ImpulseOuterRadius, float& ImpulseMagnitude, struct FVector& ImpulseDirection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWindManager.AddWindParticleSystemComponent (Has no native function)
	void AddWindParticleSystemComponent(class UParticleSystemComponent*& ParticleSystemComponent); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortWindManager.AddWindImpulseCylinder (Underlying native function: AddWindImpulseCylinder 0x887b4b0)
	struct FFortWindImpulseHandle AddWindImpulseCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, float& BlendTime); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWindManager.AddWindImpulse (Underlying native function: AddWindImpulse 0x887b400)
	struct FFortWindImpulseHandle AddWindImpulse(struct FFortWindImpulseRadius& WindImpulse); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

