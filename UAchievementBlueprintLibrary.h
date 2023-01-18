// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress (Underlying native function: GetCachedAchievementProgress 0x6e5df94)
	static void GetCachedAchievementProgress(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FName& AchievementID, bool& bFoundID, float& Progress); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription (Underlying native function: GetCachedAchievementDescription 0x6e5dc54)
	static void GetCachedAchievementDescription(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FName& AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

