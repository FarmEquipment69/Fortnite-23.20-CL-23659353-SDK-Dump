// Class /Script/CampsiteRuntime.AbandonedCampsiteManager
// Size: 0x408
class AAbandonedCampsiteManager : public AActor
{
	struct FScalableFloat MinNumAbandonedCampsites; // 0x288 (0x28)
	struct FScalableFloat MaxNumAbandonedCampsites; // 0x2b0 (0x28)
	struct FScalableFloat AbandonedCampsitesEnabled; // 0x2d8 (0x28)
	struct TMap<enum EAbandonedCampsiteSpawnType, struct FScalableFloat> SpawnTypeWeights; // 0x300 (0x50)
	struct TWeakObjectPtr<class UEnvQuery> SpawnEnvironmentalQuery; // 0x350 (0x28)
	struct TWeakObjectPtr<class UClass> AbandonedCampsiteAsset; // 0x378 (0x28)
	struct TArray<class AAbandonedCampsitePlacedSpawner*> PreplacedCampsiteSpawnPoints; // 0x3a0 (0x10)
	struct TArray<class AAbandonedCampsitePlacedSpawner*> DeferredPreplacedCampsiteSpawns; // 0x3b0 (0x10)
	unsigned char unreflected_3c0[0x10]; // 0x3c0 (0x10) 
	class UCampsiteAnalytics* Analytics; // 0x3d0 (0x8)
	unsigned char padding_3d8[0x30]; // 0x3d8 (0x30)

	/* Functions */

	// Function /Script/CampsiteRuntime.AbandonedCampsiteManager.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x72a3c8c)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)
};

