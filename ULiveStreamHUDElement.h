// Class /Script/FortniteUI.LiveStreamHUDElement
// Size: 0x380
class ULiveStreamHUDElement : public UFortHUDElementWidget
{
	class USoundSourceBus* SourceBus; // 0x2d0 (0x8)
	class USoundSubmixBase* DefaultAudioSubmix; // 0x2d8 (0x8)
	class USoundSubmixBase* LicensedAudioSubmix; // 0x2e0 (0x8)
	unsigned char padding_2e8[0x98]; // 0x2e8 (0x98)

	/* Functions */

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPVolumeMultiplier (Underlying native function: SetPIPVolumeMultiplier 0xa84b97c)
	static void SetPIPVolumeMultiplier(float& InMultiplayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPVideoUID (Underlying native function: SetPIPVideoUID 0xa84b72c)
	static void SetPIPVideoUID(struct FString& InVideoUID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPStartTime (Underlying native function: SetPIPStartTime 0xa84b63c)
	static void SetPIPStartTime(float& InStartTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPLive (Underlying native function: SetPIPLive 0xa84b3cc)
	static void SetPIPLive(bool& bInLive); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPForceEnabled (Underlying native function: SetPIPForceEnabled 0xa84b2ec)
	static void SetPIPForceEnabled(bool& bForced); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPEOSGSBlackout (Underlying native function: SetPIPEOSGSBlackout 0xa84b27c)
	static void SetPIPEOSGSBlackout(bool& bInEnable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPDisableInstructions (Underlying native function: SetPIPDisableInstructions 0xa84b20c)
	static void SetPIPDisableInstructions(bool& bDisable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPCDNWeights (Underlying native function: SetPIPCDNWeights 0xa84b168)
	static void SetPIPCDNWeights(struct TArray<float>& InWeights); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetPIPAutoClose (Underlying native function: SetPIPAutoClose 0xa84b064)
	static void SetPIPAutoClose(bool& bAutoClose); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetMirrorScreen (Underlying native function: SetMirrorScreen 0xa84ae58)
	static void SetMirrorScreen(int& ScreenIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetMirrorPIPAudioSubmix (Underlying native function: SetMirrorPIPAudioSubmix 0xa84ad90)
	static void SetMirrorPIPAudioSubmix(bool& bInDefault, bool& bForce); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetMirrorPIPAudioDisable (Underlying native function: SetMirrorPIPAudioDisable 0xa84ad08)
	static void SetMirrorPIPAudioDisable(bool& bInDisable); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.SetMirroredPIPAnalyicsMetadata (Underlying native function: SetMirroredPIPAnalyicsMetadata 0xa84aec8)
	static void SetMirroredPIPAnalyicsMetadata(struct FName& MediaName, int64_t& CurrentProgressTimecode, struct FName& MediaPlayerName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.IsUsingMirrorScreen (Underlying native function: IsUsingMirrorScreen 0xa8485b8)
	static bool IsUsingMirrorScreen(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPVolumeMultiplier (Underlying native function: GetPIPVolumeMultiplier 0xa847904)
	static float GetPIPVolumeMultiplier(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPVideoUID (Underlying native function: GetPIPVideoUID 0xa8478d0)
	static struct FString GetPIPVideoUID(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPStartTIme (Underlying native function: GetPIPStartTIme 0xa8478b4)
	static float GetPIPStartTIme(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPLive (Underlying native function: GetPIPLive 0xa847884)
	static bool GetPIPLive(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPForceEnabled (Underlying native function: GetPIPForceEnabled 0xa847854)
	static bool GetPIPForceEnabled(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPDisableInstructions (Underlying native function: GetPIPDisableInstructions 0xa84783c)
	static bool GetPIPDisableInstructions(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPCDNWeights (Underlying native function: GetPIPCDNWeights 0xa8477c0)
	static struct TArray<float> GetPIPCDNWeights(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetPIPAutoClose (Underlying native function: GetPIPAutoClose 0xa8477a8)
	static bool GetPIPAutoClose(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.GetMirrorScreen (Underlying native function: GetMirrorScreen 0xa847790)
	static int GetMirrorScreen(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamHUDElement.FireMirroredPIPAnalytics (Underlying native function: FireMirroredPIPAnalytics 0xa846af0)
	void FireMirroredPIPAnalytics(bool& bInStarted); // (Final | Native | Public)

	// Function /Script/FortniteUI.LiveStreamHUDElement.DestroyVideoPlayer (Has no native function)
	void DestroyVideoPlayer(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.LiveStreamHUDElement.CreateVideoPlayer (Has no native function)
	void CreateVideoPlayer(); // (Event | Public | BlueprintEvent)
};

