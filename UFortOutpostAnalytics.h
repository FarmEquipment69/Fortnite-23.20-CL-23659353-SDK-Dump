// Class /Script/FortniteGame.FortOutpostAnalytics
// Size: 0x28
class UFortOutpostAnalytics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostSupplyDropPickedUp (Underlying native function: FireAnalyticsEvent_OutpostSupplyDropPickedUp 0x820f3e0)
	static void FireAnalyticsEventOutpostSupplyDropPickedUp(class UObject*& SourceBp, struct TArray<struct FFortAnalyticsEventAttribute>& Resourcees); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostLoaded (Underlying native function: FireAnalyticsEvent_OutpostLoaded 0x820f32c)
	static void FireAnalyticsEventOutpostLoaded(class UObject*& SourceBp, int& DefenseLeg); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostLeaveOutpost (Underlying native function: FireAnalyticsEvent_OutpostLeaveOutpost 0x820f128)
	static void FireAnalyticsEventOutpostLeaveOutpost(class UObject*& SourceBp, struct FString& BuildingType, int& NumWavesStarted, int& DefenseLeg); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostDefenseStart (Underlying native function: FireAnalyticsEvent_OutpostDefenseStart 0x820f030)
	static void FireAnalyticsEventOutpostDefenseStart(class UObject*& SourceBp, int& NumWavesTotal, int& DefenseLeg); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostDefenseEnd (Underlying native function: FireAnalyticsEvent_OutpostDefenseEnd 0x820ee64)
	static void FireAnalyticsEventOutpostDefenseEnd(class UObject*& SourceBp, int& NumWavesStarted, int& NumWavesTotal, bool& bSucceeded, bool& bAbandoned, int& DefenseLeg); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostBuildingDefended (Underlying native function: FireAnalyticsEvent_OutpostBuildingDefended 0x820eca0)
	static void FireAnalyticsEventOutpostBuildingDefended(class UObject*& SourceBp, struct FString& BuildingType, int& NumMissionsCompleted); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostBuildingActivated (Underlying native function: FireAnalyticsEvent_OutpostBuildingActivated 0x820eadc)
	static void FireAnalyticsEventOutpostBuildingActivated(class UObject*& SourceBp, struct FString& BuildingType, int& NumMissionsCompleted); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostAttackWaveStarted (Underlying native function: FireAnalyticsEvent_OutpostAttackWaveStarted 0x820e7c0)
	static void FireAnalyticsEventOutpostAttackWaveStarted(class UObject*& SourceBp, struct FString& BuildingType, int& NumWavesStarted, struct FString& Direction, int& DefenseLeg); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOutpostAnalytics.FireAnalyticsEvent_OutpostAttackWaveCompleted (Underlying native function: FireAnalyticsEvent_OutpostAttackWaveCompleted 0x820e45c)
	static void FireAnalyticsEventOutpostAttackWaveCompleted(class UObject*& SourceBp, struct FString& BuildingType, int& NumWavesCompleted, bool& Succeeded, struct FString& Direction, int& DefenseLeg); // (Final | Native | Static | Public | BlueprintCallable)
};

