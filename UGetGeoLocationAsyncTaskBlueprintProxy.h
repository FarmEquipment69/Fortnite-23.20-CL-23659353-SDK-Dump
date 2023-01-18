// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xa8
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60 (0x10)
	unsigned char padding_70[0x38]; // 0x70 (0x38)

	/* Functions */

	// DelegateFunction /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature (Has no native function)
	void GetGeoLocationDelegateDelegateSignature(float& Longitude, float& Latitude, float& Altitude, struct FString& Error); // (MulticastDelegate | Public | Delegate)

	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition (Underlying native function: GetGeoLocationAtWorldPosition 0x97bb28c)
	static class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject*& WorldContextObject, struct FVector& WorldPosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

