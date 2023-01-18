// Class /Script/FortniteUI.FortCreativeChannelBrowser
// Size: 0x3c8
class UFortCreativeChannelBrowser : public UCommonActivatableWidget
{
	unsigned char unreflected_3c8[0x3c8]; 

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeChannelBrowser.ShouldShowChannelDetails (Underlying native function: ShouldShowChannelDetails 0xa6690c8)
	bool ShouldShowChannelDetails(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativeChannelBrowser.RequestCloseUI (Underlying native function: RequestCloseUI 0xa667c98)
	void RequestCloseUI(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeChannelBrowser.GetSortedDeviceMap (Underlying native function: GetSortedDeviceMap 0xa6626ec)
	static struct TMap<class AActor*, struct FText> GetSortedDeviceMap(struct TMap<class AActor*, struct FText>& InDeviceMap); // (Final | Native | Static | Protected | HasOutParms | BlueprintCallable)
};

