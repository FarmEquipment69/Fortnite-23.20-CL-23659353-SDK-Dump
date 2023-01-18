// Class /Script/FortniteGame.FortWeaponPickaxeAthena
// Size: 0x1288
class AFortWeaponPickaxeAthena : public AFortWeapon
{
	class UFXSystemComponent* SwingVFX; // 0x1040 (0x8)
	class UFXSystemComponent* IdleVFX; // 0x1048 (0x8)
	class UFXSystemComponent* AnimTrailsPSC; // 0x1050 (0x8)
	class UParticleSystem* AnimTrailsPSCTemplate; // 0x1058 (0x8)
	class UNiagaraSystem* AnimTrailsNiagaraAsset; // 0x1060 (0x8)
	bool bUseAnimTrailsPSC; // 0x1068 (0x1)
	unsigned char unreflected_1069[0x3]; // 0x1069 (0x3) 
	struct FName AnimTrailsFirstSocketName; // 0x106c (0x4)
	struct FName AnimTrailsSecondSocketName; // 0x1070 (0x4)
	float AnimTrailsWidth; // 0x1074 (0x4)
	struct FName IdleFXSocketName; // 0x1078 (0x4)
	struct FName SwingFXSocketName; // 0x107c (0x4)
	class USoundBase* GenericImpactSound; // 0x1080 (0x8)
	class UMaterialInstanceDynamic* Material0MID; // 0x1088 (0x8)
	bool bWatchKills; // 0x1090 (0x1)
	unsigned char unreflected_1091[0x3]; // 0x1091 (0x3) 
	float WatchedKills; // 0x1094 (0x4)
	bool bCandyCaneKillReaction; // 0x1098 (0x1)
	unsigned char unreflected_1099[0x7]; // 0x1099 (0x7) 
	class USoundBase* CQCEnemyAudio; // 0x10a0 (0x8)
	struct TArray<class UAnimMontage*> PokeAnimationsToCheckForOnImpact; // 0x10a8 (0x10)
	class UAnimMontage* PickaxeHarvestingMontage; // 0x10b8 (0x8)
	class UAthenaPickaxeItemDefinition* CachedCosmeticItemDefinition; // 0x10c0 (0x8)
	unsigned char unreflected_10c8[0x8]; // 0x10c8 (0x8) 
	struct TWeakObjectPtr<class USkeletalMesh> SoftFallbackMesh; // 0x10d0 (0x28)
	class USkeletalMesh* LoadedFallbackMesh; // 0x10f8 (0x8)
	struct FFortAthenaLoadout CosmeticData; // 0x1100 (0x178)
	struct FName FrontendFXParameterName; // 0x1278 (0x4)
	struct FPickaxeFXAttachmentRules IdleFXAttachmentRules; // 0x127c (0x3)
	struct FPickaxeFXAttachmentRules SwingFXAttachmentRules; // 0x127f (0x3)
	unsigned char padding_1282[0x6]; // 0x1282 (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.OnRep_CosmeticData (Underlying native function: OnRep_CosmeticData 0x24e202c)
	void OnRepCosmeticData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetUseAnimTrailsPSC (Underlying native function: GetUseAnimTrailsPSC 0x28ab428)
	bool GetUseAnimTrailsPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetSwingVFXComponent (Underlying native function: GetSwingVFXComponent 0x27002e4)
	class UFXSystemComponent* GetSwingVFXComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetSwingPSC (Underlying native function: GetSwingPSC 0x84363fc)
	class UParticleSystemComponent* GetSwingPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetSwingFXSocketName (Underlying native function: GetSwingFXSocketName 0x843635c)
	struct FName GetSwingFXSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetIdleVFXComponent (Underlying native function: GetIdleVFXComponent 0x264da50)
	class UFXSystemComponent* GetIdleVFXComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetIdlePSC (Underlying native function: GetIdlePSC 0x298f714)
	class UParticleSystemComponent* GetIdlePSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetIdleFXSocketName (Underlying native function: GetIdleFXSocketName 0x8435b04)
	struct FName GetIdleFXSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailVFXComponent (Underlying native function: GetAnimTrailVFXComponent 0x2d102bc)
	class UFXSystemComponent* GetAnimTrailVFXComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsWidth (Underlying native function: GetAnimTrailsWidth 0x2a1869c)
	float GetAnimTrailsWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsSecondSocketName (Underlying native function: GetAnimTrailsSecondSocketName 0x2a18684)
	struct FName GetAnimTrailsSecondSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsPSCTemplate (Underlying native function: GetAnimTrailsPSCTemplate 0x2a186b4)
	class UParticleSystem* GetAnimTrailsPSCTemplate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsPSC (Underlying native function: GetAnimTrailsPSC 0x27d51cc)
	class UFXSystemComponent* GetAnimTrailsPSC(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsNiagaraAsset (Underlying native function: GetAnimTrailsNiagaraAsset 0x2a186cc)
	class UNiagaraSystem* GetAnimTrailsNiagaraAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.GetAnimTrailsFirstSocketName (Underlying native function: GetAnimTrailsFirstSocketName 0x2a1866c)
	struct FName GetAnimTrailsFirstSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.CreateAnimTrailFX (Underlying native function: CreateAnimTrailFX 0x8435628)
	class UFXSystemComponent* CreateAnimTrailFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.BP_GetCosmeticData (Underlying native function: BP_GetCosmeticData 0x8434f28)
	struct FFortAthenaLoadout BPGetCosmeticData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponPickaxeAthena.AttachesAnimTrailsToWeapon (Underlying native function: AttachesAnimTrailsToWeapon 0x27fa610)
	bool AttachesAnimTrailsToWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

