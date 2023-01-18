// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition (Underlying native function: UpdateExternalTrackingHMDPosition 0x97d081c)
	static void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate (Underlying native function: SetXRTimedInputActionDelegate 0x97d0700)
	static void SetXRTimedInputActionDelegate(struct FName& ActionName, struct FDelegate& InDelegate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate (Underlying native function: SetXRDisconnectDelegate 0x97d0668)
	static void SetXRDisconnectDelegate(struct FDelegate& InDisconnectedDelegate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale (Underlying native function: SetWorldToMetersScale 0x97d0590)
	static void SetWorldToMetersScale(class UObject*& WorldContext, float& NewScale); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin (Underlying native function: SetTrackingOrigin 0x97d0434)
	static void SetTrackingOrigin(struct TEnumAsByte<EHMDTrackingOrigin>& Origin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture (Underlying native function: SetSpectatorScreenTexture 0x97d02e8)
	static void SetSpectatorScreenTexture(class UTexture*& InTexture); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout (Underlying native function: SetSpectatorScreenModeTexturePlusEyeLayout 0x97d007c)
	static void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D& EyeRectMin, struct FVector2D& EyeRectMax, struct FVector2D& TextureRectMin, struct FVector2D& TextureRectMax, bool& bDrawEyeFirst, bool& bClearBlack, bool& bUseAlpha); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode (Underlying native function: SetSpectatorScreenMode 0x97d0010)
	static void SetSpectatorScreenMode(enum ESpectatorScreenMode& Mode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes (Underlying native function: SetClippingPlanes 0x97cfb48)
	static void SetClippingPlanes(float& Near, float& Far); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition (Underlying native function: ResetOrientationAndPosition 0x97cf9dc)
	static void ResetOrientationAndPosition(float& Yaw, struct TEnumAsByte<EOrientPositionSelector>& Options); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable (Underlying native function: IsSpectatorScreenModeControllable 0x97cf998)
	static bool IsSpectatorScreenModeControllable(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode (Underlying native function: IsInLowPersistenceMode 0x2486284)
	static bool IsInLowPersistenceMode(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled (Underlying native function: IsHeadMountedDisplayEnabled 0x97cf628)
	static bool IsHeadMountedDisplayEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected (Underlying native function: IsHeadMountedDisplayConnected 0x97cf5b8)
	static bool IsHeadMountedDisplayConnected(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking (Underlying native function: IsDeviceTracking 0x97cf4f0)
	static bool IsDeviceTracking(struct FXRDeviceId*& XRDeviceId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition (Underlying native function: HasValidTrackingPosition 0x97cf464)
	static bool HasValidTrackingPosition(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags (Underlying native function: GetXRSystemFlags 0x97cf3f4)
	static int GetXRSystemFlags(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale (Underlying native function: GetWorldToMetersScale 0x97cf35c)
	static float GetWorldToMetersScale(class UObject*& WorldContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState (Underlying native function: GetVRFocusState 0x97cf1d4)
	static void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString (Underlying native function: GetVersionString 0x97cf2e8)
	static struct FString GetVersionString(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform (Underlying native function: GetTrackingToWorldTransform 0x97cf100)
	static struct FTransform GetTrackingToWorldTransform(class UObject*& WorldContext); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters (Underlying native function: GetTrackingSensorParameters 0x97ced08)
	static void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int& Index); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform (Underlying native function: GetTrackingOriginTransform 0x97cebc0)
	static bool GetTrackingOriginTransform(struct TEnumAsByte<EHMDTrackingOrigin>& Origin, struct FTransform& OutTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin (Underlying native function: GetTrackingOrigin 0x97ceb7c)
	static struct TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters (Underlying native function: GetPositionalTrackingCameraParameters 0x97ce8c8)
	static void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect (Underlying native function: GetPlayAreaRect 0x97ce768)
	static bool GetPlayAreaRect(struct FTransform& OutTransform, struct FVector2D& OutRect); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds (Underlying native function: GetPlayAreaBounds 0x97ce6ac)
	static struct FVector2D GetPlayAreaBounds(struct TEnumAsByte<EHMDTrackingOrigin>& Origin); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity (Underlying native function: GetPixelDensity 0x97ce684)
	static float GetPixelDensity(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition (Underlying native function: GetOrientationAndPosition 0x97ce4bc)
	static void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors (Underlying native function: GetNumOfTrackingSensors 0x97ce478)
	static int GetNumOfTrackingSensors(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData (Underlying native function: GetMotionControllerData 0x97ce2a8)
	static void GetMotionControllerData(class UObject*& WorldContext, enum EControllerHand& Hand, struct FXRMotionControllerData& MotionControllerData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState (Underlying native function: GetHMDWornState 0x97ce094)
	static struct TEnumAsByte<EHMDWornState> GetHMDWornState(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName (Underlying native function: GetHMDDeviceName 0x97ce01c)
	static struct FName GetHMDDeviceName(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData (Underlying native function: GetHMDData 0x97cdf0c)
	static void GetHMDData(class UObject*& WorldContext, struct FXRHMDData& HMDData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose (Underlying native function: GetDeviceWorldPose 0x97cdcfc)
	static void GetDeviceWorldPose(class UObject*& WorldContext, struct FXRDeviceId*& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose (Underlying native function: GetDevicePose 0x97cdb2c)
	static void GetDevicePose(struct FXRDeviceId*& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& Position); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile (Underlying native function: GetCurrentInteractionProfile 0x97cd970)
	static bool GetCurrentInteractionProfile(enum EControllerHand& Hand, struct FString& InteractionProfile); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime (Underlying native function: GetControllerTransformForTime 0x97cd52c)
	static bool GetControllerTransformForTime(class UObject*& WorldContext, int& ControllerIndex, struct FName& MotionSource, struct FTimespan*& Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& Position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, struct FVector& LinearAcceleration); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices (Underlying native function: EnumerateTrackedDevices 0x97cd3f0)
	static struct TArray<struct FXRDeviceId*> EnumerateTrackedDevices(struct FName& SystemId, enum EXRTrackedDeviceType& DeviceType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode (Underlying native function: EnableLowPersistenceMode 0x71a6cc4)
	static void EnableLowPersistenceMode(bool& bEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD (Underlying native function: EnableHMD 0x97cd0e8)
	static bool EnableHMD(bool& bEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice (Underlying native function: DisconnectRemoteXRDevice 0x97cd0b4)
	static void DisconnectRemoteXRDevice(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice (Underlying native function: ConnectRemoteXRDevice 0x97ccbc0)
	static struct TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(struct FString& IpAddress, int& BitRate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures (Underlying native function: ConfigureGestures 0x97ccb10)
	static bool ConfigureGestures(struct FXRGestureConfig& GestureConfig); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate (Underlying native function: ClearXRTimedInputActionDelegate 0x97cca94)
	static void ClearXRTimedInputActionDelegate(struct FName& ActionPath); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD (Underlying native function: CalibrateExternalTrackingToHMD 0x97cc968)
	static void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey (Underlying native function: BreakKey 0x97cc48c)
	static void BreakKey(struct FKey& InKey, struct FString& InteractionProfile, enum EControllerHand& Hand, struct FName& MotionSource, struct FString& Indentifier, struct FString& Component); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

