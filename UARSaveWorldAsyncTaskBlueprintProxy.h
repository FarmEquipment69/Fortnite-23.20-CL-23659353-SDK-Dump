// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60 (0x10)
	unsigned char padding_70[0x10]; // 0x70 (0x10)

	/* Functions */

	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld (Underlying native function: ARSaveWorld 0x97b8744)
	static class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

