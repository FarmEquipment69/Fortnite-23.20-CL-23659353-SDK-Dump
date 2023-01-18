// Class /Script/FortniteGame.ScriptedPawnRunScriptBlueprintAction
// Size: 0x90
class UScriptedPawnRunScriptBlueprintAction : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate RunScriptCompletePin; // 0x30 (0x10)
	class UObject* WorldContextObject; // 0x40 (0x8)
	struct FVector SpawnLocation; // 0x48 (0x18)
	struct FRotator SpawnRotator; // 0x60 (0x18)
	struct FString ScriptName; // 0x78 (0x10)
	class AFortPlayerPawn* ScriptedPawn; // 0x88 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.ScriptedPawnRunScriptBlueprintAction.RunScriptOnPawn (Underlying native function: RunScriptOnPawn 0x8f7d824)
	static class UScriptedPawnRunScriptBlueprintAction* RunScriptOnPawn(struct FString& ScriptName, class AFortPlayerPawn*& TargetPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ScriptedPawnRunScriptBlueprintAction.OnScriptComplete (Underlying native function: OnScriptComplete 0x8f7d608)
	void OnScriptComplete(); // (Final | Net | NetReliable | Native | Event | NetMulticast | Private | 0x80000000)

	// Function /Script/FortniteGame.ScriptedPawnRunScriptBlueprintAction.InternalRunScriptOnPawn (Underlying native function: InternalRunScriptOnPawn 0x8f7d330)
	void InternalRunScriptOnPawn(); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)
};

