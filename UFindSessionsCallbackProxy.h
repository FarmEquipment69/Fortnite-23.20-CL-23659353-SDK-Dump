// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	unsigned char padding_50[0x40]; // 0x50 (0x40)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName (Underlying native function: GetServerName 0x6e5e57c)
	static struct FString GetServerName(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs (Underlying native function: GetPingInMs 0x6e5e40c)
	static int GetPingInMs(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers (Underlying native function: GetMaxPlayers 0x6e5e2a0)
	static int GetMaxPlayers(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers (Underlying native function: GetCurrentPlayers 0x6e5e12c)
	static int GetCurrentPlayers(struct FBlueprintSessionResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions (Underlying native function: FindSessions 0x6e5d7a0)
	static class UFindSessionsCallbackProxy* FindSessions(class UObject*& WorldContextObject, class APlayerController*& PlayerController, int& MaxResults, bool& bUseLAN); // (Final | Native | Static | Public | BlueprintCallable)
};

