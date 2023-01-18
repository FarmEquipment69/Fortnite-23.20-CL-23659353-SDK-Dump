// Class /Script/FortniteGame.FortAsyncAction_GetLinkData
// Size: 0x60
class UFortAsyncAction_GetLinkData : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed; // 0x30 (0x10)
	class UObject* WorldContextObject; // 0x40 (0x8)
	struct FOnlineLinkId LinkCode; // 0x48 (0x18)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_GetLinkData.GetLinkDataOutputPin__DelegateSignature (Has no native function)
	void GetLinkDataOutputPinDelegateSignature(bool& bSuccessful, struct FCreativeLoadedLinkData& LinkData); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortAsyncAction_GetLinkData.GetLinkDataAsync (Underlying native function: GetLinkDataAsync 0x877faec)
	static class UFortAsyncAction_GetLinkData* GetLinkDataAsync(class UObject*& InWorldContextObject, struct FOnlineLinkId& InLinkId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

