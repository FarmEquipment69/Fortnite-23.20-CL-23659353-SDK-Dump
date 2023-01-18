// Class /Script/FortniteGame.FortAthenaMutator_MarkerUtilities
// Size: 0x7e0
class AFortAthenaMutator_MarkerUtilities : public AFortAthenaMutator
{
	struct FScalableFloat bMarkIndicatedPlayersOnCompass; // 0x330 (0x28)
	unsigned char unreflected_358[0x8]; // 0x358 (0x8) 
	struct FFortAthenaCompassIcon IndicatedPlayerCompassIcon; // 0x360 (0xe0)
	struct FScalableFloat bMarkIndicatedPlayersOnMap; // 0x440 (0x28)
	unsigned char unreflected_468[0x8]; // 0x468 (0x8) 
	struct FMarkerUtilitiesMapIcon IndicatedPlayerMapIcon; // 0x470 (0xf0)
	struct FScalableFloat NumTopScoringTeamsToShowOnMap; // 0x560 (0x28)
	struct FScalableFloat bDisplayLocalPlayerAsTopScoringTeamsOnMap; // 0x588 (0x28)
	struct FScalableFloat bOverlayTopScoringTeamIndicatorOnLocalPlayerOnMap; // 0x5b0 (0x28)
	struct TArray<struct FMarkerUtilitiesMapPlacementIcon> PlacementBasedMapIcons; // 0x5d8 (0x10)
	struct FGameplayTag TopScoringPlayerSpecialActorTag; // 0x5e8 (0x4)
	unsigned char unreflected_5ec[0x4]; // 0x5ec (0x4) 
	struct FScalableFloat TopScoringPlayerSpecialActorRepInterval; // 0x5f0 (0x28)
	struct FScalableFloat NumTopScoringTeamsToShowOnCompass; // 0x618 (0x28)
	struct TArray<struct FMarkerUtilitiesCompassPlacementIcon> PlacementBasedCompassIcons; // 0x640 (0x10)
	struct FScalableFloat bDrawLocalPlayerTopScoringTeamOnCompass; // 0x650 (0x28)
	struct FScalableFloat WorldIndicatorIndicatorZOffset; // 0x678 (0x28)
	struct FScalableFloat bWorldIndicatorIndicatorClampToScreen; // 0x6a0 (0x28)
	struct FScalableFloat bDrawMarkedActorStencils; // 0x6c8 (0x28)
	struct FName StencilName; // 0x6f0 (0x4)
	unsigned char unreflected_6f4[0x4]; // 0x6f4 (0x4) 
	struct TMap<struct TWeakObjectPtr<class AActor>, struct FFortAthenaCompassIcon> IndicatedActorCompassIconOverrideMap; // 0x6f8 (0x50)
	unsigned char unreflected_748[0x10]; // 0x748 (0x10) 
	struct TArray<struct FMarkerUtilitiesTeamPlacement*> ReplicatedTeamPlacements; // 0x758 (0x10)
	unsigned char unreflected_768[0x50]; // 0x768 (0x50) 
	struct FScalableFloat bUseAthenaTeamScoreForRanking; // 0x7b8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_MarkerUtilities.RestoreIndicatedActorCompassIcon (Underlying native function: RestoreIndicatedActorCompassIcon 0x84d0b3c)
	void RestoreIndicatedActorCompassIcon(class AActor*& Actor); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_MarkerUtilities.OverrideIndicatedActorCompassIcon (Underlying native function: OverrideIndicatedActorCompassIcon 0x84d07b0)
	void OverrideIndicatedActorCompassIcon(class AActor*& Actor, struct FFortAthenaCompassIcon& CompassIcon); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_MarkerUtilities.GetIndicatedActorCompassIcon (Underlying native function: GetIndicatedActorCompassIcon 0x84cd9a4)
	struct FFortAthenaCompassIcon GetIndicatedActorCompassIcon(class AActor*& Actor); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

