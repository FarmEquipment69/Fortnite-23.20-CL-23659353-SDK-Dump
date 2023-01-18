// Class /Script/Niagara.NiagaraComponent
// Size: 0x7e0
class UNiagaraComponent : public UFXSystemComponent
{
	class UNiagaraSystem* Asset; // 0x540 (0x8)
	enum ENiagaraTickBehavior TickBehavior; // 0x548 (0x1)
	unsigned char unreflected_549[0x3]; // 0x549 (0x3) 
	int RandomSeedOffset; // 0x54c (0x4)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x550 (0xd8)
	unsigned char bForceSolo; // 0x628 (0x1)
	unsigned char bEnableGpuComputeDebug; // 0x628 (0x1)
	unsigned char unreflected_629[0x37]; // 0x629 (0x37) 
	unsigned char bAutoDestroy; // 0x660 (0x1)
	unsigned char bRenderingEnabled; // 0x660 (0x1)
	unsigned char bAutoManageAttachment; // 0x660 (0x1)
	unsigned char bAutoAttachWeldSimulatedBodies; // 0x660 (0x1)
	unsigned char unreflected_661[0x3]; // 0x661 (0x3) 
	float MaxTimeBeforeForceUpdateTransform; // 0x664 (0x4)
	unsigned char unreflected_668[0x8]; // 0x668 (0x8) 
	struct FMulticastInlineDelegate OnSystemFinished; // 0x670 (0x10)
	struct TWeakObjectPtr<class USceneComponent> AutoAttachParent; // 0x680 (0x8)
	struct FName AutoAttachSocketName; // 0x688 (0x4)
	enum EAttachmentRule AutoAttachLocationRule; // 0x68c (0x1)
	enum EAttachmentRule AutoAttachRotationRule; // 0x68d (0x1)
	enum EAttachmentRule AutoAttachScaleRule; // 0x68e (0x1)
	unsigned char unreflected_68f[0x9]; // 0x68f (0x9) 
	unsigned char bAllowScalability; // 0x698 (0x1)
	unsigned char unreflected_699[0x12f]; // 0x699 (0x12f) 
	class UNiagaraSimCache* SimCache; // 0x7c8 (0x8)
	class UNiagaraCullProxyComponent* CullProxy; // 0x7d0 (0x8)
	unsigned char padding_7d8[0x8]; // 0x7d8 (0x8)

