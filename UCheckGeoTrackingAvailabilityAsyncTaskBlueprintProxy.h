// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xa0
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x60 (0x10)
	unsigned char padding_70[0x30]; // 0x70 (0x30)

	/* Functions */

	// DelegateFunction /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature (Has no native function)
	void GeoTrackingAvailabilityDelegateDelegateSignature(bool& bIsAvailable, struct FString& Error); // (MulticastDelegate | Public | Delegate)

	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation (Underlying native function: CheckGeoTrackingAvailabilityAtLocation 0x97b9944)
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject*& WorldContextObject, float& Longitude, float& Latitude); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability (Underlying native function: CheckGeoTrackingAvailability 0x97b98a8)
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

