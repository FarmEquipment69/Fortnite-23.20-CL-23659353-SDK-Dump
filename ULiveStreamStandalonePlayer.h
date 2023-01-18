// Class /Script/FortniteUI.LiveStreamStandalonePlayer
// Size: 0x290
class ULiveStreamStandalonePlayer : public UUserWidget
{
	class UFortStreamMediaSource* StreamMediaSource; // 0x268 (0x8)
	class UFortVideoPlayerWidget* VideoPlayerWidget; // 0x270 (0x8)
	unsigned char padding_278[0x18]; // 0x278 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.UnblockPlayer (Underlying native function: UnblockPlayer 0xa84cd70)
	static void UnblockPlayer(enum ELiveStreamStandaloneBlocked& BlockedReason); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.Stop (Underlying native function: Stop 0xa84c630)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.SetPIPStartTime (Underlying native function: SetPIPStartTime 0xa84b6b4)
	static void SetPIPStartTime(float& InStartTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.SetPIPMediaID (Underlying native function: SetPIPMediaID 0xa84b4ac)
	static void SetPIPMediaID(struct FString& InVideoUID); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.SetPIPLive (Underlying native function: SetPIPLive 0xa84b43c)
	static void SetPIPLive(bool& bInLive); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.SetPIPIgnorePartySync (Underlying native function: SetPIPIgnorePartySync 0xa84b35c)
	static void SetPIPIgnorePartySync(bool& bIgnore); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.SetPIPCDNDistribution (Underlying native function: SetPIPCDNDistribution 0xa84b0d4)
	static void SetPIPCDNDistribution(struct TArray<float>& Weights); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.ResetPIPState (Underlying native function: ResetPIPState 0xa84948c)
	static void ResetPIPState(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.Play (Underlying native function: Play 0xa8490b8)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.PIPReadyToRender (Has no native function)
	void PIPReadyToRender(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.OnRetrieveVideoUrlSuccess (Underlying native function: OnRetrieveVideoUrlSuccess 0xa848f04)
	void OnRetrieveVideoUrlSuccess(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.OnRetrieveVideoUrlFailure (Underlying native function: OnRetrieveVideoUrlFailure 0xa848c44)
	void OnRetrieveVideoUrlFailure(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.GetPlayerIsBlocked (Underlying native function: GetPlayerIsBlocked 0xa847920)
	static bool GetPlayerIsBlocked(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.GetPIPStandaloneError (Underlying native function: GetPIPStandaloneError 0xa84789c)
	static bool GetPIPStandaloneError(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.GetPIPIgnorePartySync (Underlying native function: GetPIPIgnorePartySync 0xa84786c)
	static bool GetPIPIgnorePartySync(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.FireStandalonePIPAnalytics (Underlying native function: FireStandalonePIPAnalytics 0xa846b70)
	void FireStandalonePIPAnalytics(bool& bInStarted); // (Final | Native | Public)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.DisableSharing (Underlying native function: DisableSharing 0xa84645c)
	void DisableSharing(bool& bInDisable); // (Final | Native | Private)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.CheckMediaStarted (Underlying native function: CheckMediaStarted 0xa8463e4)
	void CheckMediaStarted(); // (Final | Native | Private)

	// Function /Script/FortniteUI.LiveStreamStandalonePlayer.BlockPlayer (Underlying native function: BlockPlayer 0xa846334)
	static void BlockPlayer(enum ELiveStreamStandaloneBlocked& BlockedReason); // (Final | Native | Static | Public | BlueprintCallable)
};

