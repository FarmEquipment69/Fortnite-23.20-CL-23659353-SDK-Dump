// Class /Script/AugmentedReality.ARGeoTrackingSupport
// Size: 0x28
class UARGeoTrackingSupport : public UObject
{

	/* Functions */

	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport (Underlying native function: GetGeoTrackingSupport 0x97bb390)
	static class UARGeoTrackingSupport* GetGeoTrackingSupport(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason (Underlying native function: GetGeoTrackingStateReason 0x720202c)
	enum EARGeoTrackingStateReason GetGeoTrackingStateReason(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState (Underlying native function: GetGeoTrackingState 0x18f39fc)
	enum EARGeoTrackingState GetGeoTrackingState(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy (Underlying native function: GetGeoTrackingAccuracy 0x8a64d0c)
	enum EARGeoTrackingAccuracy GetGeoTrackingAccuracy(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude (Underlying native function: AddGeoAnchorAtLocationWithAltitude 0x97b8c60)
	bool AddGeoAnchorAtLocationWithAltitude(float& Longitude, float& Latitude, float& AltitudeMeters, struct FString& OptionalAnchorName); // (Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation (Underlying native function: AddGeoAnchorAtLocation 0x97b8a70)
	bool AddGeoAnchorAtLocation(float& Longitude, float& Latitude, struct FString& OptionalAnchorName); // (Native | Public | BlueprintCallable)
};