	/* Functions */

	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4 (Underlying native function: SetVariableVec4 0x6bc92a0)
	void SetVariableVec4(struct FName& InVariableName, struct FVector4& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3 (Underlying native function: SetVariableVec3 0x18313fc)
	void SetVariableVec3(struct FName& InVariableName, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2 (Underlying native function: SetVariableVec2 0x6bc91d8)
	void SetVariableVec2(struct FName& InVariableName, struct FVector2D& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget (Underlying native function: SetVariableTextureRenderTarget 0x6bc9114)
	void SetVariableTextureRenderTarget(struct FName& InVariableName, class UTextureRenderTarget*& TextureRenderTarget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableTexture (Underlying native function: SetVariableTexture 0x6bc9050)
	void SetVariableTexture(struct FName& InVariableName, class UTexture*& Texture); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableStaticMesh (Underlying native function: SetVariableStaticMesh 0x6bc8f8c)
	void SetVariableStaticMesh(struct FName& InVariableName, class UStaticMesh*& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat (Underlying native function: SetVariableQuat 0x6bc8ec4)
	void SetVariableQuat(struct FName& InVariableName, struct FQuat& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariablePosition (Underlying native function: SetVariablePosition 0x24bb024)
	void SetVariablePosition(struct FName& InVariableName, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableObject (Underlying native function: SetVariableObject 0x6bc8ac0)
	void SetVariableObject(struct FName& InVariableName, class UObject*& Object); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableMatrix (Underlying native function: SetVariableMatrix 0x6bc8dd0)
	void SetVariableMatrix(struct FName& InVariableName, struct FMatrix& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial (Underlying native function: SetVariableMaterial 0x6bc8d0c)
	void SetVariableMaterial(struct FName& InVariableName, class UMaterialInterface*& Object); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor (Underlying native function: SetVariableLinearColor 0x6bc8c44)
	void SetVariableLinearColor(struct FName& InVariableName, struct FLinearColor& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableInt (Underlying native function: SetVariableInt 0x6bc8b84)
	void SetVariableInt(struct FName& InVariableName, int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat (Underlying native function: SetVariableFloat 0x235649c)
	void SetVariableFloat(struct FName& InVariableName, float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableBool (Underlying native function: SetVariableBool 0x136ec0c)
	void SetVariableBool(struct FName& InVariableName, bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetVariableActor (Underlying native function: SetVariableActor 0x6bc8ac0)
	void SetVariableActor(struct FName& InVariableName, class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior (Underlying native function: SetTickBehavior 0x6bc8a40)
	void SetTickBehavior(enum ENiagaraTickBehavior& NewTickBehavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetSystemFixedBounds (Underlying native function: SetSystemFixedBounds 0x6bc897c)
	void SetSystemFixedBounds(struct FBox& LocalBounds); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetSimCache (Underlying native function: SetSimCache 0x6bc88b4)
	void SetSimCache(class UNiagaraSimCache*& SimCache, bool& bResetSystem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta (Underlying native function: SetSeekDelta 0x6bc8830)
	void SetSeekDelta(float& InSeekDelta); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled (Underlying native function: SetRenderingEnabled 0x6bc87a4)
	void SetRenderingEnabled(bool& bInRenderingEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset (Underlying native function: SetRandomSeedOffset 0x6bc871c)
	void SetRandomSeedOffset(int& NewRandomSeedOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance (Underlying native function: SetPreviewLODDistance 0x6bc861c)
	void SetPreviewLODDistance(bool& bEnablePreviewLODDistance, float& PreviewLODDistance, float& PreviewMaxDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetPaused (Underlying native function: SetPaused 0x6bc8594)
	void SetPaused(bool& bInPaused); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4 (Underlying native function: SetNiagaraVariableVec4 0x6bc83cc)
	void SetNiagaraVariableVec4(struct FString& InVariableName, struct FVector4& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3 (Underlying native function: SetNiagaraVariableVec3 0x6bc820c)
	void SetNiagaraVariableVec3(struct FString& InVariableName, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2 (Underlying native function: SetNiagaraVariableVec2 0x6bc802c)
	void SetNiagaraVariableVec2(struct FString& InVariableName, struct FVector2D& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat (Underlying native function: SetNiagaraVariableQuat 0x6bc7e54)
	void SetNiagaraVariableQuat(struct FString& InVariableName, struct FQuat& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariablePosition (Underlying native function: SetNiagaraVariablePosition 0x6bc7c5c)
	void SetNiagaraVariablePosition(struct FString& InVariableName, struct FVector& InValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject (Underlying native function: SetNiagaraVariableObject 0x6bc71cc)
	void SetNiagaraVariableObject(struct FString& InVariableName, class UObject*& Object); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableMatrix (Underlying native function: SetNiagaraVariableMatrix 0x6bc7a64)
	void SetNiagaraVariableMatrix(struct FString& InVariableName, struct FMatrix& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor (Underlying native function: SetNiagaraVariableLinearColor 0x6bc7890)
	void SetNiagaraVariableLinearColor(struct FString& InVariableName, struct FLinearColor& InValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt (Underlying native function: SetNiagaraVariableInt 0x6bc76e0)
	void SetNiagaraVariableInt(struct FString& InVariableName, int& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat (Underlying native function: SetNiagaraVariableFloat 0x6bc752c)
	void SetNiagaraVariableFloat(struct FString& InVariableName, float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool (Underlying native function: SetNiagaraVariableBool 0x6bc737c)
	void SetNiagaraVariableBool(struct FString& InVariableName, bool& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor (Underlying native function: SetNiagaraVariableActor 0x6bc71cc)
	void SetNiagaraVariableActor(struct FString& InVariableName, class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime (Underlying native function: SetMaxSimTime 0x6bc7148)
	void SetMaxSimTime(float& InMaxTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta (Underlying native function: SetLockDesiredAgeDeltaTimeToSeekDelta 0x6bc70c8)
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool& bLock); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug (Underlying native function: SetGpuComputeDebug 0x6bc702c)
	void SetGpuComputeDebug(bool& bEnableDebug); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetForceSolo (Underlying native function: SetForceSolo 0x6bc6fac)
	void SetForceSolo(bool& bInForceSolo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetForceLocalPlayerEffect (Underlying native function: SetForceLocalPlayerEffect 0x6bc6f18)
	void SetForceLocalPlayerEffect(bool& bIsPlayerEffect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetEmitterFixedBounds (Underlying native function: SetEmitterFixedBounds 0x6bc6e2c)
	void SetEmitterFixedBounds(struct FName& EmitterName, struct FBox& LocalBounds); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge (Underlying native function: SetDesiredAge 0x6bc6d20)
	void SetDesiredAge(float& InDesiredAge); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetCustomTimeDilation (Underlying native function: SetCustomTimeDilation 0x6bc6c78)
	void SetCustomTimeDilation(float& Dilation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking (Underlying native function: SetCanRenderWhileSeeking 0x6bc6bf8)
	void SetCanRenderWhileSeeking(bool& bInCanRenderWhileSeeking); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy (Underlying native function: SetAutoDestroy 0x6bc6b78)
	void SetAutoDestroy(bool& bInAutoDestroy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetAsset (Underlying native function: SetAsset 0x2314798)
	void SetAsset(class UNiagaraSystem*& InAsset, bool& bResetExistingOverrideParameters); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability (Underlying native function: SetAllowScalability 0x6bc6af8)
	void SetAllowScalability(bool& bAllow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode (Underlying native function: SetAgeUpdateMode 0x6bc6a7c)
	void SetAgeUpdateMode(enum ENiagaraAgeUpdateMode& InAgeUpdateMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge (Underlying native function: SeekToDesiredAge 0x6bc69f0)
	void SeekToDesiredAge(float& InDesiredAge); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.ResetSystem (Underlying native function: ResetSystem 0x6bc69d4)
	void ResetSystem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem (Underlying native function: ReinitializeSystem 0x1b22e14)
	void ReinitializeSystem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.IsPaused (Underlying native function: IsPaused 0x6bc69a0)
	bool IsPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline (Underlying native function: InitForPerformanceBaseline 0x6bc6964)
	void InitForPerformanceBaseline(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior (Underlying native function: GetTickBehavior 0x6bc694c)
	enum ENiagaraTickBehavior GetTickBehavior(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetSystemFixedBounds (Underlying native function: GetSystemFixedBounds 0x6bc690c)
	struct FBox GetSystemFixedBounds(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetSimCache (Underlying native function: GetSimCache 0x6bc68f4)
	class UNiagaraSimCache* GetSimCache(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta (Underlying native function: GetSeekDelta 0x6bc68dc)
	float GetSeekDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset (Underlying native function: GetRandomSeedOffset 0x6bc68c4)
	int GetRandomSeedOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled (Underlying native function: GetPreviewLODDistanceEnabled 0x6bc68a8)
	bool GetPreviewLODDistanceEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance (Underlying native function: GetPreviewLODDistance 0x6bc687c)
	float GetPreviewLODDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly (Underlying native function: GetNiagaraParticleValueVec3_DebugOnly 0x6bc62f8)
	struct TArray<struct FVector> GetNiagaraParticleValueVec3DebugOnly(struct FString& InEmitterName, struct FString& InValueName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly (Underlying native function: GetNiagaraParticleValues_DebugOnly 0x6bc65b8)
	struct TArray<float> GetNiagaraParticleValuesDebugOnly(struct FString& InEmitterName, struct FString& InValueName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly (Underlying native function: GetNiagaraParticlePositions_DebugOnly 0x6bc615c)
	struct TArray<struct FVector> GetNiagaraParticlePositionsDebugOnly(struct FString& InEmitterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime (Underlying native function: GetMaxSimTime 0x2d00b84)
	float GetMaxSimTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta (Underlying native function: GetLockDesiredAgeDeltaTimeToSeekDelta 0x6bc6144)
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetForceSolo (Underlying native function: GetForceSolo 0x6bc6128)
	bool GetForceSolo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetForceLocalPlayerEffect (Underlying native function: GetForceLocalPlayerEffect 0x6bc610c)
	bool GetForceLocalPlayerEffect(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetEmitterFixedBounds (Underlying native function: GetEmitterFixedBounds 0x6bc605c)
	struct FBox GetEmitterFixedBounds(struct FName& EmitterName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge (Underlying native function: GetDesiredAge 0x6bc6044)
	float GetDesiredAge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetDataInterface (Underlying native function: GetDataInterface 0x6bc5ea4)
	class UNiagaraDataInterface* GetDataInterface(struct FString& Name); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.GetCustomTimeDilation (Underlying native function: GetCustomTimeDilation 0x2d00e40)
	float GetCustomTimeDilation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetAsset (Underlying native function: GetAsset 0x25f0358)
	class UNiagaraSystem* GetAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetAllowScalability (Underlying native function: GetAllowScalability 0x6bc5e88)
	bool GetAllowScalability(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode (Underlying native function: GetAgeUpdateMode 0x2d00b3c)
	enum ENiagaraAgeUpdateMode GetAgeUpdateMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraComponent.ClearSystemFixedBounds (Underlying native function: ClearSystemFixedBounds 0x6bc5e74)
	void ClearSystemFixedBounds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.ClearSimCache (Underlying native function: ClearSimCache 0x6bc5df0)
	void ClearSimCache(bool& bResetSystem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.ClearEmitterFixedBounds (Underlying native function: ClearEmitterFixedBounds 0x6bc5d70)
	void ClearEmitterFixedBounds(struct FName& EmitterName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime (Underlying native function: AdvanceSimulationByTime 0x6bc5c94)
	void AdvanceSimulationByTime(float& SimulateTime, float& TickDeltaSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation (Underlying native function: AdvanceSimulation 0x6bc5bcc)
	void AdvanceSimulation(int& TickCount, float& TickDeltaSeconds); // (Final | Native | Public | BlueprintCallable)
};

