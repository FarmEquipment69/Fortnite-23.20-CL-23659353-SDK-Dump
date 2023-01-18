// Class /Script/FortniteGame.FortDeployableBaseAnalytics
// Size: 0x28
class UFortDeployableBaseAnalytics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_Neighborhood_ConsoleOpened (Underlying native function: FireAnalyticsEvent_Neighborhood_ConsoleOpened 0x820e358)
	static void FireAnalyticsEventNeighborhoodConsoleOpened(class AFortPlayerController*& FortPC, struct FUniqueNetIdRepl& OwnerId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_WaveStarted (Underlying native function: FireAnalyticsEvent_CombatZone_WaveStarted 0x820dec8)
	static void FireAnalyticsEventCombatZoneWaveStarted(class AFortPlayerController*& FortPC, int& Tier, int& Wave, int& NumberOfPlayers, struct TArray<class ADeployableBaseCore*>& TargetCores, struct TArray<class ADeployableBaseCore*>& AllCores, struct FFortTierCollectionLayoutOutput& CollectionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_WaveFailed (Underlying native function: FireAnalyticsEvent_CombatZone_WaveFailed 0x820daa8)
	static void FireAnalyticsEventCombatZoneWaveFailed(class AFortPlayerController*& FortPC, int& Tier, int& Wave, int& NumberOfPlayers, struct TArray<class ADeployableBaseCore*>& TargetCores, struct TArray<class ADeployableBaseCore*>& AllCores, struct FFortTierCollectionLayoutOutput& CollectionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_TierStarted (Underlying native function: FireAnalyticsEvent_CombatZone_TierStarted 0x820d914)
	static void FireAnalyticsEventCombatZoneTierStarted(class AFortPlayerController*& FortPC, int& Tier, int& NumberOfPlayers, struct FFortTierCollectionLayoutOutput& CollectionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_TierFailed (Underlying native function: FireAnalyticsEvent_CombatZone_TierFailed 0x820d738)
	static void FireAnalyticsEventCombatZoneTierFailed(class AFortPlayerController*& FortPC, int& Tier, int& Wave, int& NumberOfPlayers, struct FFortTierCollectionLayoutOutput& CollectionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_TierCompleted (Underlying native function: FireAnalyticsEvent_CombatZone_TierCompleted 0x820d318)
	static void FireAnalyticsEventCombatZoneTierCompleted(class AFortPlayerController*& FortPC, int& Tier, int& FinalWave, int& NumberOfPlayers, struct TArray<class ADeployableBaseCore*>& TargetCores, struct TArray<class ADeployableBaseCore*>& AllCores, struct FFortTierCollectionLayoutOutput& CollectionData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortDeployableBaseAnalytics.FireAnalyticsEvent_CombatZone_ConsoleOpened (Underlying native function: FireAnalyticsEvent_CombatZone_ConsoleOpened 0x820d2a8)
	static void FireAnalyticsEventCombatZoneConsoleOpened(class AFortPlayerController*& FortPC); // (Final | Native | Static | Public | BlueprintCallable)
};

