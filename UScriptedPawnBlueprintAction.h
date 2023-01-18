// Class /Script/FortniteGame.ScriptedPawnBlueprintAction
// Size: 0x90
class UScriptedPawnBlueprintAction : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate ScriptCompletePin; // 0x30 (0x10)
	class UObject* WorldContextObject; // 0x40 (0x8)
	struct FVector SpawnLocation; // 0x48 (0x18)
	struct FRotator SpawnRotator; // 0x60 (0x18)
	struct FString ScriptName; // 0x78 (0x10)
	class AFortPlayerPawn* ScriptedPawn; // 0x88 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.ScriptedPawnBlueprintAction.SpawnScriptedPawn (Underlying native function: SpawnScriptedPawn 0x8f7db24)
	static class UScriptedPawnBlueprintAction* SpawnScriptedPawn(struct FString& ScriptName, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.ScriptedPawnBlueprintAction.OnScriptComplete (Underlying native function: OnScriptComplete 0x8f7d608)
	void OnScriptComplete(); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private | 0x80000000)

	// Function /Script/FortniteGame.ScriptedPawnBlueprintAction.InternalSpawnScriptedPawn (Underlying native function: InternalSpawnScriptedPawn 0x8f7d37c)
	void InternalSpawnScriptedPawn(); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)
};

