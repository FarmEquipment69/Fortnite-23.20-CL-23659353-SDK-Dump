// Class /Script/FortniteGame.FortControllerComponent_MapDiscoverability
// Size: 0x398
class UFortControllerComponent_MapDiscoverability : public UFortControllerComponent_HasCoupledWidgets
{
	unsigned char unreflected_b0[0x18]; // 0xb0 (0x18) 
	class UMaterialParameterCollection* DiscoverabilityMPC; // 0xc8 (0x8)
	struct FScalableFloat DiscoveryUnmaskDuration; // 0xd0 (0x28)
	bool bFlipYInput; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x3]; // 0xf9 (0x3) 
	float DiscoveryUnmaskUpdateRate; // 0xfc (0x4)
	struct TWeakObjectPtr<class UTextureRenderTarget2D> DiscoveryRenderTarget; // 0x100 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> StencilMaterial; // 0x128 (0x28)
	struct FPoiDiscoverabilityDataArray DiscoveredData; // 0x150 (0x120)
	unsigned char unreflected_270[0xe0]; // 0x270 (0xe0) 
	class UMaterialInstanceDynamic* StencilMID; // 0x350 (0x8)
	class UMaterialInterface* StencilInstance; // 0x358 (0x8)
	class UTextureRenderTarget2D* DiscoveryRenderTargetInstance; // 0x360 (0x8)
	unsigned char padding_368[0x30]; // 0x368 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.UndiscoverAllPois (Underlying native function: UndiscoverAllPois 0x828a190)
	void UndiscoverAllPois(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.UndiscoverAllLandmarks (Underlying native function: UndiscoverAllLandmarks 0x828a114)
	void UndiscoverAllLandmarks(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.UndiscoverAllAreas (Underlying native function: UndiscoverAllAreas 0x828a0b0)
	void UndiscoverAllAreas(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.TeleportToAllLocations (Underlying native function: TeleportToAllLocations 0x828a02c)
	void TeleportToAllLocations(float& DelayBetween); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.SetDiscoverStatusByTag (Underlying native function: SetDiscoverStatusByTag 0x828995c)
	void SetDiscoverStatusByTag(struct FString& tag, bool& bDiscovered); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.PlaylistLoadedStub (Underlying native function: PlaylistLoadedStub 0x8289578)
	void PlaylistLoadedStub(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.EventsReadyStub (Underlying native function: EventsReadyStub 0x286de70)
	void EventsReadyStub(struct TArray<struct FString>& Events); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.DiscoverAllPois (Underlying native function: DiscoverAllPois 0x8287cf0)
	void DiscoverAllPois(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.DiscoverAllLandmarks (Underlying native function: DiscoverAllLandmarks 0x8287c74)
	void DiscoverAllLandmarks(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.DiscoverAllAreas (Underlying native function: DiscoverAllAreas 0x8287c10)
	void DiscoverAllAreas(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MapDiscoverability.CancelTeleportToAllLocations (Underlying native function: CancelTeleportToAllLocations 0x82865f0)
	void CancelTeleportToAllLocations(); // (Final | BlueprintAuthorityOnly | Exec | Native | Private)
};

