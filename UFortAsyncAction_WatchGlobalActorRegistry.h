// Class /Script/FortniteGame.FortAsyncAction_WatchGlobalActorRegistry
// Size: 0x60
class UFortAsyncAction_WatchGlobalActorRegistry : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnActorRegistered; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnActorUnregistered; // 0x40 (0x10)
	unsigned char padding_50[0x10]; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_WatchGlobalActorRegistry.WatchGlobalActorRegistryWithTag (Underlying native function: WatchGlobalActorRegistryWithTag 0x8547cb8)
	static class UFortAsyncAction_WatchGlobalActorRegistry* WatchGlobalActorRegistryWithTag(class UObject*& WorldContextObject, struct FGameplayTag& TagToWatch, bool& bOnlyWatchForFirstRegistration); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_WatchGlobalActorRegistry.HandleActorUnregisteredWithTag (Underlying native function: HandleActorUnregisteredWithTag 0x8545af8)
	void HandleActorUnregisteredWithTag(struct FGameplayTag& tag, class AActor*& Actor); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortAsyncAction_WatchGlobalActorRegistry.HandleActorRegisteredWithTag (Underlying native function: HandleActorRegisteredWithTag 0x8545af8)
	void HandleActorRegisteredWithTag(struct FGameplayTag& tag, class AActor*& Actor); // (Final | Native | Private | HasOutParms)
};

