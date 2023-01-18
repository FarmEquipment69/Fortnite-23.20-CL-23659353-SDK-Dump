// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x30]; // 0x50 (0x30)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress (Underlying native function: WriteAchievementProgress 0x6e5f5e0)
	static class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FName& AchievementName, float& Progress, int& UserTag); // (Final | Native | Static | Public | BlueprintCallable)
};

