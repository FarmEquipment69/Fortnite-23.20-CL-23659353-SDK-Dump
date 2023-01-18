// Class /Script/FortniteGame.AthenaGliderItemDefinition
// Size: 0xb90
class UAthenaGliderItemDefinition : public UAthenaCosmeticItemDefinition
{
	enum EFortGliderType GliderType; // 0x7b0 (0x1)
	unsigned char unreflected_7b1[0x7]; // 0x7b1 (0x7) 
	struct FVector CameraFramingBoundsCenterOffset; // 0x7b8 (0x18)
	struct TWeakObjectPtr<class UClass> ParachutePrefabClass; // 0x7d0 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> SkeletalMesh; // 0x7f8 (0x28)
	struct FTransform GliderMeshTransform; // 0x820 (0x60)
	struct TWeakObjectPtr<class UClass> AnimClass; // 0x880 (0x28)
	struct TWeakObjectPtr<class UClass> CameraClass; // 0x8a8 (0x28)
	struct TWeakObjectPtr<class UFortPlayerGliderAnimSet> PlayerAnimSet; // 0x8d0 (0x28)
	struct FName AttachSocket; // 0x8f8 (0x4)
	unsigned char unreflected_8fc[0x4]; // 0x8fc (0x4) 
	struct TArray<struct FGliderTrailParticleDefinition> TrailEffectDefinitions; // 0x900 (0x10)
	struct TArray<struct FFortCosmeticDependentSwapData> GlidingSwaps; // 0x910 (0x10)
	struct FName DeployEffectTagName; // 0x920 (0x4)
	bool CleanUpDeployEffect; // 0x924 (0x1)
	unsigned char unreflected_925[0x3]; // 0x925 (0x3) 
	struct FName UserSkeletonParameterName; // 0x928 (0x4)
	unsigned char unreflected_92c[0x4]; // 0x92c (0x4) 
	struct TWeakObjectPtr<class USoundBase> OpenSound; // 0x930 (0x28)
	struct TWeakObjectPtr<class USoundBase> CloseSound; // 0x958 (0x28)
	struct TWeakObjectPtr<class USoundBase> ThrustLoopSound; // 0x980 (0x28)
	struct TMap<enum ELayeredAudioTriggerDirection, struct FFortGliderLayeredAudioFloatParam> ThrustSoundParams; // 0x9a8 (0x50)
	bool bShouldHideBackbling; // 0x9f8 (0x1)
	unsigned char unreflected_9f9[0x7]; // 0x9f9 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UAthenaBackpackItemDefinition>> BackblingsToExcludeFromHiding; // 0xa00 (0x10)
	struct FGameplayTagContainer BackblingSetsToExcludeFromHiding; // 0xa10 (0x20)
	struct TArray<struct FGliderBitsDefinition> Bits; // 0xa30 (0x10)
	struct FFortCosmeticOverlayMaterialData OverlayMaterialData; // 0xa40 (0x50)
	struct TWeakObjectPtr<class UParticleSystem> TrailParticles; // 0xa90 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> OwnerTrailParticles; // 0xab8 (0x28)
	bool bActivateTrailsOnRotationalMovement; // 0xae0 (0x1)
	unsigned char unreflected_ae1[0x3]; // 0xae1 (0x3) 
	struct FName TrailParamName; // 0xae4 (0x4)
	struct TWeakObjectPtr<class UParticleSystem> TrailEffect; // 0xae8 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> TrailEffectNiagara; // 0xb10 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> TrailEffect2; // 0xb38 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> TrailEffectNiagara2; // 0xb60 (0x28)
	bool bAttachNiagaraEffectToPlayerPawn; // 0xb88 (0x1)
	bool bAutoActivate; // 0xb89 (0x1)
	unsigned char padding_b8a[0x6]; // 0xb8a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.MigrateGliderEffectDefinitions (Underlying native function: MigrateGliderEffectDefinitions 0x26daa0c)
	void MigrateGliderEffectDefinitions(); // (Final | Native | Public)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetUserSkeletonParameterName (Underlying native function: GetUserSkeletonParameterName 0x8761238)
	struct FName GetUserSkeletonParameterName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetTrailEffectDefinitions (Underlying native function: GetTrailEffectDefinitions 0x87611b4)
	struct TArray<struct FGliderTrailParticleDefinition> GetTrailEffectDefinitions(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetPlayerAnimSetPtr (Underlying native function: GetPlayerAnimSetPtr 0x8760e94)
	struct TWeakObjectPtr<class UFortPlayerGliderAnimSet> GetPlayerAnimSetPtr(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetParachutePrefabClass (Underlying native function: GetParachutePrefabClass 0x8760e30)
	class UClass* GetParachutePrefabClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetOverrideSkelMeshPtr (Underlying native function: GetOverrideSkelMeshPtr 0x8760cf8)
	struct TWeakObjectPtr<class USkeletalMesh> GetOverrideSkelMeshPtr(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetOverrideAnimSetPtr (Underlying native function: GetOverrideAnimSetPtr 0x8760bc0)
	struct TWeakObjectPtr<class UClass> GetOverrideAnimSetPtr(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetBits (Underlying native function: GetBits 0x876000c)
	struct TArray<struct FGliderBitsDefinition> GetBits(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaGliderItemDefinition.GetAttachNiagaraEffectToPlayerPawn (Underlying native function: GetAttachNiagaraEffectToPlayerPawn 0x875ffdc)
	bool GetAttachNiagaraEffectToPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

