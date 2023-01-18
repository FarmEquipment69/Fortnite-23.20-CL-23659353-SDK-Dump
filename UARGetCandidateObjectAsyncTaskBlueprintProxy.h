// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0xb0
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60 (0x10)
	unsigned char padding_70[0x40]; // 0x70 (0x40)

	/* Functions */

	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject (Underlying native function: ARGetCandidateObject 0x97b85e8)
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject*& WorldContextObject, struct FVector& Location, struct FVector& Extent); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

