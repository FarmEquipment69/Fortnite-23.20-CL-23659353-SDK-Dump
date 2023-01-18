// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x18]; // 0x50 (0x18)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements (Underlying native function: CacheAchievements 0x6e5b8b0)
	static class UAchievementQueryCallbackProxy* CacheAchievements(class UObject*& WorldContextObject, class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions (Underlying native function: CacheAchievementDescriptions 0x6e5b764)
	static class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject*& WorldContextObject, class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)
};

