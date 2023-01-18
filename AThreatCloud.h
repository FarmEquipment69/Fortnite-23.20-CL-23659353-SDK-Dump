// Class /Script/FortniteAI.ThreatCloud
// Size: 0x4d0
class AThreatCloud : public AActor
{
	struct TArray<class UBoxComponent*> LightningSourceAreas; // 0x288 (0x10)
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	struct FSlateBrush MiniMapIconBrush; // 0x2a0 (0xc0)
	float MiniMapIconPercent; // 0x360 (0x4)
	unsigned char unreflected_364[0xc]; // 0x364 (0xc) 
	struct FSlateBrush MiniMapFarOffIconBrush; // 0x370 (0xc0)
	struct FLinearColor ActiveTint; // 0x430 (0x10)
	struct FLinearColor InActiveTint; // 0x440 (0x10)
	float ActiveTransitionTime; // 0x450 (0x4)
	float DeathTimerDuration; // 0x454 (0x4)
	float CloudMiniMapTickInterval; // 0x458 (0x4)
	unsigned char unreflected_45c[0x14]; // 0x45c (0x14) 
	float MiniMapFarOffIconDegreesOfArc; // 0x470 (0x4)
	unsigned char unreflected_474[0xc]; // 0x474 (0xc) 
	struct FBox ThreatBoxVolume; // 0x480 (0x38)
	float GroundLevelUnderCloud; // 0x4b8 (0x4)
	unsigned char unreflected_4bc[0x4]; // 0x4bc (0x4) 
	struct TArray<struct FVector> GoalActorLocations; // 0x4c0 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.ThreatCloud.OnThreatVolumeChanged (Has no native function)
	void OnThreatVolumeChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.OnLightningStrike (Has no native function)
	void OnLightningStrike(struct FVector& StartLocation, struct FVector& EndLocation, class ABuildingRift*& Rift, bool& bLightningStruckRift); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.OnCloudStart (Has no native function)
	void OnCloudStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.OnCloudHiddenChange (Has no native function)
	void OnCloudHiddenChange(bool& bCloudsAreHidden); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.OnCloudDeactivated (Has no native function)
	void OnCloudDeactivated(enum EFortThreatDeactivationType& DeactivationType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.OnCloudActivated (Has no native function)
	void OnCloudActivated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.OnBeginDeath (Has no native function)
	void OnBeginDeath(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.ManualLightningFlash (Has no native function)
	void ManualLightningFlash(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.ThreatCloud.GetThreatVolume (Underlying native function: GetThreatVolume 0xa35ab20)
	struct FBox GetThreatVolume(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

