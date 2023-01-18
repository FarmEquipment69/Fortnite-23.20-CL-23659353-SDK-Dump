// Class /Script/FortniteGame.FortBlueprintAnalytics
// Size: 0x28
class UFortBlueprintAnalytics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireQuestAnalyticsEvent_BlueprintArray (Underlying native function: FireQuestAnalyticsEvent_BlueprintArray 0x82118e8)
	static void FireQuestAnalyticsEventBlueprintArray(class UObject*& SourceBp, struct FString& EventName, class UFortQuestItem*& Quest, struct TArray<struct FFortAnalyticsEventAttribute>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireQuestAnalyticsEvent_Blueprint (Underlying native function: FireQuestAnalyticsEvent_Blueprint 0x8211710)
	static void FireQuestAnalyticsEventBlueprint(class UObject*& SourceBp, struct FString& EventName, class UFortQuestItem*& Quest); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireMissionAnalyticsEvent_BlueprintArray (Underlying native function: FireMissionAnalyticsEvent_BlueprintArray 0x8211524)
	static void FireMissionAnalyticsEventBlueprintArray(class UObject*& SourceBp, struct FString& EventName, struct TArray<struct FFortAnalyticsEventAttribute>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireMissionAnalyticsEvent_Blueprint (Underlying native function: FireMissionAnalyticsEvent_Blueprint 0x8211334)
	static void FireMissionAnalyticsEventBlueprint(class UObject*& SourceBp, struct FString& EventName, struct FFortAnalyticsEventAttribute& Attribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_StreamingMediaRelevancy (Underlying native function: FireEvent_StreamingMediaRelevancy 0x821127c)
	static void FireEventStreamingMediaRelevancy(class AFortPlayerController*& FortPC, float& Time); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_StreamingLevelLoaded (Underlying native function: FireEvent_StreamingLevelLoaded 0x82110e8)
	static void FireEventStreamingLevelLoaded(class UObject*& WorldContextObject, struct FString& LevelName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_PurchaseTierScreen_Interaction (Underlying native function: FireEvent_PurchaseTierScreen_Interaction 0x82109ec)
	static void FireEventPurchaseTierScreenInteraction(class UObject*& SourceBp, struct FString& Interaction, int& NumberOfTiers); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_MatchmakingClientStatusTextChanged (Underlying native function: FireEvent_MatchmakingClientStatusTextChanged 0x82106e0)
	static void FireEventMatchmakingClientStatusTextChanged(class UObject*& SourceBp, bool& bMatchmakingIsLocal, bool& bUserIsMatchmaking, bool& bPartyIsPostMatchmaking, bool& bIsStormShieldMission, struct FString& QueueState, struct TEnumAsByte<EMatchmakingState>& MatchmakingState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_MatchmakingClientStarted (Underlying native function: FireEvent_MatchmakingClientStarted 0x8210594)
	static void FireEventMatchmakingClientStarted(class UObject*& SourceBp, bool& bMatchmakingStarted, bool& bClientPartyStateMatchmaking, bool& bClientPartyStateChangedPostMatchmaking); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_MatchmakingClientEnded (Underlying native function: FireEvent_MatchmakingClientEnded 0x821036c)
	static void FireEventMatchmakingClientEnded(class UObject*& SourceBp, bool& bPartyStateIsWorldView, bool& bPartyStateIsTheaterView, bool& bPartyStateIsReturningToFrontEnd, bool& bMatchmakingComplete, bool& bLobbyStarted, bool& bMatchmakingCancelled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_ItemThrownBP (Underlying native function: FireEvent_ItemThrownBP 0x82101ac)
	static void FireEventItemThrownBP(class UObject*& SourceBp, struct FString& ItemName, struct FVector& Velocity); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_EndFishingSession (Underlying native function: FireEvent_EndFishingSession 0x820ff20)
	static void FireEventEndFishingSession(class AFortPlayerPawn*& PlayerPawn, class AFortPickup*& ItemFished, bool& bFromFishingPool, class AActor*& ItemUsedToFish, struct FString& FishVariantTag, float& FishLength, bool& bBestCollected); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_BuildLimitProgressIncremented (Underlying native function: FireEvent_BuildLimitProgressIncremented 0x820fd64)
	static void FireEventBuildLimitProgressIncremented(class UObject*& SourceBp, class AFortPlayerController*& FortPC, class AFortMission*& Mission, struct TEnumAsByte<EFortBuildingType>& BuildingType, int& BuildLimitProgress, int& BuildLimit); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_BuildLimitProgressDecremented (Underlying native function: FireEvent_BuildLimitProgressDecremented 0x820fba4)
	static void FireEventBuildLimitProgressDecremented(class UObject*& SourceBp, class AController*& Destroyer, class AFortMission*& Mission, struct TEnumAsByte<EFortBuildingType>& BuildingType, int& BuildLimitProgress, int& BuildLimit); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_BeginFishingSession (Underlying native function: FireEvent_BeginFishingSession 0x820fb00)
	static void FireEventBeginFishingSession(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireEvent_AttemptLoadingStreamingLevel (Underlying native function: FireEvent_AttemptLoadingStreamingLevel 0x820f96c)
	static void FireEventAttemptLoadingStreamingLevel(class UObject*& WorldContextObject, struct FString& LevelName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireCreativeAnalyticsEvent_BlueprintArray (Underlying native function: FireCreativeAnalyticsEvent_BlueprintArray 0x820f81c)
	static void FireCreativeAnalyticsEventBlueprintArray(class UObject*& SourceBp, enum ECreativeCreatorAnalyticsType& SendType, struct TArray<struct FFortCreativeCreatorAnalyticsEventAttribute>& ArrayAttributes, class AActor*& Volume); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireAnalyticsEvent_BlueprintArray (Underlying native function: FireAnalyticsEvent_BlueprintArray 0x820cf28)
	static void FireAnalyticsEventBlueprintArray(class UObject*& SourceBp, struct FString& EventName, struct TArray<struct FFortAnalyticsEventAttribute>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireAnalyticsEvent_Blueprint (Underlying native function: FireAnalyticsEvent_Blueprint 0x820cd28)
	static void FireAnalyticsEventBlueprint(class UObject*& SourceBp, struct FString& EventName, struct FFortAnalyticsEventAttribute& Attribute); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireAnalyticEventItemIDScannerUsed (Underlying native function: FireAnalyticEventItemIDScannerUsed 0x820cc08)
	static void FireAnalyticEventItemIDScannerUsed(class AFortPlayerController*& FortPC, class AActor*& ConnectedActor, struct FVector& ScanneraPos, enum EIDScannerResult& IdScannerResult); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.FireAnalyticEventEnvironmentalItemUsed (Underlying native function: FireAnalyticEventEnvironmentalItemUsed 0x820caa4)
	static void FireAnalyticEventEnvironmentalItemUsed(class AFortPlayerController*& FortPC, class AActor*& EnvironmentalItem, float& SessionLength, enum EEnvironmentalItemEndReason& SessionEndReason, class AActor*& OptionalSecondaryItem); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBlueprintAnalytics.ConstructAnalyticsAttribute (Underlying native function: ConstructAnalyticsAttribute 0x820c474)
	static struct FFortAnalyticsEventAttribute ConstructAnalyticsAttribute(struct FString& AttributeName, struct FString& StringValue, struct FGuid& FGuidValue, int& IntValue, float& FloatValue, bool& BoolValue); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

