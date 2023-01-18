// Class /Script/FortniteUI.FortCreativeDeviceBrowser
// Size: 0x538
class UFortCreativeDeviceBrowser : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x28]; // 0x3a8 (0x28) 
	struct TArray<int> CreativeDeviceInfo; // 0x3d0 (0x10)
	struct TMap<int, struct FCreativeDeviceInfo> CreativeDeviceInfoMap; // 0x3e0 (0x50)
	struct TArray<int> CreativeDeviceWithBindingsInfo; // 0x430 (0x10)
	struct TMap<int, struct FCreativeDeviceInfo> CreativeDeviceWithBindingsInfoMap; // 0x440 (0x50)
	struct TMap<int, struct FCreativeDeviceCached> KnownDevicesMap; // 0x490 (0x50)
	unsigned char padding_4e0[0x58]; // 0x4e0 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.RequestPageBasicDeviceTrackingInfosWithBindings (Underlying native function: RequestPageBasicDeviceTrackingInfosWithBindings 0xa667dec)
	bool RequestPageBasicDeviceTrackingInfosWithBindings(bool& bAddRequestedPageToCurrentPage, struct FString& SearchString); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.RequestPageBasicDeviceTrackingInfos (Underlying native function: RequestPageBasicDeviceTrackingInfos 0xa667cd4)
	bool RequestPageBasicDeviceTrackingInfos(bool& bAddRequestedPageToCurrentPage, struct FString& SearchString); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.RequestCloseUI (Underlying native function: RequestCloseUI 0xa667c98)
	void RequestCloseUI(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.RequestAssignCurrentSelectedDevice (Underlying native function: RequestAssignCurrentSelectedDevice 0xa667c0c)
	bool RequestAssignCurrentSelectedDevice(int& DeviceTrackingGUIDToAssign); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.OnSelectedDeviceInfoFailed (Has no native function)
	void OnSelectedDeviceInfoFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.OnDeviceDetailsInfoReceived (Has no native function)
	void OnDeviceDetailsInfoReceived(struct FCreativeDeviceInfo& SelectedDeviceInfo); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.OnBasicDeviceInfosWithBindingsPageUpdated (Has no native function)
	void OnBasicDeviceInfosWithBindingsPageUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.OnBasicDeviceInfosPageUpdated (Has no native function)
	void OnBasicDeviceInfosPageUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.IsTeleportEnabled (Underlying native function: IsTeleportEnabled 0x61c2c30)
	bool IsTeleportEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.GetSortedDeviceMap (Underlying native function: GetSortedDeviceMap 0xa66284c)
	static struct TMap<class AActor*, struct FText> GetSortedDeviceMap(struct TMap<class AActor*, struct FText>& InDeviceMap); // (Final | Native | Static | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.GetScrollOffsetToRequestNewPage (Underlying native function: GetScrollOffsetToRequestNewPage 0x61c2bf0)
	float GetScrollOffsetToRequestNewPage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.GetRequestDelay (Underlying native function: GetRequestDelay 0x61c2b00)
	float GetRequestDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.DebugPrintCreativeDeviceWithBindingsInfo (Underlying native function: DebugPrintCreativeDeviceWithBindingsInfo 0x26daa0c)
	void DebugPrintCreativeDeviceWithBindingsInfo(); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortCreativeDeviceBrowser.DebugPrintCreativeDeviceInfo (Underlying native function: DebugPrintCreativeDeviceInfo 0x26daa0c)
	void DebugPrintCreativeDeviceInfo(); // (Final | Native | Protected | BlueprintCallable | Const)
};

