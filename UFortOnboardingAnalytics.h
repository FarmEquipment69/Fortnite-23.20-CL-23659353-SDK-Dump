// Class /Script/FortniteGame.FortOnboardingAnalytics
// Size: 0x28
class UFortOnboardingAnalytics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_VinderTipPlayed (Underlying native function: FireAnalyticsEvent_VinderTipPlayed 0x820f688)
	static void FireAnalyticsEventVinderTipPlayed(class UObject*& SourceBp, struct FString& VinderTipTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialStartupFailed (Underlying native function: FireAnalyticsEvent_TutorialStartupFailed 0x820f5d4)
	static void FireAnalyticsEventTutorialStartupFailed(class UObject*& SourceBp, int& MatchmakingResult); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialCompleted (Underlying native function: FireAnalyticsEvent_TutorialCompleted 0x820f520)
	static void FireAnalyticsEventTutorialCompleted(class UObject*& SourceBp, bool& WasSuccessful); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialCanceled (Underlying native function: FireAnalyticsEvent_TutorialCanceled 0x820f4b0)
	static void FireAnalyticsEventTutorialCanceled(class UObject*& SourceBp); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_MineCartDestroyed (Underlying native function: FireAnalyticsEvent_MineCartDestroyed 0x820e2e8)
	static void FireAnalyticsEventMineCartDestroyed(class UObject*& SourceBp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_CinematicSkipped (Underlying native function: FireAnalyticsEvent_CinematicSkipped 0x820d114)
	static void FireAnalyticsEventCinematicSkipped(class UObject*& SourceBp, struct FString& CinematicName); // (Final | Native | Static | Public | BlueprintCallable)
};

