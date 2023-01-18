// Class /Script/FortniteGame.FortAsyncAction_CheckForUpdate
// Size: 0x68
class UFortAsyncAction_CheckForUpdate : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnUpToDate; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnUpdateRequired; // 0x40 (0x10)
	class UObject* WorldContextObject; // 0x50 (0x8)
	bool bShowDialogOnFailure; // 0x58 (0x1)
	unsigned char padding_59[0xf]; // 0x59 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_CheckForUpdate.CheckForUpdate (Underlying native function: CheckForUpdate 0x8cec744)
	static class UFortAsyncAction_CheckForUpdate* CheckForUpdate(class UObject*& InWorldContextObject, bool& InShowDialogOnFailure); // (Final | Native | Static | Public | BlueprintCallable)
};

