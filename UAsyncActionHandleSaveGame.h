// Class /Script/Engine.AsyncActionHandleSaveGame
// Size: 0x68
class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed; // 0x30 (0x10)
	unsigned char unreflected_40[0x20]; // 0x40 (0x20) 
	class USaveGame* SaveGameObject; // 0x60 (0x8)

	/* Functions */

	// Function /Script/Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot (Underlying native function: AsyncSaveGameToSlot 0x9d79888)
	static class UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(class UObject*& WorldContextObject, class USaveGame*& SaveGameObject, struct FString& SlotName, int& UserIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.AsyncActionHandleSaveGame.AsyncLoadGameFromSlot (Underlying native function: AsyncLoadGameFromSlot 0x9d796c0)
	static class UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(class UObject*& WorldContextObject, struct FString& SlotName, int& UserIndex); // (Final | Native | Static | Public | BlueprintCallable)
};

