// Class /Script/FortniteGame.FortAsyncAction_TeleportAndWaitForLevelStreaming
// Size: 0x80
class UFortAsyncAction_TeleportAndWaitForLevelStreaming : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnComplete; // 0x30 (0x10)
	class AFortPlayerPawn* PlayerPawn; // 0x40 (0x8)
	struct FVector TeleportLocation; // 0x48 (0x18)
	struct FRotator TeleportRotation; // 0x60 (0x18)
	bool bIgnoreCollision; // 0x78 (0x1)
	bool bIgnoreSupplementalKillVolumeSweep; // 0x79 (0x1)
	unsigned char padding_7a[0x6]; // 0x7a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_TeleportAndWaitForLevelStreaming.OnPawnEndPlay (Underlying native function: OnPawnEndPlay 0x8266488)
	void OnPawnEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAsyncAction_TeleportAndWaitForLevelStreaming.OnLevelStreamingComplete (Underlying native function: OnLevelStreamingComplete 0x8266474)
	void OnLevelStreamingComplete(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAsyncAction_TeleportAndWaitForLevelStreaming.CreateTeleportAndWaitForLevelStreaming (Underlying native function: CreateTeleportAndWaitForLevelStreaming 0x8264f44)
	static class UFortAsyncAction_TeleportAndWaitForLevelStreaming* CreateTeleportAndWaitForLevelStreaming(class AFortPlayerPawn*& InPlayerPawn, struct FVector& InTeleportLocation, struct FRotator& InTeleportRotation, bool& bIgnoreCollision, bool& bIgnoreSupplementalKillVolumeSweep); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

