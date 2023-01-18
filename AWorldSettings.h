// Class /Script/Engine.WorldSettings
// Size: 0x4a8
class AWorldSettings : public AInfo
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	int VisibilityCellSize; // 0x290 (0x4)
	struct TEnumAsByte<EVisibilityAggressiveness> VisibilityAggressiveness; // 0x294 (0x1)
	unsigned char bPrecomputeVisibility; // 0x295 (0x1)
	unsigned char bPlaceCellsOnlyAlongCameraTracks; // 0x295 (0x1)
	unsigned char bEnableWorldBoundsChecks; // 0x295 (0x1)
	unsigned char bEnableNavigationSystem; // 0x295 (0x1)
	unsigned char bEnableAISystem; // 0x295 (0x1)
	unsigned char bEnableWorldComposition; // 0x295 (0x1)
	unsigned char bUseClientSideLevelStreamingVolumes; // 0x295 (0x1)
	unsigned char bEnableWorldOriginRebasing; // 0x295 (0x1)
	unsigned char bWorldGravitySet; // 0x296 (0x1)
	unsigned char bGlobalGravitySet; // 0x296 (0x1)
	unsigned char bMinimizeBSPSections; // 0x296 (0x1)
	unsigned char bForceNoPrecomputedLighting; // 0x296 (0x1)
	unsigned char bHighPriorityLoading; // 0x296 (0x1)
	unsigned char bHighPriorityLoadingLocal; // 0x296 (0x1)
	unsigned char bOverrideDefaultBroadphaseSettings; // 0x296 (0x1)
	unsigned char bGenerateSingleClusterForLevel; // 0x296 (0x1)
	unsigned char unreflected_297[0x1]; // 0x297 (0x1) 
	struct TWeakObjectPtr<class UClass> AISystemClass; // 0x298 (0x28)
	struct FVector LevelInstancePivotOffset; // 0x2c0 (0x18)
	class UNavigationSystemConfig* NavigationSystemConfig; // 0x2d8 (0x8)
	class UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x2e0 (0x8)
	class UWorldPartition* WorldPartition; // 0x2e8 (0x8)
	struct TArray<class UDataLayerAsset*> BaseNavmeshDataLayers; // 0x2f0 (0x10)
	float WorldToMeters; // 0x300 (0x4)
	float KillZ; // 0x304 (0x4)
	class UClass* KillZDamageType; // 0x308 (0x8)
	float WorldGravityZ; // 0x310 (0x4)
	float GlobalGravityZ; // 0x314 (0x4)
	class UClass* DefaultPhysicsVolumeClass; // 0x318 (0x8)
	class UClass* PhysicsCollisionHandlerClass; // 0x320 (0x8)
	class UClass* DefaultGameMode; // 0x328 (0x8)
	class UClass* GameNetworkManagerClass; // 0x330 (0x8)
	int PackedLightAndShadowMapTextureSize; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct FVector DefaultColorScale; // 0x340 (0x18)
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x358 (0x4)
	float GlobalDistanceFieldViewDistance; // 0x35c (0x4)
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x360 (0x4)
	unsigned char unreflected_364[0x4]; // 0x364 (0x4) 
	struct FReverbSettings DefaultReverbSettings; // 0x368 (0x20)
	struct FInteriorSettings DefaultAmbientZoneSettings; // 0x388 (0x24)
	unsigned char unreflected_3ac[0x4]; // 0x3ac (0x4) 
	class USoundMix* DefaultBaseSoundMix; // 0x3b0 (0x8)
	float TimeDilation; // 0x3b8 (0x4)
	float CinematicTimeDilation; // 0x3bc (0x4)
	float DemoPlayTimeDilation; // 0x3c0 (0x4)
	float MinGlobalTimeDilation; // 0x3c4 (0x4)
	float MaxGlobalTimeDilation; // 0x3c8 (0x4)
	float MinUndilatedFrameTime; // 0x3cc (0x4)
	float MaxUndilatedFrameTime; // 0x3d0 (0x4)
	unsigned char unreflected_3d4[0x4]; // 0x3d4 (0x4) 
	struct FBroadphaseSettings BroadphaseSettings; // 0x3d8 (0x80)
	struct TArray<struct FNetViewer> ReplicationViewers; // 0x458 (0x10)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x468 (0x10)
	class APlayerState* PauserPlayerState; // 0x478 (0x8)
	int MaxNumberOfBookmarks; // 0x480 (0x4)
	unsigned char unreflected_484[0x4]; // 0x484 (0x4) 
	class UClass* DefaultBookmarkClass; // 0x488 (0x8)
	struct TArray<class UBookmarkBase*> BookmarkArray; // 0x490 (0x10)
	class UClass* LastBookmarkClass; // 0x4a0 (0x8)

	/* Functions */

	// Function /Script/Engine.WorldSettings.OnRep_WorldGravityZ (Underlying native function: OnRep_WorldGravityZ 0x23eff98)
	void OnRepWorldGravityZ(); // (Native | Public)
};

