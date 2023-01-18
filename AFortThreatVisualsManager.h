// Class /Script/FortniteAI.FortThreatVisualsManager
// Size: 0x540
class AFortThreatVisualsManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UClass* CloudBlueprint; // 0x290 (0x8)
	float CloudRadius; // 0x298 (0x4)
	float ThreatBoxVolumeTopPadding; // 0x29c (0x4)
	float ThreatBoxVolumeBottomPadding; // 0x2a0 (0x4)
	bool bUseLocalPlayersOnlyForCloudMinimumHeight; // 0x2a4 (0x1)
	bool bHideClouds; // 0x2a5 (0x1)
	unsigned char unreflected_2a6[0x2]; // 0x2a6 (0x2) 
	float CloudMinimumHeightAbovePlayers; // 0x2a8 (0x4)
	float CloudMinimumHeightAboveGround; // 0x2ac (0x4)
	float CloudMinimumAltitude; // 0x2b0 (0x4)
	float CloudMaxVerticalDelta; // 0x2b4 (0x4)
	float CloudMinSpeed; // 0x2b8 (0x4)
	float CloudMaxSpeed; // 0x2bc (0x4)
	float StormWindCloudRadius; // 0x2c0 (0x4)
	float StormWindGoalRadius; // 0x2c4 (0x4)
	float StormWindFalloffRadius; // 0x2c8 (0x4)
	float StormWindInactiveMagnitude; // 0x2cc (0x4)
	float StormWindActiveMagnitude; // 0x2d0 (0x4)
	float StormWindDesiredDeltaBlendTime; // 0x2d4 (0x4)
	float StormWindDirectionAdditionalAngle; // 0x2d8 (0x4)
	unsigned char unreflected_2dc[0x4]; // 0x2dc (0x4) 
	struct FThreatLocationArray ThreatLocations; // 0x2e0 (0x118)
	struct FStormWindArray StormWindArray; // 0x3f8 (0x118)
	struct TArray<struct FVector> GoalActorLocations; // 0x510 (0x10)
	unsigned char padding_520[0x20]; // 0x520 (0x20)

	/* Functions */

	// Function /Script/FortniteAI.FortThreatVisualsManager.StormsExist (Underlying native function: StormsExist 0xa310bd4)
	bool StormsExist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortThreatVisualsManager.SetMinimumCloudAltitude (Underlying native function: SetMinimumCloudAltitude 0x9c9c764)
	void SetMinimumCloudAltitude(float& NewMinimumAltitude); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortThreatVisualsManager.SetCloudsAreHidden (Underlying native function: SetCloudsAreHidden 0xa310b14)
	void SetCloudsAreHidden(bool& bHide); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortThreatVisualsManager.ResetMinimumCloudAltitude (Underlying native function: ResetMinimumCloudAltitude 0xa310afc)
	void ResetMinimumCloudAltitude(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnWorldReady (Has no native function)
	void OnWorldReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnThreatCloudsChanged (Has no native function)
	void OnThreatCloudsChanged(struct TArray<struct FThreatLocationInfo>& ThreatLocationInfo); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnRep_ThreatLocations (Underlying native function: OnRep_ThreatLocations 0x8546790)
	void OnRepThreatLocations(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnRep_StormWinds (Underlying native function: OnRep_StormWinds 0x2646488)
	void OnRepStormWinds(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnRep_HideClouds (Underlying native function: OnRep_HideClouds 0x22c0e58)
	void OnRepHideClouds(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnRep_GoalActorLocations (Underlying native function: OnRep_GoalActorLocations 0x4866d04)
	void OnRepGoalActorLocations(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortThreatVisualsManager.OnBeginThreatVisualsPrecursor (Has no native function)
	void OnBeginThreatVisualsPrecursor(class AActor*& SourceActor, struct FVector& EndLocation); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteAI.FortThreatVisualsManager.GetThreatClouds (Underlying native function: GetThreatClouds 0xa3109dc)
	struct TArray<struct FThreatLocationInfo> GetThreatClouds(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortThreatVisualsManager.GetThreatCloud (Underlying native function: GetThreatCloud 0xa3108e8)
	class AThreatCloud* GetThreatCloud(struct FThreatLocationInfo& ThreatLocInfo); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortThreatVisualsManager.GetCloudsAreHidden (Underlying native function: GetCloudsAreHidden 0xa3108a4)
	bool GetCloudsAreHidden(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortThreatVisualsManager.BeginThreatVisualsPrecursor (Underlying native function: BeginThreatVisualsPrecursor 0xa3107c8)
	void BeginThreatVisualsPrecursor(class AActor*& SourceActor, struct FVector& ThreatLocation); // (Net | NetReliable | Native | Event | NetMulticast | Public | HasDefaults)
};

