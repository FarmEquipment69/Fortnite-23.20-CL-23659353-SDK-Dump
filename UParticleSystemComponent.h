// Class /Script/Engine.ParticleSystemComponent
// Size: 0x850
class UParticleSystemComponent : public UFXSystemComponent
{
	class UParticleSystem* Template; // 0x540 (0x8)
	struct TArray<class UMaterialInterface*> EmitterMaterials; // 0x548 (0x10)
	struct TArray<class USkeletalMeshComponent*> SkelMeshComponents; // 0x558 (0x10)
	unsigned char unreflected_568[0x1]; // 0x568 (0x1) 
	unsigned char bResetOnDetach; // 0x569 (0x1)
	unsigned char bUpdateOnDedicatedServer; // 0x569 (0x1)
	unsigned char bAllowRecycling; // 0x569 (0x1)
	unsigned char bAutoManageAttachment; // 0x569 (0x1)
	unsigned char bAutoAttachWeldSimulatedBodies; // 0x569 (0x1)
	unsigned char bWarmingUp; // 0x56a (0x1)
	unsigned char bOverrideLODMethod; // 0x56a (0x1)
	unsigned char bSkipUpdateDynamicDataDuringTick; // 0x56a (0x1)
	unsigned char unreflected_56b[0xa]; // 0x56b (0xa) 
	struct TEnumAsByte<ParticleSystemLODMethod> LODMethod; // 0x575 (0x1)
	enum EParticleSignificanceLevel RequiredSignificance; // 0x576 (0x1)
	unsigned char unreflected_577[0x1]; // 0x577 (0x1) 
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x578 (0x10)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x588 (0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x598 (0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x5a8 (0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x5b8 (0x10)
	bool bOldPositionValid; // 0x5c8 (0x1)
	unsigned char unreflected_5c9[0x7]; // 0x5c9 (0x7) 
	struct FVector OldPosition; // 0x5d0 (0x18)
	struct FVector PartSysVelocity; // 0x5e8 (0x18)
	float WarmupTime; // 0x600 (0x4)
	float WarmupTickRate; // 0x604 (0x4)
	unsigned char unreflected_608[0x4]; // 0x608 (0x4) 
	float SecondsBeforeInactive; // 0x60c (0x4)
	unsigned char unreflected_610[0x4]; // 0x610 (0x4) 
	float MaxTimeBeforeForceUpdateTransform; // 0x614 (0x4)
	unsigned char unreflected_618[0x20]; // 0x618 (0x20) 
	struct TArray<class UParticleSystemReplay*> ReplayClips; // 0x638 (0x10)
	unsigned char unreflected_648[0x8]; // 0x648 (0x8) 
	float CustomTimeDilation; // 0x650 (0x4)
	unsigned char unreflected_654[0x54]; // 0x654 (0x54) 
	struct TWeakObjectPtr<class USceneComponent> AutoAttachParent; // 0x6a8 (0x8)
	struct FName AutoAttachSocketName; // 0x6b0 (0x4)
	enum EAttachmentRule AutoAttachLocationRule; // 0x6b4 (0x1)
	enum EAttachmentRule AutoAttachRotationRule; // 0x6b5 (0x1)
	enum EAttachmentRule AutoAttachScaleRule; // 0x6b6 (0x1)
	unsigned char unreflected_6b7[0x51]; // 0x6b7 (0x51) 
	struct FMulticastInlineDelegate OnSystemFinished; // 0x708 (0x10)
	unsigned char padding_718[0x138]; // 0x718 (0x138)

	/* Functions */

	// Function /Script/Engine.ParticleSystemComponent.SetTrailSourceData (Underlying native function: SetTrailSourceData 0x9c10614)
	void SetTrailSourceData(struct FName& InFirstSocketName, struct FName& InSecondSocketName, struct TEnumAsByte<ETrailWidthMode>& InWidthMode, float& InWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetTemplate (Underlying native function: SetTemplate 0x1f44a70)
	void SetTemplate(class UParticleSystem*& NewTemplate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetMaterialParameter (Underlying native function: SetMaterialParameter 0x9c10550)
	void SetMaterialParameter(struct FName& ParameterName, class UMaterialInterface*& Param); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamTargetTangent (Underlying native function: SetBeamTargetTangent 0x9c1037c)
	void SetBeamTargetTangent(int& EmitterIndex, struct FVector& NewTangentPoint, int& TargetIndex); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamTargetStrength (Underlying native function: SetBeamTargetStrength 0x9c1027c)
	void SetBeamTargetStrength(int& EmitterIndex, float& NewTargetStrength, int& TargetIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamTargetPoint (Underlying native function: SetBeamTargetPoint 0x9c10170)
	void SetBeamTargetPoint(int& EmitterIndex, struct FVector& NewTargetPoint, int& TargetIndex); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamSourceTangent (Underlying native function: SetBeamSourceTangent 0x9c10064)
	void SetBeamSourceTangent(int& EmitterIndex, struct FVector& NewTangentPoint, int& SourceIndex); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamSourceStrength (Underlying native function: SetBeamSourceStrength 0x9c0ff64)
	void SetBeamSourceStrength(int& EmitterIndex, float& NewSourceStrength, int& SourceIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamSourcePoint (Underlying native function: SetBeamSourcePoint 0x9c0fe58)
	void SetBeamSourcePoint(int& EmitterIndex, struct FVector& NewSourcePoint, int& SourceIndex); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetBeamEndPoint (Underlying native function: SetBeamEndPoint 0x9c0fd80)
	void SetBeamEndPoint(int& EmitterIndex, struct FVector& NewEndPoint); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.SetAutoAttachParams (Underlying native function: SetAutoAttachParams 0x9c0fba4)
	void SetAutoAttachParams(class USceneComponent*& Parent, struct FName& SocketName, struct TEnumAsByte<EAttachLocation>& LocationType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.GetNumActiveParticles (Underlying native function: GetNumActiveParticles 0x9c0faa0)
	int GetNumActiveParticles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetNamedMaterial (Underlying native function: GetNamedMaterial 0x9c0fa0c)
	class UMaterialInterface* GetNamedMaterial(struct FName& InName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamTargetTangent (Underlying native function: GetBeamTargetTangent 0x9c0f8f8)
	bool GetBeamTargetTangent(int& EmitterIndex, int& TargetIndex, struct FVector& OutTangentPoint); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamTargetStrength (Underlying native function: GetBeamTargetStrength 0x9c0f7ec)
	bool GetBeamTargetStrength(int& EmitterIndex, int& TargetIndex, float& OutTargetStrength); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamTargetPoint (Underlying native function: GetBeamTargetPoint 0x9c0f6d8)
	bool GetBeamTargetPoint(int& EmitterIndex, int& TargetIndex, struct FVector& OutTargetPoint); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamSourceTangent (Underlying native function: GetBeamSourceTangent 0x9c0f5c4)
	bool GetBeamSourceTangent(int& EmitterIndex, int& SourceIndex, struct FVector& OutTangentPoint); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamSourceStrength (Underlying native function: GetBeamSourceStrength 0x9c0f4b8)
	bool GetBeamSourceStrength(int& EmitterIndex, int& SourceIndex, float& OutSourceStrength); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamSourcePoint (Underlying native function: GetBeamSourcePoint 0x9c0f3a4)
	bool GetBeamSourcePoint(int& EmitterIndex, int& SourceIndex, struct FVector& OutSourcePoint); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GetBeamEndPoint (Underlying native function: GetBeamEndPoint 0x9c0f2c4)
	bool GetBeamEndPoint(int& EmitterIndex, struct FVector& OutEndPoint); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ParticleSystemComponent.GenerateParticleEvent (Underlying native function: GenerateParticleEvent 0x9c0f124)
	void GenerateParticleEvent(struct FName& InEventName, float& InEmitterTime, struct FVector& InLocation, struct FVector& InDirection, struct FVector& InVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.EndTrails (Underlying native function: EndTrails 0x9c0f110)
	void EndTrails(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance (Underlying native function: CreateNamedDynamicMaterialInstance 0x9c0f048)
	class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(struct FName& InName, class UMaterialInterface*& SourceMaterial); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ParticleSystemComponent.BeginTrails (Underlying native function: BeginTrails 0x9c0ee2c)
	void BeginTrails(struct FName& InFirstSocketName, struct FName& InSecondSocketName, struct TEnumAsByte<ETrailWidthMode>& InWidthMode, float& InWidth); // (Final | Native | Public | BlueprintCallable)
};

