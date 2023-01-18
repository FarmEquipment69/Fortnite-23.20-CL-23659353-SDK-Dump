// Class /Script/FortniteGame.FortAthenaMutator_DeimosSurvival
// Size: 0x488
class AFortAthenaMutator_DeimosSurvival : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	struct TWeakObjectPtr<class UEnvQuery> AdjustSafezoneCentersQuery; // 0x338 (0x28)
	struct TArray<struct FFortAthenaMutator_SurvivalObjectiveData> ObjectivesData; // 0x360 (0x10)
	unsigned char unreflected_370[0x28]; // 0x370 (0x28) 
	struct FAthenaGameMessageData GameMsgIntro; // 0x398 (0x50)
	struct FAthenaGameMessageData GameMsgCompleteObjective; // 0x3e8 (0x50)
	struct FAthenaGameMessageData GameMsgDownTime; // 0x438 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_DeimosSurvival.OnSafezoneChanged (Underlying native function: OnSafezoneChanged 0x84a8e8c)
	void OnSafezoneChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaMutator_DeimosSurvival.OnPlaylistDataLoaded (Underlying native function: OnPlaylistDataLoaded 0x84a89f0)
	void OnPlaylistDataLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContainerTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_DeimosSurvival.OnBuildingActorDestroyed (Underlying native function: OnBuildingActorDestroyed 0x84a77d4)
	void OnBuildingActorDestroyed(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)
};

